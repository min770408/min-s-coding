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

	delete pData;	// delete ������ �ϸ� �� ������ ������ ����! �ɰ��� ���� ���� �߻�!!!

	system("pause");
	return 0;
}*/