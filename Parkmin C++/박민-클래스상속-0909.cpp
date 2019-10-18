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

class CMyDataEx : public CMyData {			//상속받은 클래스(파생된 클래스) class 파생 클래스 이름 : 접근지정자(public, protected, private) 부모 클래스 이름
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
	CMyDataEx data; //객체 생성

	data.SetData(10);
	cout << data.GetData() << endl;

	data.TestFunc();

	system("pause");
	return 0;
}