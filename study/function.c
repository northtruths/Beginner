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

////�ж�����
//int is_prime()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (int i = 2; i <= sqrt(a); i++)
//	{
//		if (a % i == 0)
//		{
//			printf("%d", a);
//			printf("��������");
//			break;
//		}
//		else
//		{
//			printf("%d", a);
//			printf("������\n");
//			break;
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>//�ж�����
//#include<string.h>
//int left_revolve(char str1[], char str2[], int len1, int n)//����
//{
//	int flag = 0;//�ж������
//	char copy[100] = { 0 };//������������ĸ���
//	for (int i = 0; i < len1; i++)
//		copy[i] = str1[i];
//	for (int j = 0; j < n; j++)//��������
//	{
//		for (int k = 0; k < len1 - 1; k++)//����һ��Ԫ�ظ�����һ��Ԫ�أ������һ��Ԫ����ԭ���������ӦԪ�ظ���
//		{
//			copy[k] = copy[k + 1];
//		}
//		copy[len1 - 1] = str1[j];
//		if (strcmp(str2, copy) == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	return flag;
//}
//
//int right_revolve(char str1[], char str2[], int len1, int n)//����
//{
//	int flag = 0;
//	char copy[100] = { 0 };
//	for (int i = 0; i < len1; i++)
//		copy[i] = str1[i];
//	for (int j = 0; j < n; j++)
//	{
//		for (int k = len1 - 1; k > 0; k--)
//		{
//			copy[k] = copy[k - 1];
//		}
//		copy[0] = str1[len1 - 1];
//		if (strcmp(str2, copy) == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	return flag;
//}
// 
//void is_revolve(char str1[], char str2[], int len1, int len2, int n, char x)//�ж����ַ����Ƿ�Ϊ�����Ĺ�ϵ
//{
//	int ret;
//	if (x == 'l')
//		ret = left_revolve(str1, str2, len1, n);
//	else
//		ret = right_revolve(str1, str2, len1, n);
//	printf("%d", ret);
//}
//
//int main()
//{
//	char str1[100] = { 0 };
//	char str2[100] = { 0 };
//	printf("������Ҫ�Ƚϵ������ַ������ÿո��������");
//	scanf("%s %s", str1, str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	printf("������Ҫ�����ķ���l/r�����������������ÿո������");
//	char x = 0;
//	int n = 0;
//	scanf("%*[\n] %c %d", &x, &n);
//	is_revolve(str1, str2, len1, len2, n, x);
//	return 0;
//}
