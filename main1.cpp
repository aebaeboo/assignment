/* ��ǻ�� ���α׷��� ���� 
�а�: ��ǻ�� ���к�
�й�: 202203746
�̸�: ���ش�
��������: ó�α� ���� ����������� ��ġ�� �̸� ��ȭ��ȣ����� �ҷ����� ���α׷�����
�˻� �Ǵ� Ű���� �������� ������ ����� �ҷ��ü� �ֽ��ϴ�
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
	strcpy(H.name, "���μ��ﺴ��");
	strcpy(H.call, "031 337 0114");
	strcpy(H.adress,"��� ���ν� ó�α� ���� 81");

	struct screening_clinic_H Hh;
	strcpy(Hh.name, "�ٺ�������");
	strcpy(Hh.call, "031-8021-2130");
	strcpy(Hh.adress,"��� ���ν� ó�α� ������1082���� 18 �ٺ������պ���");

	struct screening_clinic_B B;
	strcpy(B.name, "���ν�ó�α����Ǽ�");
	strcpy(B.call, "031-324-4981");
	strcpy(B.adress, "��� ���ν� ó�α� �ߺδ�� 1199");


	while (1)
	{
		printf("��������� ����� ã���ðڽ��ϱ�?(y �Ǵ� n)");
		scanf("%s", &ans1);
		if (ans1 == 'y')
		{
			printf("���Ǽ�(1) ����(2) �˻�(3) (1 ,2 �Ǵ� 3)");
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
				printf("�̿����ּż� �����մϴ�");
				return 0;

			}


		}
	}









}
