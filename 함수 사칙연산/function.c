#include <stdio.h>


void p(const char* msg, int n) {  //�Լ��� ����
	printf(">>>>>>>>>>>>\n");
	printf("%s ��� : %d\n", msg, n);
	printf(">>>>>>>>>>>>\n\n");
}


int showMenu(int n) { //�Լ��� ����
	int input;
	printf("���� %d �Է�: ", n);
	scanf_s("%d", &input);
	return input;
}

//call by value