#include <iostream>
#include <cstdlib>
using namespace std;

class MyData
{
private:
	char *m_pszData;
public:
	MyData() { m_pszData = new char[32]; }
	virtual ~MyData() {		//소멸자를 가상화하여 파생 클래스의 소멸자까지 제대로 호출함.
		cout << "~MyData()" << endl;
		delete m_pszData;
	}

};

class MyDataEX : public MyData
{
private:
	int *m_pnData;
public:
	MyDataEX() { m_pnData = new int; }
	~MyDataEX() {
		cout << "~MyDataEX()" << endl;
	}
};

int main()
{
	MyData *pData = new MyDataEX;

	delete pData;
								// 소멸자를 가상화 하지 않은 상태에서 사용자 코드 작성자가
	system("pause");			// 추상 자료형을 운영하고 객체를 동적 할당 및 해제를 하면 문제 발생
	return 0;
}