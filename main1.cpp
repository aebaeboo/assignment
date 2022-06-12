/* 컴퓨터 프로그래밍 과제 
학과: 컴퓨터 공학부
학번: 202203746
이름: 한해담
과제설명: 처인구 내의 선별진료소의 위치와 이름 전화번호목록을 불러오는 프로그램으로
검색 또는 키워드 선택으로 각각의 목록을 불러올수 있습니다
*/

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "search.h"
#define STR_SIZE 100


typedef struct rocation
{
	char keyword[STR_SIZE];
	char name[STR_SIZE];
	char call[STR_SIZE];
	char adress[STR_SIZE];
	char name1[STR_SIZE];
	char call2[STR_SIZE];
	char adress2[STR_SIZE];

}search1;

struct screening_clinic_B {
	char name[100];
	char call[100];
	char adress[100];
};

struct screening_clinic_H {
	char name[100];
	char call[100];
	char adress[100];
};

int main(void)
{
	char ans1;
	int ans2;
	char str_ans = 0;


	struct screening_clinic_H H;
	strcpy(H.name, "용인서울병원");
	strcpy(H.call, "031 337 0114");
	strcpy(H.adress,"경기 용인시 처인구 고림로 81");

	struct screening_clinic_H Hh;
	strcpy(Hh.name, "다보스병원");
	strcpy(Hh.call, "031-8021-2130");
	strcpy(Hh.adress,"경기 용인시 처인구 백옥대로1082번길 18 다보스종합병원");

	struct screening_clinic_B B;
	strcpy(B.name, "용인시처인구보건소");
	strcpy(B.call, "031-324-4981");
	strcpy(B.adress, "경기 용인시 처인구 중부대로 1199");


	while (1)
	{
		printf("선별진료소 목록을 찾으시겠습니까?(y 또는 n)");
		scanf("%s", &ans1);
		if (ans1 == 'y')
		{
			printf("보건소(1) 병원(2) 검색(3) (1 ,2 또는 3)");
			scanf("%d", &ans2);
			if (ans2 == 1)
			{
				printf("%s\n%s\n%s\n", B.name, B.call, B.adress);
				return 0;
			}
			if (ans2 == 2)
			{
				printf("%s\n%s\n%s\n", H.name, H.call, H.adress);
				printf("\n");
				printf("%s\n%s\n%s\n", Hh.name, Hh.call, Hh.adress);
				
				return 0;

			}
			if (ans2 == 3)
			{
				search(str_ans);
				printf("이용해주셔서 감사합니다");
				return 0;

			}


		}
	}









}
