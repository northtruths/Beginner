#define _CRT_SECURE_NO_WARNINGS

//【入门1】顺序结构

//#include<stdio.h>
//int main()
//{
//    int s = 0;
//    int n = 0;
//    scanf("%d %d", &n, &s);
//    printf("%d", s * n);
//    return 0;
//}

//#include<stdio.h>//【深基2.例7】数字反转
//#include<math.h>
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	int b = a * 10;//a 转换为整数
//	int arr[4] = { 0 };
//	for (int i = 0; i < 4; i++)
//	{
//		arr[i] = b % 10;
//		b /= 10;
//	}
//	float c = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		c += arr[i] * pow(10, -i);
//	}
//	printf("%.3f", c);
//	return 0;
//}

//#include<stdio.h>//【深基2.习2】三角形面积
//#include<math.h>
//int main()
//{
//    double a, b, c = 0;
//    scanf("%lf%lf%lf", &a, &b, &c);
//    double p = (a + b + c) / 2.0;
//    double area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("%.1lf", area);
//    return 0;
//}

//#include<stdio.h>//【深基2.例12】上学迟到
//int main()
//{
//	int s = 0;
//	int v = 0;
//	scanf("%d%d", &s, &v);
//	double time1 = ((double)s / v);
//	int time = s / v;
//	if (time1 != time)
//		time += 11;
//	else
//		time += 10;
//	int h = time / 60 + 1;
//	int rh = 0;
//	if (h > 8)
//		rh = 24 + 8 - h;
//	else
//		rh = 8 - h;
//	int m = 60 - (time - (h - 1) * 60);
//	printf("%02d:%02d", rh, m);
//	return 0;
//}

//#include<stdio.h>//b2029 大象喝水
//int main()
//{
//	int w = 20 * 1000;
//	int h = 0;
//	int r = 0;
//	scanf("%d%d", &h, &r);
//	double v = 3.14 * r * r * h;
//	double num = w / v;
//	if ((int)(w / v) != num)
//		num = (int)num + 1;
//	printf("%d", (int)num);
//	return 0;
//}

//#include<stdio.h>//P1425 小鱼的游泳时间
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	int time = (60 * c + d) - (60 * a + b);
//	int h = time / 60;
//	int m = time - h * 60;
//	printf("%d %d", h, m);
//	return 0;
//}

//#include<stdio.h>//P1421 小玉买文具
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int money = a * 10 + b;
//	int pen = 1 * 10 + 9;
//	int i = 1;
//	while (i * pen <= money)
//	{
//		++i;
//	}
//	printf("%d", i - 1);
//	return 0;
//}

//#include<stdio.h>//P3954 [NOIP2017 普及组] 成绩
//int main()
//{
//	int A, B, C;
//	scanf("%d%d%d", &A, &B, &C);
//	int scores = A * 0.2 + B * 0.3 + C * 0.5;
//	printf("%d", scores);
//	return 0;
//}


//	【入门2】分支结构


//#include<stdio.h>//P2433 【深基1-2】小学数学 N 合一
//#include<math.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", & num);
//	int m = 110;
//	int n = 10;
//	int r = 110;
//	switch (num)
//	{
//	case 1:
//		printf("I love Luogu!");
//		break;
//	case 2:
//		printf("%d %d", 6, 4);
//		break;
//	case 3:
//		printf("%d\n%d\n%d", 3, 12, 2);
//		break;
//	case 4:
//		printf("%.3lf", 500.0 / 3);
//		break;
//	case 5:
//		printf("%d", (260 + 220) / (12 + 20));
//		break;
//	case 6:
//		printf("%.4lf", sqrt(6 * 6 + 9 * 9));
//		break;
//	case 7:
//		printf("%d\n%d\n%d\n", 110, 90, 0);
//		break;
//	case 8:
//		printf("%.4lf\n%.4lf\n%.3lf", 2 * 3.141593 * 5, 3.141593 * 25, 4.0 / 3 * (3.141593 * pow(5, 3)));
//		break;
//	case 9:
//		printf("%d", (((((1 + 1) * 2) + 1) * 2) + 1) * 2);
//		break;
//	case 10:
//		printf("%d", 9);
//		break;
//	case 11:
//		printf("%.4lf", 100.0 / 3.0);
//		break;
//	case 12:
//		printf("%d\n%c", 'M' - 64, 18 + 64);
//		break;
//	case 13:
//		printf("%d", (int)pow(4.0 / 3 * 3.141593 * pow(4, 3) + 4.0 / 3 * 3.141593 * pow(10, 3), 1 / 3.0));
//		break;
//	case 14:
//		for (int i = 1; i < 110; i++)
//		{
//			m = 110 - i;
//			n = 10 + i;
//			if (m * n >= 3500 && r > m)
//			{
//				r = m;
//			}
//		}
//		printf("%d", (int)r);
//		break;
//	}
//
//	return 0;
//}

//#include<stdio.h>//	【深基2.习6】Apples Prologue / 苹果和虫子
//int main()
//{
//	int m = 0;//苹果
//	int t = 0;//一个苹果时间
//	int s = 0;//时间
//	int r = 0;//返回
//	scanf("%d%d%d", &m, &t, &s);
//	if (m == 0)
//	{
//		printf("%d", 0);
//		return 0;
//	}
//	else if (t == 0)
//	{
//		printf("%d", 0);
//		return 0;
//	}
//	else if (s % t == 0)//如果整除则没有半个苹果出现
//	{
//		r = m - s / t;
//		if (r < 0)
//		{
//			printf("%d", 0);
//			return 0;
//		}
//	}
//	else
//	{
//		r = (int)(m - (double)s / t);
//		if (r < 0)
//		{
//			printf("%d", 0);
//			return 0;
//		}
//	}
//	printf("%d", r);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    if (x % 2 == 0 && x > 4 && x <= 12)
//        printf("%d ", 1);
//    else
//        printf("%d ", 0);
//    if (x % 2 == 0 || (x > 4 && x <= 12))
//        printf("%d ", 1);
//    else
//        printf("%d ", 0);
//    if ((x % 2 == 0 && (x <= 4 || x > 12)) || (x % 2 != 0 && x > 4 && x <= 12))
//        printf("%d ", 1);
//    else
//        printf("%d ", 0);
//    if (x % 2 != 0 && (x <= 4 || x > 12))
//        printf("%d ", 1);
//    else
//        printf("%d ", 0);
//    return 0;
//}

//#include<stdio.h>//P5712 【深基3.例4】Apples
//#include<string.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("Today, I ate ");
//	printf("%d", x);
//	if (x > 1)
//		printf(" apples.");
//	else
//		printf(" apple.");
//	return 0;
//}

//#include<stdio.h>//P5713 【深基3.例5】洛谷团队系统
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int local = 5 * n;
//	int luogu = 3 * n + 11;
//	if (local < luogu)
//		printf("Local");
//	else
//		printf("Luogu");
//	return 0;
//}

//#include<stdio.h>//【深基3.例7】肥胖问题,六位有效数
//int main()
//{
//	double m = 0;
//	double h = 0;
//	scanf("%lf%lf", &m, &h);
//	double BMI = m / (h * h);
//	if (BMI < 18.5)
//		printf("Underweight");
//	else if (BMI < 24)
//		printf("Normal");
//	else
//	{
//		printf("%.6\n", BMI);
//		printf("%lf\n", BMI);
//		printf("Overweight");
//	}
//	return 0;
//}

//#include<stdio.h>//【深基3.例8】三位数排序
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//    return *(int*)a - *(int*)b;
//}
//int main()
//{
//    int arr[3] = { 0 };
//    for (int i = 0; i < 3; ++i)
//    {     
//        scanf("%d", &arr[i]);
//    }
//    qsort(arr, 3, sizeof(int), compare);
//    for (int j = 0; j < 3; ++j)
//    {   
//        printf("%d", arr[j]);
//        printf(" ");
//    }
//    return 0;
//}

//#include<stdio.h>//【深基3.例9】月份天数
//int main()
//{
//	int y, m;
//	scanf("%d%d", &y, &m);
//	int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && m == 2)
//		printf("29");
//	else
//		printf("%d", arr[m]);
//	return 0;
//}

//#include<stdio.h>// [NOIP2004 普及组] 不高兴的津津
//int main()
//{
//	int arr[7][2] = { 0 };
//	for (int i = 0; i < 14; ++i)
//	{
//		scanf("%d", (int*)arr + i);
//	}
//	int max = 0;
//	int day = 0;
//	for (int j = 0; j < 14; j += 2)
//	{
//		int add = *((int*)arr + j) + *((int*)arr + j + 1);
//		if (max < add && add > 8)
//		{
//			max = add;
//			day = (j + 2) / 2;
//		}
//	}
//	printf("%d", day);
//	return 0;
//}

//#include<stdio.h>//P1909 [NOIP2016 普及组] 买铅笔
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[3][2] = { 0 };
//	for (int i = 0; i < 6; i += 2)
//	{
//		scanf("%d%d", (int*)arr + i, (int*)arr + 1 + i);
//	}
//	int money = 0x4fffffff;
//	for (int j = 0; j < 6; j += 2)
//	{
//		int num = (int)ceil((double)n / *((int*)arr + j));
//		int need = num * (*((int*)arr + 1 + j));
//		if (money > need)
//			money = need;
//	}
//	printf("%d", money);
//	return 0;
//}

//#include<stdio.h>//P5717 【深基3.习8】三角形分类
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b <= c || a + c <= b || b + c <= a)
//	{
//		printf("Not triangle");
//		return 0;
//	}
//	if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
//		printf("Right triangle\n");
//	else if ((a * a + b * b > c * c) && (a * a + c * c > b * b) && (b * b + c * c > a * a))
//		printf("Acute triangle\n");
//	else
//		printf("Obtuse triangle\n");
//	if (a == b || a == c || b == c)
//		printf("Isosceles triangle\n");
//	if (a == b && b == c)
//		printf("Equilateral triangle\n");
//	return 0;
//}

//#include<stdio.h>//P1422 小玉家的电费
//int main()
//{
//	int e = 0;
//	scanf("%d", &e);
//	double m = 0;
//	if (e <= 150)
//	{
//		m = e * 0.4463;
//	}
//	else if (e <= 400)
//	{
//		m = 150 * 0.4463 + ((e - 150) * 0.4663);
//	}
//	else
//	{
//		m = 150 * 0.4463 + 250 * 0.4663 + ((e - 400) * 0.5663);
//	}
//	printf("%.1lf", m);
//	return 0;
//}

//#include<stdio.h>//P1424 小鱼的航程（改进版）
//int main()
//{
//	int x, n;
//	scanf("%d%d", &x, &n);
//	int i = 0;
//	int s = 0;
//	while (n)
//	{
//		if ((x + i) % 7 != 6 && (x + i) % 7 != 0)
//			s += 250;
//		--n;
//		++i;
//	}
//	printf("%d", s);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, 3, 4, compare);
//	int s1 = arr[0];
//	int s2 = arr[2];
//	int r = 0;
//	r = s2 % s1;
//	while (r)
//	{	
//		s1 = s2;
//		s2 = r;
//		r = s1 % s2;
//	}
//	printf("%d/%d", arr[0] / s2, arr[2] / s2);
//	return 0;
//}

//#include<stdio.h>//	[NOIP2005 普及组] 陶陶摘苹果
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int h = 0;
//	scanf("%d", &h);
//	int count = 0;
//	for (int j = 0; j < 10; ++j)
//	{
//		if (h + 30 >= arr[j])
//			++count;
//	}
//	printf("%d", count);
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
int main()
{
	int arr1[3] = { 0 };
	scanf("%d%d%d", &arr1[0], &arr1[1], &arr1[2]);
	qsort(arr1, 3, 4, compare);
	char arr2[4] = { 0 };
	scanf("%c%c%c", &arr2[0], &arr2[1], &arr2[2]);
	printf("%d %d %d", arr1[arr2[0] - 65], arr1[arr2[1] - 65], arr1[arr2[2] - 65])
	return 0;
}