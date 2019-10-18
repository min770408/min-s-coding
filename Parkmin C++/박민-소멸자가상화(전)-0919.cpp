/*#include <iostream>
#include <cstdlib>
using namespace std;

class MyData
{
private:
	char *m_pszData;
public:
	MyData() { m_pszData = new char[32]; }
	~MyData() {
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

	delete pData;	// delete 연산을 하면 실 형식이 나오지 않음! 심각한 내부 오류 발생!!!

	system("pause");
	return 0;
}*/