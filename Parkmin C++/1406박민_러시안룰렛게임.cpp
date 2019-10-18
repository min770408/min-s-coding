
#include "pch.h"
#include <iostream>
using namespace std;
srand(time(NULL));
int Turns = rand() % 6 + 1;

class EnterTheGunJun
{
private:
	int nTurns;
	int nRulletes;
public:
	EnterTheGunJun() : nTurns{ 0 }, nRulletes{ 0 } {}
	EnterTheGunJun(int nt, int nr) : nTurns{ nt }, nRulletes{ nr } {}
	~EnterTheGunJun() {}

	void Gamestart() {
		cout << "게임 인원 (예 : 2) ==> ";
		cin >> nTurns;

		cout << "총알 개수 (6미만) ==> ";
		cin >> nRulletes;

		cout << "총을 돌렸습니다. " << Turns << "번부터 시작합니다. " << endl;
	}

	int shot() {
		char gunshot;

		getchar();
		if (gunshot = 13) {

		}
	}

	void keepgoing() {

	}
};

int main() {
	EnterTheGunJun Gun;

	Gun.Gamestart();

	system("pause");
	return 0;
}