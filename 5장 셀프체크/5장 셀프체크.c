#include <stdio.h>

void convertTime(int);
int showMenu(void);
void showEnding(void);

int main(void) {
	// �ʱ�ȭ
	int runningTime = 0;

	// �޴������ְ� �ð� �ޱ�, ���ѹݺ�, ����� -1
	while (1) {
		runningTime = showMenu();

		// �������� Ȯ��
		if (runningTime == -1) break;

		// ��ȯ�Ͽ� ���
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