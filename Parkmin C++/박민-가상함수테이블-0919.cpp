#include <iostream>
#include <cstdlib>
using namespace std;

class MyData
{
public:
	MyData() {
		cout << "MyData()" << endl;
	}

	virtual ~MyData();
	virtual void TestFunc1() {}
	virtual void TestFunc2() {}
};

class MyDataEX : public MyData
{
public:
	MyDataEX() {
		cout << "MyDataEX()" << endl;
	}

	virtual ~MyDataEX() {}
	virtual void TestFunc1() {}
	virtual void TestFunc2() {
		cout << "TestFunc2()" << endl;
	}
};

int main()
{
	MyData *pData = new MyDataEX;		// ��pData�� �� ������ MyData ���� ������ MyDataEX��
										// �� ���¿��� �Ϲ� �Լ��� ȣ���ϸ� pData�� ���� �ڷ����� MyData�� ȣ��Ǹ�,
	pData->TestFunc2();					// ���� �Լ��� ȣ���ϸ� MyDataEX�� ȣ���.��
	delete pData;

	system("pause");
	return 0;
}