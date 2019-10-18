#include <iostream>
#include <cstdlib>
using namespace std;

class MyData
{
protected:
	int M_nData = 10;
public:
	virtual void PrintData() {						// ���� �Լ��� �⺻ Ŭ���� ������ ����Ǿ�
		cout << "MyData: " << M_nData << endl;		// �Ļ� Ŭ������ ���� �����ǵǴ� ��� �Լ��̴�.
	}
													// ���� �Լ��� ����ð�(Runtime)�� �Լ��� ������
	void TestFunc() {								// (Polymorphism)�� �����ϴµ� ���.		
		cout << "***TestFunc()***" << endl;

		PrintData();
		cout << "*************" << endl;
	}
};

class MyDataEX : public MyData {
public:
	virtual void PrintData() {
		cout << "MyDataEX: " << M_nData * 2 << endl;
	}
};

int main()
{
	MyDataEX a;
	a.PrintData();

	MyData &b = a;

	b.PrintData();

	a.TestFunc();

	system("pause");
	return 0;
}