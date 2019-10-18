#include <iostream>
#include <cstdlib>
using namespace std;

class Count
{
public:
	Count() : value{ 10 } {};
	~Count() { };
	int getValue() const { return value; }
	void setValue(int x) { value = x; }
	Count& operator++() {
		++value;
		return *this;
	}

	Count& operator--() {
		--value;
		return *this;
	}
private:
	int value;
};

int main()
{
	Count c;
	
	cout << "카운터 값: " << c.getValue() << endl;
	--c;
	cout << "카운터 값: " << c.getValue() << endl;
	++c;
	cout << "카운터 값: " << c.getValue() << endl;

	system("pause");
	return 0;
}