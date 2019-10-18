#include <iostream>
#include <cstdlib>
using namespace std;

class Time
{
public:
	Time() : minute{ 30 } {};
	~Time() { };
	int getValue() const { return minute; }
	void setValue(int x) { minute = x; }
	Time& operator++() {
		++minute;
		return *this;
	}

	Time& operator--() {
		--minute;
		return *this;
	}
private:
	int minute;
};

int main()
{
	Time T;

	cout << "���� �� ��? : " << T.getValue() << endl;
	++T;
	cout << "���� �� ��? : " << T.getValue() << endl;
	--T;
	cout << "���� �� ��? : " << T.getValue() << endl;

	system("pause");
	return 0;
}