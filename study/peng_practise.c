#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{int num1;int num2;
//printf("请输入两个整数：");
//scanf("%d %d", &num1, &num2);
//int sum=num1+num2;
//printf("%d和%d的和为:%d",num1,num2,sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf('\a');
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("hehe");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d\n%d", &a, &b);
//	printf("%d %d",a,b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	float b = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//	scanf("%f", &b);
//	printf("%.2f", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 4;
//	c = ++a;
//	b = ++c,c++,++a,a++;
//	printf("%d\n%d\n%d", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	
//	printf("%.2f\n%d\n%d\n%d\n%d", 7.0/ 2,6,6,6);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//int a = 17;
//int main()
//{
//	{
//		int a = 7;
//
//	}
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>//判断两个数的大小
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (scanf("%d%d", &a, &b) !=EOF)
//    {
//        scanf("%d%d", &a, &b)
//        if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else
//            printf("%d<%d\n", a, b);
//    }
//        return 0;
//    
//}
//#include<stdio.h>//打印3的倍数
//int main()
//{
//	int a = 0;
//	while (a += 3)
//		printf("%d", a);
//	return 0;
//}
//#include<stdio.h>//将数反向打印
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		while (a)
//		{
//			printf("%d", a % 10);
//			a = a / 10;
//		}
//		printf("\n");
//	}
//		return 0;
//	
//}
//#include<stdio.h>//字符串是否能用==
//int main()
//{
//	char a = "hehe";
//	char b = "hehe";
//	if (a == b)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//#include <stdio.h>//三角形判断
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d%d%d", &a, &b, &c) != EOF)
//    {
//        if ((a > b && b > c) ? b + c > a : (b > a && a > c ? a + c > b : a + b > c))//嵌套三目操作符判断abc最大值并证明两条小边和大于第三边
//        {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b || a == c || b == c)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//
//
//    }
//    return 0;
//}
//#include<stdio.h>??\\//打印乘法口诀表
//int main()
//{
//
//	for (int a = 1; a <= 9; a++)
//	{
//		for (int b = 1; b <= 9; b++)
//		{
//			printf("%d*%d=%d ", a, b, a * b);
//			if (b == 9)
//				printf("\n");
//		}
//	}
//	return 0;
//
//}
//#include<stdio.h>//求十个数中最大的数
//int main()
//{
//	int max = 0;
//	int arr[10] = { 0 };
//	scanf("%d", arr);
//	for()
//	return 0;
//}
//#include<stdio.h>//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果0.688172
//int main()
//{
//	double a = 0;
//	double b = 1.0;
//	double c = 0;
//	double d = 1.0;
//	double i = 0.0;
//	double j = 0.0;
//	for (i = 1 / b; b <= 100; b += 2)
//		a += i;
//	for (i=j = 1 / d; d <= 100; d += 2)
//		c += j;
//	printf("%lf", i - j);
//	return 0;
//}

//#include<stdio.h>//打印1000-2000年间的闰年
//int main()
//{
//	int year = 1000;
//	for (year; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d ", year);
//	}
//	return 0;
//}
//#include<stdio.h>//求1-100中9的个数
//int main()
//{
//	int a = 0;
//	int i = 0;
//	while (a <= 100)
//	{
//		if (a % 10 == 9)
//			i++;
//		if (a / 10 == 9)
//			i++;
//		a++;
//
//	}
//	printf("%d", i);
//	return 0;
//}

//#include<stdio.h>//测试case后面能否使用&&、||
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch(a)
//	{
//	case 1 && 2:
//		printf("1");
//		break;
//	case 3 || 4:
//		printf("2");
//		break;
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%c", '\130');
//		return 0;
//}
//#include<stdio.h>//敲金字塔
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);//金字塔的行数
//	for (int i = 1; i <= a; i++)//设置每一行的循环
//	{
//		for (int j = 0; j <= a - i; j++)//先打空格，每行空格 = 金字塔行数 - 此刻行数
//			printf(" ");
//		for (int k = 1; k <= 2*i-1; k++)//打字符，每行字符 = 2 * 此刻行数 - 1
//			printf("*");
//		printf("\n");//每行打印完换行
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	goto tiaozhuan;
//	for (int i = 1; i <= 2; i++)
//		printf("%d", i);
//tiaozhuan:
//	printf("hehe");
//
//	return 0;
//}

//#include<stdio.h>//打印100-200的素数
//#include<math.h>
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设是素数
//		//素数除以 2 到 它的前一位都有：不能整除
//		for (int j = 2; j < sqrt(i) ; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//#include<stdio.h>//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a, b,c = 0;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		if (a > b)//求a、b谁大并赋给c
//			c = a;
//		else
//			c = b;
//		for (int i = c; i > 1; i--)//从a、b中较大的值一直减小直到能被两数同时整除即是最大公约数
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%5d", &a);
//	printf("%10d", a);
//	return 0;
//}
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char a = "a b c d e";
//	printf("%d ", sizeof(a));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}

//#include<stdio.h>//【一维数组】输入10个整数，求平均值
//int main()
//{
//	int arr[10] = { 0 };
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%.1f", sum / 10.0);
//	return 0;
//}

//#include<stdio.h>//打印 X 字型
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 1; i <= a; i++)//第几行
//        {
//            for (int j = 1; j <= a; j++)//第几列
//            {
//                if (i == j || i == a + 1 - j)
//                    printf("*");
//                else
//                    printf(" ");
//
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>//空心正方形图案
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1)//第一排和最后一排
//                
//                  
//                        printf("*");
//                   
//                
//                else if (j == 0 || j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//                
//            }
//            printf("\n");
//
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float a = 0;
//	while (scanf("%f", &a) != EOF)
//	{
//		int b = (int)a + 0.5;
//		printf("%d", b);
//	}
//	return 0;
//}

//#include<stdio.h>//矩阵转置
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = {0};
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 4,5,6 };
//	int arr3[3] = { 0 };
//	for (int i = 0; i < 3; i++)
//		arr3[i] = arr1[i];
//	for (int i = 0; i < 3; i++)
//		arr1[i] = arr2[i];
//	for (int i = 0; i < 3; i++)
//		arr2[i] = arr3[i];
//	printf("arr1 = ");
//	for (int j = 0; j < 3; j++)
//	{
//		printf("%d ", arr1[j]);
//	}
//	printf("\n");
//	printf("arr2 = ");
//	for (int j = 0; j < 3; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//
//}

//int printf_1();
//#include<stdio.h>
//int main()
//{
//	printf_1();
//	int a = 10;
//	return 0;
//}
//
//int printf_1()
//{
//	int a = 20;
//	printf("%d", a);
//}

//#include<stdio.h>
//int main()
//{
//	printf("hehe");
//	return;
//}

//#include<stdio.h>//return 是否可以返回函数中定义的数组，不可以
//int a()
//{
//	int arr[3] = { 1, 2, 3 };
//	return arr;
//}
//int main()
//{
//	printf("%d", a);
//	return 0;
//}
//

//#include<stdio.h>
//int initial(int arr[], int sz)
//{
//	int i = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//
//void reverse(int arr[],int sz)
//{
//	int j = 0;
//	for (j = sz; j > 0; j--)
//		printf("%d ", arr[j - 1]);
//}
//
//int main()
//{
//	int arr[3] = { 1, 1, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	initial(arr, sz);
//	reverse(arr, sz);
//	return 0;
//}
