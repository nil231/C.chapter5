#include <stdio.h>
#include <stdlib.h>  //rand()함수, srand()함수
#include <time.h>   //time () 함수

void showIntro(void);  //시작화면
void showSuccess(void); //성공시 화면
void sgowFail(void);   //실패시 화면
void showExit(void);  //종료조건을 입력시 화면
void showEnding(void); //최종 점수 출력 화면
int showQuestion(int, int, int);  //질문<난이도 레벨>+답변
int getNumber(int);    //랜덤수 만들기<난이도 레벨>


int main(void) {
	//변수 선언, 초기화
	int num1, num2;
	int level = 1;
	int answer = -1;
	srand(time(NULL)); 

	//무한 루프: 입력, 맞는지 틀렸는지 확인, 종료 조건 확인
	   //메뉴를 출력
	   //종료 조건이면, break
	   //맞혔으면 success 출력,다시 반복
	   //틀렸으면, fail 출력,break

	//몇개 맞혔는지 출력하고 종료

	return 0;
}
