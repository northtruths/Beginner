#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


//int main()
//{
//	//cheng_fa_kou_jue_biao();
//	//leap_year();
//	is_prime();
//	return 0;
//}

//��ӡ�˷��ھ���
//int cheng_fa_kou_jue_biao()
//{
//	int row = 0;
//	int col = 0;
//	printf("������Ҫ��ӡ�ĳ˷��ھ���� ���� �� ������");
//	scanf("%d%d", &row, &col);
//	for (int i = 1; i <= row; i++)//��
//	{
//		for (int j = 1; j <= col; j++)
//		{
//			printf("%d * %d = %d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}

//�ж�����
//�� 4 ������������ 100 ����
//�� 400 ����
//int leap_year()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//		printf("�����ꡣ");
//	else if (year % 400 == 0)
//		printf("�����ꡣ");
//	else
//		printf("�������ꡣ");
//	return  0;
//}

//�ж�����
//int is_prime()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (int i = 2; i <= sqrt(a); i++)
//	{
//		if (a % i == 0)
//		{
//			printf("��������");
//			break;
//		}
//		else
//		{
//			printf("������\n");
//			printf("%d", a);
//			break;
//		}
//	}
//
//	return 0;
//}