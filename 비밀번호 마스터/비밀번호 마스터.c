#include <stdio.h>
#include <stdlib.h>  //rand()�Լ�, srand()�Լ�
#include <time.h>   //time () �Լ�

void showIntro(void);  //����ȭ��
void showSuccess(void); //������ ȭ��
void sgowFail(void);   //���н� ȭ��
void showExit(void);  //���������� �Է½� ȭ��
void showEnding(void); //���� ���� ��� ȭ��
int showQuestion(int, int, int);  //����<���̵� ����>+�亯
int getNumber(int);    //������ �����<���̵� ����>


int main(void) {
	//���� ����, �ʱ�ȭ
	int num1, num2;
	int level = 1;
	int answer = -1;
	srand(time(NULL)); 

	//���� ����: �Է�, �´��� Ʋ�ȴ��� Ȯ��, ���� ���� Ȯ��
	   //�޴��� ���
	   //���� �����̸�, break
	   //�������� success ���,�ٽ� �ݺ�
	   //Ʋ������, fail ���,break

	//� �������� ����ϰ� ����

	return 0;
}
