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

//#include<stdio.h>//测试case后面能否使用&&、||,不能
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch(a)
//	{
//	case (1 || 2):
//		printf("hehe");
//		break;
//	case 4:
//		printf("haha");
//		break;
//	default:
//		printf("xixi");
//
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

//#include<stdio.h>
//int main()
//{
//	char arr[3][3] = { 0 };
//	arr[1][0] = '1';
//	printf("%c", arr[1][0]);
//	return 0;
//}

//#include<stdio.h>//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//int main()
//{
//	int m = 20;
//	int i = 0;
//	int count = 0;
//	while (m)
//	{
//		m--;//汽水减一
//		i++;//空瓶加一
//		if (i == 2)//两瓶空瓶换一瓶汽水
//		{
//			m += 1;
//			i -= 2;
//		}
//		count++;
//	}
//	printf("可以喝%d瓶汽水", count);
//	return  0;
//}

//#include<stdio.h>//打印菱形
//int main()
//{
//	int row = 0;
//	scanf("%d", &row);//打印的行数
//	int i, j = 0;
//	int on = row / 2 + 1;//上行数
//	int un = row / 2;//下行数
//	for (i = 1; i <= on; i++)//打印上半部分
//	{
//		for (j = 1; j <= on - i; j++)//先打空格，个数为 总行数 - 现在行数
//			printf(" ");
//		for (j = 1; j <= i * 2 - 1; j++)//打字符，个数为 行数 * 2 - 1
//			printf("*");
//		printf("\n");
//	}
//	for (i = 1; i <= un; i++)//打印下半部分
//	{
//		for (j = 1; j <= i; j++)//打印空格，个数为 现行数 
//			printf(" ");
//		int a = un - 1;//第一行与最后一行的差，用来倒转行数，方便计算字符个数
//		for(j = 1;j <= (i + (a - 2 * (i - 1))) * 2 - 1; j++)//打印字符，个数为 （现行数 +（a - 2 * (现行数 - 1)）） * 2 - 1
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>//求1 - 10000的水花仙数
//#include<math.h>
//int main()
//{
//	int f = 0;
//	for (f = 0; f <= 10000; f++)
//	{
//		int a = f;
//		int b = f;
//		int sum = 0;
//		int count = 0;
//		while (a)//判断位数
//		{
//
//			a = a / 10;
//			count++;
//		}
//		while (b)
//		{
//			sum += pow(b % 10, count);//个位的位数次方
//			b = b / 10;
//		}
//		if (sum == f)
//			printf("%d ", f);
//	}
//	return 0;
//}

//#include<stdio.h>//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//#include<math.h>
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	int Sn = 0;
//	scanf("%d", &num);
//	for (int i = 0; i < 5; i++)
//	{
//		sum += num * pow(10,i);
//		Sn += sum;
//	}
//	printf("%d", Sn);
//	return 0;
//}

//#include<stdio.h>//计算斐波那契数
//int Feibo(int num)
//{
//	if (1 == num || 2 == num)
//		return 1;
//	else
//		return Feibo(num - 1) + Feibo(num - 2);
//}
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		int ret = Feibo(num);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//#include<stdio.h>//用递归实现 n 的 k 次方
//int Pow(int n, int k)
//{
//	int outcome = 0;
//	if (1 == k)
//		outcome = n;
//	else
//		outcome = Pow(n, k - 1) * n;
//	return outcome;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = Pow(n, k);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int m)
//{
//	int sum = 0;
//	int n = 0;
//	if (m != 0)
//	{
//		n = m % 10;
//		sum += (n + DigitSum(m / 10));
//	}
//	return sum;
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int ret = DigitSum(m);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>//递归求 n 的阶乘
//factorial(int n)
//{
//	if (1 == n)
//		return 1;
//	else
//		return n * factorial(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>//非递归求 n 的阶乘
//int main()
//{
//	int n = 0;
//	int fac = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		fac = fac * i;
//	}
//	printf("%d", fac);
//	return 0;
//}

//#include<stdio.h>//用递归的方式打印一个数的每一位
//void Print(int num)
//{
//	if (num != 0)
//	{
//		Print(num / 10);
//		printf("%d\n", num % 10);
//	}
//	
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}

//#include<stdio.h>//不创建临时变量进行交换两整数
////a ^ a = 0
////a ^ 0 = a
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("a = % d, b = % d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = % d, b = % d\n", a, b);
//	return 0;
//}

//#include<stdio.h>//二进制中1的个数
//int main()
//{
//	int a = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= 32; i++)
//	{
//		if (a == (a | 1))
//			count++;
//		a = a >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>//打印整数二进制的奇数位和偶数位
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a;
//	int c = a;
//	printf("奇数是:");
//	for (int i = 1; i <= 32; i++)
//	{
//		if (i % 2 == 1)//奇数位
//		{
//			if (b & 1 != 0)
//				printf("1 ");
//			else
//				printf("0 ");
//		}
//		b >>= 1;
//	}
//	printf("\n");
//	printf("偶数是:");
//	for (int i = 1; i <= 32; i++)
//	{
//		if (i % 2 == 0)//偶数位
//		{
//			if (c & 1 != 0)
//				printf("1 ");
//			else
//				printf("0 ");
//		}
//		c >>= 1;
//	}
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>//两个整数二进制位不同个数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	for (int i = 1; i <= 31; i++)
//	{
//		int n = 0;
//		int m = 0;
//		if (a == (a | 1))//判断最右边一位是否为 1 ，判断条件也可以用 ((a & 1) != 0)
//			n = 1;//最右一位为 1 则赋值 1 ，默认为零（最右一位为 0 ）
//		if (b == (b | 1))//同上判断
//			m = 1;
//		if (m != n)//判断两数最右位是否相等
//			count++;
//		a >>= 1;
//		b >>= 1;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。
//int main()
//{
//	int arr[9] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	for(int i = 0; i < 9; i++)
//		for (int j = 0; j < 9; j++)
//		{
//			if (arr[i] == arr[j] && i != j)//一一对比是否相同，是则退出本次循环进入下一循环
//				break;
//			if (j == 8)//若本次循环完都未找到相同的数，则输出
//			{
//				printf("%d", arr[i]);
//				goto end;
//			}
//		}
//	end:
//	return 0;
//}
//方法二
//因为 a ^ a = 0,而数组中其他数组都是成对出现，所有数组元素都进行按位异或最后就会得到单独的那个元素
//#include<stdio.h>
//int main()
//{
//	int arr[9] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int ret = 0;
//	for (int i = 0; i < 9; i++)
//		ret ^= arr[i];
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>//字符逆序（内容逆序未实现（实现可以在创建一个相同的str，与指针变量进行交换运算），只实现了逆序输出）
//#include<string.h>
//int main()
//{
//    char str[10000] = { 0 };
//    gets(str);
//    int len = strlen(str);
//    char* p = &str[len - 1];
//    for (int i = 0; i < len; i++)
//    {
//        printf("%c", *p);
//        p--;
//    }
//
//    return 0;
//}

//#include<stdio.h>//字符串左旋
//#include<string.h>
//int main()
//{
//	char str[100] = { 0 };
//	printf("输入要左旋的字符串：");
//	gets(str);
//	int len = strlen(str);
//	str[len] = '0';
//	char* p = str;
//	printf("要左旋几次：");
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		str[len] = * p;
//		int k = 0;;
//		while (k < len)
//		{
//			str[k] = str[k + 1];
//			k++;
//		}
//	}
//	for (int j = 0; j < len; j++)
//	{
//		printf("%c", str[j]);
//	}
//	return 0;
//}

//int my_strlen(char* str)//strlen实现
//{
//	char* p = str;
//	int count = 0;
//	while (*p)
//	{
//		p++;
//		count += 1;
//	}
//	return count;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>//验证*p + 1 和*（p + 1）的区别
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	printf("%d\n", *(p + 3));
//	printf("%d", *p + 3);
//
//	return 0;
//}

//#include<stdio.h>//数组在内存中储存的格式，从二进制的 右边往左 储存（先存小的）
//int main()
//{
//	int arr[10] = { 1, 15, 16, 255, 256, 4095, 4096, 65535, 65536};
//
//	return 0;
//}

//#include<stdio.h>//strcmp比较的是第一个不同字符的ASCII码的大小
//#include<string.h>
//int main()
//{
//	char arr1[5] = {'a','b','A','B','B'};
//	char arr2[5] = {'a','b','B','A','A'};
//	if (strcmp(arr1, arr2) > 0)
//		printf("arr1 > arr2");
//	else if (strcmp(arr1, arr2) == 0)
//		printf("arr1 = arr2");
//	else
//		printf("arr1 < arr2");
//	return 0;
//}

//#include<stdio.h>//指针/地址加减整数的规律
//int main()
//{
//	int a[5] = {1, 2, 3, 4, 5};
//	int* p = &a + 1;
//	int* p1 = p + 1;
//	int* p2 = *p + 1;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	//printf("%p\n", p2);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[5] = { 0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int* p = a;
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//	}
//	for (int j = 0; j < sz; j++)
//	{
//		//printf("%d", *p + 1);
//		printf("%d", *(p + j));
//
//	}
//	return 0;



//#include<stdio.h>//交换
//int a = 10;
//int b = 20;
//void exchange()
//{
//	a = 20;
//	b = 10;
//}
//int main()
//{
//	printf("a = %d, b = %d\n", a, b);
//	exchange();
//	printf("a = %d, b = %d", a, b);
//
//	return 0;
//}

//#include<stdio.h>//用指针打印数组内容
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", (p + i));
//	}
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ", *(p + j));
//	}
//	return 0;
//}

//#include<stdio.h>//冒泡排序
//maopao(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	int* p = arr;
//	for (int i= 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				int z = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = z;
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{ 
//		scanf("%d", (p + i));
//	}
//	maopao(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", * (p + i));
//	}
//	return 0;
//}

//#include<stdio.h>//调整奇数偶数顺序
//
//void Adjust(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	int* p = arr;
//	for (int i= 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (*(p + j) % 2 == 0 && *(p + j + 1) % 2 != 0)
//			{
//				int z = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = z;
//
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", (p + i));
//	}
//	Adjust(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", * (p + i));
//	}
//	return 0;
//}

//#include<stdio.h>//二分查找,二分查找升序数组里的一个数，找到返回下标，没找到返回 -1
//int bin_search(int arr[], int left, int right, int key)
//{
//	while (arr[(right + left) / 2] != key && left < right)
//	{
//		if (arr[(right + left) / 2] > key)
//			right = (right + left) / 2;
//		if (arr[(right + left) / 2] < key)
//			left = (right + left) / 2;
//	}
//	if (arr[(right + left) / 2] == key)
//		return (right + left) / 2;
//	else
//		return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int key = 0;
//	printf("请输入你要查找的数：");
//	scanf("%d", &key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//		int ret = bin_search(arr, left, right, key);
//		printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { {1, 2}, {2, 3}, {3, 4} };
//	arr[2][4] = ((3, 4), (4, 5));
//	printf("%d ", arr[2][4]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%c", &arr[i]);
//	}
//	int count = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)//字符 2 和 数字 2的效果是一样的，字符 2 有ASCII码，数字 2 没有
//			count++;
//		printf("%d ", count);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = -2;
//	int j = pow(i, 2);
//	printf("%d", j);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 10;
//	if (a == b)
//		printf("yes");
//	else if (a == b)
//		printf("no");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 'a';
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p1 = &a;
//	free(p1);
//	printf("%p\n", p1);
//	printf("%d\n", *p1);
//	return 0;
//}

//#include<stdio.h>//判断左右螺旋
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

//#include<stdio.h>
//int main()
//{
//	char A[3] = { "bcd" };//（不是a）
//	char B = 'c';
//	char C = 'd';
//	char D[3] = { "abc" };//（不是d）
//	if ((A[0] == B && B == C && A[0] == C) || (A[1] == B && B == C && A[1] == C) || (A[2] == B && B == C && A[2] == C))
//		printf("%c", B);
//	else if ((A[0] == B && B != 'd' && A[0] != 'd') || (A[1] == B && B != 'd' && A[1] != 'd') || (A[2] == B && B != 'd' && A[2] != 'd'))
//		printf("%c", B);
//	else if ((A[0] != 'd' && 'd'!= C && A[0] == C) || (A[1] != 'd' && 'd' != C && A[1] == C) || (A[2] != 'd' && 'd' != C && A[2] == C))
//		printf("%c", C);
//	else if ('d' != B && B == C && 'd' != C)
//		printf("%d", B);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[100][100] = { 0 };
//	int n = 0;
//	printf("请输入要打印的行数：");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			if (i == 0 || j == 0 || i == j)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>//用转移表实现一个加减乘除的计算器
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("****************************\n");
//	printf("******* 1.add    2.sub *****\n");
//	printf("******* 3.mul    4.div *****\n");
//	printf("******* 0.exit *************\n");
//	printf("****************************\n");
//
//}
//int main()
//{
//	int c = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	menu();
//	int (*arr[5])(int x, int y) = { NULL,add, sub, mul, div };
//	do
//	{
//		printf("请输入要进行的运算：");
//		scanf("%d", &c);
//		if (c != 0)
//		{
//			printf("请输入要计算的两个数：");
//			scanf("%d%d", &x, &y);
//			ret = (*(arr[c]))(x, y);
//			printf("结果是：%d\n", ret);
//		}
//	} while (c != 0);
//
//	return 0;
//}

//#include<stdio.h>//qsort的练习使用，包含结构体的排序
//#include<stdlib.h>
//#include<string.h>
//void int_compar(const void* x, const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
//
//void int_sort()
//{
//	int arr[10] = { 6, 7, 3, 4, 1, 2, 8, 9, 0, 5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	qsort(arr, sz, sizeof(arr[0]), int_compar);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct stu
//{
//	char name[10];
//	int age;
//};
//
//int struct_name_compar(const void* x, const void* y)
//{
//	return strcmp(((struct stu*)x)->name, ((struct stu*)y)->name);
//}
//
//void struct_sort()
//{
//	struct stu arr[4] = { {"zhangsan",22}, {"lisi", 20}, {"wangwu", 23}, {"laoliu", 66} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), struct_name_compar);
//}
//int main()
//{
//	int_sort();
//	struct_sort();
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int s = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//
//	}
//	return 0;
//}

//#include<stdio.h>//找单身狗
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = 0;
//	int cn = n;
//	while (cn)//求数的位数
//	{
//		cn /= 10;
//		num++;
//	}
//	int arr[100] = { 0 };
//	for (int i = 0; i < num; i++)//将数字的每位顺序放入数组
//	{
//		arr[num - 1 - i] = n % 10;
//		n /= 10;
//	}
//	for (int j = 0; j < num; j++)
//	{
//		int flag = 0;//判断是否有相等的数，有1否0
//		for (int k = 0; k < num; k++)
//		{
//			if (arr[j] == arr[k] && j != k)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//			printf("%d ", arr[j]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[6] = { "abcdef" };
//	printf("%d", strlen(arr));
//	return 0;
//}

//#include<stdio.h>//用冒泡排序模拟 qsort 函数
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int compare_int(const void* x, const void* y)
//{
//	return *(int*)x - *(int*)y;
//}
//
//int compare_struct(const void* x, const* y)
//{
//	return strcmp(((struct stu*)x)->name, ((struct stu*)y)->name);
//}
//
//void swap(char* p1, char* p2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char emp = *p1;
//		*p1 = *p2;
//		*p2 = emp;
//		p1++;
//		p2++;
//	}
//}
//bubble_sort(void* base, size_t sz, size_t width, int(*compare)(const void* x, const void*y))
//{
//	for (int i = 0; i < sz; i++)//冒泡的趟数
//	{
//		for (int j = 0; j < sz - 1 - i; j++)//冒泡每趟交换的次数
//		{
//			if ((*compare)((char*)base + j*width, (char*)base + (j + 1) * width) > 0)
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//		}
//	}
//}
//int main()
//{
//	int arr[5] = { 4, 1, 2, 5, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	bubble_sort(arr, sz, sizeof(arr[0]), compare_int);
//	printf("排序后\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	struct stu arr1[4] = { {"zhangsan", 32} , {"lisi", 24}, {"wangwu", 43}, {"laoliu", 16}};
//	size_t sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < sz1; i++)
//	{
//		printf("%s %d\n", arr1[i].name, arr1[i].age);
//	}
//	bubble_sort(arr1, sz1, sizeof(arr1[0]), compare_struct);
//	printf("排序后\n");
//	for (int i = 0; i < sz1; i++)
//	{
//		printf("%s %d\n", arr1[i].name, arr1[i].age);
//	}
//	return 0;
//}