#include <iostream>
#include <cstdlib>
using namespace std;

class CMyData
{
private:
	int M_ndata = 0;

public:
	CMyData() { cout << "CMyData()" << endl; }
	int GetData() { return M_ndata; }
	void SetData(int nParam) { M_ndata = nParam; }

protected:
	void PrintData() { cout << "CMyData::PrintData()" << endl; }
};

class CMyDataEx : public CMyData {			//��ӹ��� Ŭ����(�Ļ��� Ŭ����) class �Ļ� Ŭ���� �̸� : ����������(public, protected, private) �θ� Ŭ���� �̸�
public:
	CMyDataEx() { cout << "CMyDataEx()" << endl; }

	void TestFunc() {
		PrintData();
		SetData(5);
		cout << CMyData::GetData() << endl;
	}
};

int main()
{
	CMyDataEx data; //��ü ����

	data.SetData(10);
	cout << data.GetData() << endl;

	data.TestFunc();

	system("pause");
	return 0;
}