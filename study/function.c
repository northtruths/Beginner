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

//打印乘法口诀表
//int cheng_fa_kou_jue_biao()
//{
//	int row = 0;
//	int col = 0;
//	printf("请输入要打印的乘法口诀表的 行数 与 列数：");
//	scanf("%d%d", &row, &col);
//	for (int i = 1; i <= row; i++)//行
//	{
//		for (int j = 1; j <= col; j++)
//		{
//			printf("%d * %d = %d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}

//判断闰年
//被 4 整除，但不被 100 整除
//被 400 整除
//int leap_year()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0)
//		printf("是闰年。");
//	else if (year % 400 == 0)
//		printf("是闰年。");
//	else
//		printf("不是闰年。");
//	return  0;
//}

////判断素数
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
//			printf("不是素数");
//			break;
//		}
//		else
//		{
//			printf("%d", a);
//			printf("是素数\n");
//			break;
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>//判断螺旋
//#include<string.h>
//int left_revolve(char str1[], char str2[], int len1, int n)//左旋
//{
//	int flag = 0;//判断是与否
//	char copy[100] = { 0 };//需螺旋的数组的复制
//	for (int i = 0; i < len1; i++)
//		copy[i] = str1[i];
//	for (int j = 0; j < n; j++)//螺旋次数
//	{
//		for (int k = 0; k < len1 - 1; k++)//用下一个元素覆盖上一个元素，并最后一个元素用原来的数组对应元素覆盖
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
//int right_revolve(char str1[], char str2[], int len1, int n)//右旋
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
//void is_revolve(char str1[], char str2[], int len1, int len2, int n, char x)//判断两字符串是否为螺旋的关系
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
//	printf("请输入要比较的两串字符串（用空格隔开）：");
//	scanf("%s %s", str1, str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	printf("请输入要螺旋的方向（l/r），及螺旋次数，用空格隔开：");
//	char x = 0;
//	int n = 0;
//	scanf("%*[\n] %c %d", &x, &n);
//	is_revolve(str1, str2, len1, len2, n, x);
//	return 0;
//}
