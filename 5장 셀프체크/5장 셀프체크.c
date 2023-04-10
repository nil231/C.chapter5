#include <stdio.h>

void convertTime(int);
int showMenu(void);
void showEnding(void);

int main(void) {
	// 초기화
	int runningTime = 0;

	// 메뉴보여주고 시간 받기, 무한반복, 종료시 -1
	while (1) {
		runningTime = showMenu();

		// 종료조건 확인
		if (runningTime == -1) break;

		// 변환하여 출력
		convertTime(runningTime);
	}

	showEnding();

	return 0;
}

void convertTime(int time) {

}

int showMenu(void) {

}

void showEnding(void) {

}