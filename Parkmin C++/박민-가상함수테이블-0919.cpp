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
	MyData *pData = new MyDataEX;		// ★pData의 실 형식은 MyData 참조 형식은 MyDataEX임
										// 이 상태에서 일반 함수를 호출하면 pData의 실제 자료형인 MyData가 호출되며,
	pData->TestFunc2();					// 가상 함수를 호출하면 MyDataEX가 호출됨.★
	delete pData;

	system("pause");
	return 0;
}