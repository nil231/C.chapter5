#include <stdio.h>

int main(void) {
	//���� �ΰ� �غ�, 0���� �ʱ�ȭ
	int num1 = 0, num2 = 0;
	//���� �Է� �ް�
	printf("���� 1 �Է�: ");
	scanf_s("%d", &num1);
	printf("���� 2 �Է�: ");
	scanf_s("%d", &num2);
	//��Ģ���� ���� ���
	printf("���� ��� : %d\n", num1 + num2);
	printf("���� ��� : %d\n", num1 - num2);
	printf("���� ��� : %d\n", num1 * num2);
	printf("������ ��� : %d\n",num1 / num2);


	return 0;
}