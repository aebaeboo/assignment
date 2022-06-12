#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STR_SIZE 100
#include "search.h";


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

int search(int a)
{
	search1 sh[] =
	{
		{"용인","용인서울병원","031-337-0114","경기 용인시 처인구 고림로 81"},
		{"병원","용인서울병원","031-337-0114","경기 용인시 처인구 고림로 81","다보스병원","031-8021-2130","경기 용인시 처인구 백옥대로1082번길 18 다보스종합병원"},
		{"보건소","용인시처인구보건소","031-324-4981","경기 용인시 처인구 중부대로 1199"},



	};

	search1* p = NULL;

	int size = sizeof(sh) / sizeof(sh[0]);

	char keyword[STR_SIZE];

	printf("검색어를 입력하세요\n");
	scanf("%s", keyword);

	for (int i = 0; i < size; ++i)
	{
		if (strcmp(keyword, sh[i].keyword) == 0)
		{
			p = &sh[i];
			break;
		}
	}
	if (p == NULL)
		printf("입력한 정보가 존재하지 않습니다\n");
	else
		printf("\n%s\n%s\n%s\n\n%s\n%s\n%s\n", p->name, p->call, p->adress, p->name1, p->call2, p->adress2);
	return 0;

}