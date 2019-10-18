
#include "Gugu.h"
#include <iostream>

class SpeedGugu
{
private:
	int NumGame;
	int NumWins;
	double score;
public:
	clock_t tElapsedStart, tElapsedEnd;

	void GameStartPrint() {
		char GameStartEnter;
		cout << "[스피드 구구단 게임]" << endl << endl << "당신의 구구단 실력을 테스트하세요.!!!" << endl;
		cout << "10번 테스트 하겠습니다." << endl << "숨셔, 안 쉬면 구구단 못한다" << endl;
		cout << "준비되면 엔터 눌러. . .";

		cin >> GameStartEnter;
		if (GameStartEnter = 's') {
			system("cls");
		}
	}

	void playSpeed() {
		srand(time(NULL));

		int answer;
		int Gugu1 = rand() % 9 + 1;
		int Gugu2 = rand() % 9 + 1;
		double duration;

		tElapsedStart = clock();

		for (int i = 1; i <= 9; i++) {
			cout << "[문제 " << i << "] :   " << Gugu1 << " x " << Gugu2 << " = ";
			cin >> answer;

			if (answer = Gugu1 * Gugu2) {
				cout << "정답임;" << endl;
				++NumWins;
			}

			else {
				cout << "틀렸음;;" < endl;
			}
		}

		tElapsedEnd = clock();

		duration = (double)(tElapsedEnd - tElapsedStart) / CLOCKS_PER_SEC;
		int gurlinsigan = 100 * 5 * NumGame - duration;
		score = gurlinsigan;
		cout << "점수 = " << score << "점 (총 " << duration << "초)" << endl;
	}
};

int main()
{
	SpeedGugu SG;

	SG.GameStartPrint();
	SG.playSpeed();

	system("pause");
	return 0;
	.

}