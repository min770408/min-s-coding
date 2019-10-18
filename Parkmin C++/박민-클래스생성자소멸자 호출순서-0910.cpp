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

	// ��°���� �̻��ϰ� ����.
	// ���� ��� ����� �̷���. ** BEGIN **
	//						  DataA() 	
	//						  DataB()
	//						  DataC()
	//						  ** END **				
	//                        ~DataC()
	//	                      ~DataB()
	//                        ~DataA()
	//		�� �ڵ忡�� �߿����� : �������� ���� ������ ȣ�� ������ ���ݴ��̴�. �����ڴ� �θ� Ŭ��������, �Ҹ��ڴ� �� ������ �ڽ� Ŭ��������.

	system("pause");
	return 0;
}