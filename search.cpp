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
		{"����","���μ��ﺴ��","031-337-0114","��� ���ν� ó�α� ���� 81"},
		{"����","���μ��ﺴ��","031-337-0114","��� ���ν� ó�α� ���� 81","�ٺ�������","031-8021-2130","��� ���ν� ó�α� ������1082���� 18 �ٺ������պ���"},
		{"���Ǽ�","���ν�ó�α����Ǽ�","031-324-4981","��� ���ν� ó�α� �ߺδ�� 1199"},



	};

	search1* p = NULL;

	int size = sizeof(sh) / sizeof(sh[0]);

	char keyword[STR_SIZE];

	printf("�˻�� �Է��ϼ���\n");
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
		printf("�Է��� ������ �������� �ʽ��ϴ�\n");
	else
		printf("\n%s\n%s\n%s\n\n%s\n%s\n%s\n", p->name, p->call, p->adress, p->name1, p->call2, p->adress2);
	return 0;

}