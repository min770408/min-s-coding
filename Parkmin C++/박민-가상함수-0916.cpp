#include <iostream>
#include <cstdlib>
using namespace std;

class MyData
{
protected:
	int M_nData = 10;
public:
	virtual void PrintData() {						// 가상 함수는 기본 클래스 내에서 선언되어
		cout << "MyData: " << M_nData << endl;		// 파생 클래스에 의해 재정의되는 멤버 함수이다.
	}
													// 가상 함수는 실행시간(Runtime)에 함수의 다형성
	void TestFunc() {								// (Polymorphism)을 구현하는데 사용.		
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