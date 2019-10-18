#include <iostream>
#include <cstdlib>
using namespace std;

class DataA
{
public:
	DataA() {
		cout << "DataA()" << endl;
	}

	~DataA() {
		cout << "~DataA()" << endl;
	}
};

class DataB : public DataA
{
public:
	DataB() {
		cout << "DataB()" << endl;
	}

	~DataB() {
		cout << "~DataB()" << endl;
	}
};

class DataC : public DataB
{
public:
	DataC() {
		cout << "DataC()" << endl;
	}

	~DataC() {
		cout << "~DataC()" << endl;
	}
};

int main()
{
	cout << "** BEGIN **" << endl;
	DataC data;
	cout << "** END **" << endl;

	// 출력결과가 이상하게 나옴.
	// 원래 출력 결과는 이러함. ** BEGIN **
	//						  DataA() 	
	//						  DataB()
	//						  DataC()
	//						  ** END **				
	//                        ~DataC()
	//	                      ~DataB()
	//                        ~DataA()
	//		이 코드에서 중요한점 : 생성자의 실행 순서는 호출 순서와 정반대이다. 생성자는 부모 클래스부터, 소멸자는 맨 마지막 자식 클래스부터.

	system("pause");
	return 0;
}