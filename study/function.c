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

//判断素数
//int is_prime()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	for (int i = 2; i <= sqrt(a); i++)
//	{
//		if (a % i == 0)
//		{
//			printf("不是素数");
//			break;
//		}
//		else
//		{
//			printf("是素数\n");
//			printf("%d", a);
//			break;
//		}
//	}
//
//	return 0;
//}