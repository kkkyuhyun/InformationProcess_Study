#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
/* {
   int age = 15;
   if (age >= 20)
	   printf("일반인 입니다.");
   else
	   printf("학생입니다.");
	   */
	   /**
   {
   int age = 8;
   if (age >= 8 && age <= 13)
   {
	   printf("초등학생입니다\n");
   }
   else if (age >= 14 && age <= 16)
   {
	   printf("중학생입니다\n");
   }

   else if (age >= 17 && age <= 19)
   {
	   printf("고등학생입니다\n");
   }
   else
   {
	   printf("학생이 아니다\n");
   }
   */

   //c초등학생 중학생 고등학생으로 나누면 
   //if else else if 

   //break continue

   //1번에서 30번까지 1번부터 5번까지 조별 발표를 합니다
   /*
{
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요\n");
				break;
		}
		printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
	}
	*/
	/*
{
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다\n", i);
				continue;
			}
			printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
		}
	}
	*/

	//and or //&&
	/*
{
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b && c == d)
	{
	printf("a와b가 같고, c와 d도 같다\n");
	}
	else
	{
	printf("값이 서로 다르네요\n");
	}
	*/

	//random 함수 
	//#include<time.h>
	//#include<stdib.h>
	//#include<stdio.h>

	//가위=0  바위=1 보=2
/*
{
	srand(time(NULL));
	int i = rand() % 3; //0~2 반 환
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");

	}
	else
	{
		printf("몰라요\n");
	}
c
/*
{
	srand(time(NULL));
	int i = rand() % 3; // 0~2반환
	switch (i)
	{
	case 0: printf("가위\n"); break;
	case 1: printf("바위\n"); break;
	case 2: printf("보\n"); break;
	default: printf("몰라요\n"); break;
	}
	*/
/*
	{
		srand(time(NULL));
		int num = rand() % 100 * 1; // 0~99
		printf("숫자 : %d\n", num);
		int answer = 0;
		int chance = 5;
		while (chance > 0)
		{
			printf("남은 기회는 %d\n", chance--);
			printf("숫자를 말해보세요 (1-100): ");
			scanf_s("%d", &answer);

			if (answer > num)
			{
				printf("DOWN↓\n\n");
			}
			else if (answer < num)
			{
				printf("UP↑\n\n");
			}
			else if (answer == num)
			{
				printf("정답입니다!\n\n");
			}
			else
			{
				printf("알수 없는 오류가 발생했습니다\n\n");
			}
			if (chance == 0)
			{
				printf("모든 기회를 다 사용하셨네요. 아쉽게 실패하였습니다.");
				break;
			}
		}
		*/

		return 0;
}