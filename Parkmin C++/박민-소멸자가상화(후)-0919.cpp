#include <iostream>
#include <cstdlib>
using namespace std;

class MyData
{
private:
	char *m_pszData;
public:
	MyData() { m_pszData = new char[32]; }
	virtual ~MyData() {		//�Ҹ��ڸ� ����ȭ�Ͽ� �Ļ� Ŭ������ �Ҹ��ڱ��� ����� ȣ����.
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
								// �Ҹ��ڸ� ����ȭ ���� ���� ���¿��� ����� �ڵ� �ۼ��ڰ�
	system("pause");			// �߻� �ڷ����� ��ϰ� ��ü�� ���� �Ҵ� �� ������ �ϸ� ���� �߻�
	return 0;
}