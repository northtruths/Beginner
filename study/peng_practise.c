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

//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 6, 7, 8, 9, 10 };
//	int* p1 = arr1;
//	int* p2 = arr2;
//	/*(p1 + 1) = (p2 + 1);*///指针加一后变成一个常量了，值是一个地址，常量不能进行赋值
//	p1 = p2;//*p1 就为 6  
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0x000013;
//	printf("%p\n", a);
//	printf("%d", a);
//}

//#include<stdio.h>
//int main()
//{
//	char* s[] = { "abc\0def" , "qwer"};
//	char** ps = s;
//	printf("%s", *ps);
//	/*printf("%c", *ps);*/
//	/*(int*)ps;
//	printf("%s", *ps);*/
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char s = 0;
//	scanf("%c", &s);
//	if (s >= 'A' && s <= 'Z')
//		printf("大写");
//	else
//		printf("小写");
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char a = getchar();
//	if (isupper(a))
//		printf("大写");
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = { "abcdef" };
//	char arr1[] = { "abc" };
//	if ((int)(strlen(arr1) - strlen(arr)) > 0)
//		printf("大于");
//	else
//		printf("小于等于");
//	return 0;
//}

//#include<stdio.h>//写一个函数，不使用临时变量，求字符串的长度
//size_t my_strlen(char* str)
//{
//	if (*str)
//		return 1 + my_strlen(++str);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	size_t len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = { "abcdefghijkl" };
//	char arr1[] = { "qwer" };
//	strcpy(arr, arr1);
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>//后置 ++ 的原理，其实变量已经加 1 ，不过是创建了一个临时变量而使用其进行运算的，前置 ++ 也一样
//int main()
//{
//	char arr[] = { "abcdef" };
//	char* p = arr;
//	printf("%c %c", *(p++ + 1) + 1, *p);
//	return 0;
//}

//#include<stdio.h>//越界
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[20] = "hello";
//	strcat(arr, arr);
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>//strcmp 比较是以 \0 为停止标识的
//#include<string.h>
//int main()
//{
//	char arr1[] = { "a\0bcdef" };
//	char arr2[] = { "abc" };
//	int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcd";
//	const char* p = arr;
//	*(p + 1) = 'c';
//	printf("%s", p);
//	return 0;
//}

//#include<stdio.h>//strcmp的模拟
//int my_strcmp(const char* p1, const char* p2)
//{
//	while (*p1 == *p2 && *p1 != '\0')
//	{
//		p1++;
//		p2++;
//	}
//	return *p1 - *p2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abccef";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//		printf("大于");
//	else if (ret == 0)
//		printf("相同");
//	else
//		printf("小于");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	size_t a = 3;
//	size_t b = 1;
//	size_t c = b - a;
//	printf("%zd\n", c);
//	printf("%d", c);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char arr1[] = "abcdee";
//	int ret = strncmp(arr, arr1, 10);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "ab\0cdefxxxxxxxxxxx";
//	char arr2[] = "nnnn";
//	//strncpy(arr1, arr2, 7);
//	strncat(arr1, arr2, 7);
//	return 0;
//}

//#include<stdio.h>//模拟实现strlen
//size_t my_strlen(char* arr)
//{
//	if (*arr)
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//#include<stdio.h>//模拟实现 strcpy
//#include<assert.h>
//void my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str2)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	my_strcpy(arr1, arr2);
//	puts(arr1);
//	return 0;
//}

//#include<stdio.h>//模拟 strcmp
//int my_strcmp(const char* str1,const char* str2)
//{
//	while (*str1 == *str2 && *str1 != '\0')
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//		printf("大于");
//	else if (ret == 0)
//		printf("等于");
//	else
//		printf("小于");
//	return 0;
//}

//#include<stdio.h>//模拟实现 strcat
//#include<assert.h>
//char* my_strcat(char* str1, const char* str2)
//{
//	char* ret = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while ((*str1++ = *str2++));
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "i love ";
//	char arr2[] = "myself";
//	my_strcat(arr1, arr2);
//	puts(arr1);
//	return 0;
//}

//#include<stdio.h>//模拟实现 strstr
//#include<string.h>
//char* my_strstr(char* str1, char* str2)
//{
//	char* u = str1;
//	char* s1 = NULL;
//	char* s2 = NULL;
//	while (*u)
//	{
//		s1 = u;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 && *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return u;
//		u++;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "def";
//	puts(my_strstr(arr1, arr2));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello bit";
//	char arr2[20] = {0};
//	memcpy(arr2, arr1, 5);
//	printf("%s", arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "hello w\0ordxxxxxxxx";
//	char arr2[] = "ceshi";
//	strncat(arr1, arr2, sizeof(arr2));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[] = { 7,7,7,7,7 };
//	memmove(arr1, arr2, 20);
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', sizeof(arr) - 1);
//	printf("%s", arr);
//	return 0;
//}
//	

//#include<stdio.h>//判断数据大小端储存方式
//int main()
//{
//	int a = 0x00000001;
//	int* p = &a;
//	if (*(char*)p == 0x1)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = '1000';
//	printf("%c\n", a);
//	printf("%d", a);
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}

//#include<stdio.h>//模拟实现strncpy
//#include<string.h>
//
//char* my_strncpy(char* str1, char* str2, size_t num)
//{
//	char* ret = str1;
//	while (num--)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello world";
//	char arr2[] = "NONO";
//	puts(my_strncpy(arr1, arr2, 3));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 127+128;
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long a = pow(2,2023);
//	long long ret = a % 1000;
//	printf("%lld", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 0; i < 10000; i++)
//	{
//		for (int j = 0; j < 32; j++)
//		{
//			&i
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long  arr[] = { 393353, 901440, 123481, 850930, 423154, 240461,
//  373746, 232926, 396677, 486579, 744860, 468782,
//  941389, 777714, 992588, 343292, 385198, 876426,
//  483857, 241899, 544851, 647930, 772403, 109929,
//  882745, 372491, 877710, 340000, 659788, 658675,
//  296521, 491295, 609764, 718967, 842000,670302 };
//	for (int i = 0; i < 36; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < sqrt(arr[i]); j++)
//		{
//			if ((long double)arr[i] / j == (long double)arr[i] / j)
//			{
//				count++;
//			}
//		}
//		printf("%d ", count);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	{
//		int arr[30][40] = { {0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,1,0,1,0,1,0,1,0,1,0,0,1,0,0,1,1,0,0,0,0,0,0,1,1},
//{0,1,0,1,1,1,1,0,0,1,1,1,1,1,0,1,1,1,0,1,1,1,1,0,0,0,0,0,1,0,1,0,1,0,0,1,1,1,1,1},
//  {1,0,0,0,0,1,0,0,0,0,0,1,1,1,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1,0,0}
//  {0,1,1,0,1,0,1,0,1,0,1,1,0,0,0,0,0,0,0,1,0,1,1,0,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,1}
// {0,0,0,0,0,1,1,0,1,0,1,0,0,0,0,0,1,1,1,1,1,1,0,0,1,1,0,1,1,0,0,0,1,0,1,0,1,0,0,1}
//  {0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,1,1}
//  {0,1,0,0,1,1,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0}
//  0010011010100110001111001101100110100010
//  1111000111101000001110010001001011101101
//  0011110100011000000001101001101110100001
//  0000000101011000010011111001010011011100
//  0000100000011001000100101000111011101100
//  0010110000001000001010100011000010100011
//  0110110000100011011010011010001101011011
//  0000100100000001010000101100000000000010
//  0011001000001000000010011001100101000110
//  1110101000011000000100011001001100111010
//  0000100100111000001101001000001010010001
//  0100010010000110100001100000110111110101
//  1000001001100010011001111101011001110001
//  0000000010100101000000111100110010101101
//  0010110101001100000100000010000010110011
//  0000011101001001000111011000100111010100
//  0010001100100000011000101011000000010101
//  1001111010010110011010101110000000101110
//  0110011101000010100001000101001001100010
//  1101000000010010011001000100110010000101
//  1001100010100010000100000101111111111100
//  1001011010101100001000000011000110110000
//  0011000100011000010111101000101110110001 }
//	return 0;
//}

//#include<stdio.h>//6
//#include<assert.h>
//#include<math.h>
//int main()
//{
//	int x = 0;
//	int r = 0;
//	int arr[6] = { 0 };
//	scanf("%d", &x);
//	int cx = x;
//	assert(99999 < x < 1000000 && x / 10000 % 10 != 0 && x / 100000 != 0);
//		for (int i = 0; i < 6; i++)
//		{
//			arr[5 - i] = cx % 10;
//			cx /= 10;
//		}
//		int s = arr[0];
//		for (int j = 0; j < 5; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[5] = s;
//		for (int k = 0; k < 6; k++)
//		{
//			r += arr[k] * pow(10, 5 - k);
//		}
//		printf("%d", r);
//	return 0;
//}

//#include<stdio.h>//7
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[len - i - 1] == 'a' || arr[len - i - 1] == 'e' || arr[len - i - 1] == 'i' || arr[len - i - 1] == 'o' || arr[len - i - 1] == 'u')
//		{
//			printf("%c", arr[len - i - 1]);
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>//8
//void pack(long long* arr, int count, long long num)
//{
//	for (int i = 0; i < count; i++)
//	{
//		arr[count - i - 1] = num % 10;
//		num /= 10;
//	}
//}

//long long trans(long long* arr, int count)
//{
//	long long r = 1;
//	for (int i = 0; i < count; i++)
//	{
//		if (arr[i] == 0)
//			arr[i] = 1;
//		r *= arr[i];
//	}
//	return r;
//}
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long r = n;
//	while (r >= 10)
//	{
//		long long cr = r;
//		int count = 0;
//		while (cr)
//		{
//			cr /= 10;
//			count++;
//		}
//		long long arr[count];
//		pack(arr, count, r);
//		r = trans(arr, count);
//		printf("%lld\n", r);
//	}
//	printf("%lld\n", r);
//	return 0;
//}

//#include<stdio.h>
//int count = 0;
//int gongyue(long long a, long long b)
//{
//	int i = 0;
//	if (a > b)
//		i = b;
//	else
//		i = a;
//	for (i; i > 1; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			count++;
//			return 1;
//		}
//	}
//	return 0;
//}
//void move(long long arr[3][4], int r, int c)
//{
//	if (gongyue(arr[r][c], arr[r - 1][c]))
//	{
//		arr[r][c] = 1;
//		move(arr, r - 1, c);
//	}
//	else if (gongyue(arr[r][c], arr[r + 1][c]))
//	{
//		arr[r][c] = 1;
//		move(arr, r + 1, c);
//	}
//	else if ((gongyue(arr[r][c], arr[r][c - 1])))
//	{
//		arr[r][c] = 1;
//		move(arr, r, c - 1);
//	}
//	else if ((gongyue(arr[r][c], arr[r][c + 1])))
//	{
//		arr[r][c] = 1;
//		move(arr, r, c + 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	long long arr[3][4];
//	for(int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	int r = 0;
//	int c = 0;
//	scanf("%d%d", &r, &c);
//	move(arr, r, c);
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		/*if (getchar() == '\n')
//			break;*/
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int r = 0;
//	scanf("%d%d", &n, &k);
//	int arr[100000] = { 0 };
//	for (int g = 0;; g++)
//	{
//		scanf("%d", &arr[g]);
//		if (getchar() == '\n')
//			break;
//	}
//	for (int i = 0; i < n - k; i++)
//	{
//		int a = 0;
//		int b = 0;
//		for (int j = 0; j < k; j++)
//		{
//			a += arr[i + j];
//		}
//		for (int l = 0; l < k; l++)
//		{
//			b += arr[i + l + 1];
//		}
//		if (a > b)
//			r = a;
//		else
//			r = b;
//	}
//	printf("%d", r);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long a = pow(2, 2023);
//	int r = a % 1000;
//	printf("%d", r);
//	return 0;
//}

//#include<stdio.h>//2
//int main()
//{
//	long long a = 2;
//	for (int i = 1; i <= 2023; i++)
//	{
//		a = a * 2 % 1000;
//	}
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a[] = "好人";
//	printf("%d", sizeof(a) - 1);
//	printf("%d", strlen(a));
//	return 0;
//}

//#include<stdio.h>//模拟strncat
//char* my_strncat(char* ptr1, char* ptr2, size_t num)
//{
//	char* ret = ptr1;
//	while (*ptr1 != '\0')
//	{
//		ptr1++;
//	}
//	while (num)
//	{
//		*ptr1++ = *ptr2++;
//		num--;
//	}
//	if (*(ptr1 - 1) != '\0')
//		*ptr1 = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "I love ";
//	char arr2[] = "myself";
//	puts(my_strncat(arr1, arr2, 7));
//	return 0;
//}

//#include<stdio.h>//模拟memcpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	while (num)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//		num--;
//	}
//	return ret;
//}
//int main()
//{
//	int a = 0x11223344;
//	int b = 0x55667788;
//	printf("%x\n", *(int*)my_memcpy(&a, &b, 1));//0x11223388
//	printf("%x\n", *(int*)my_memcpy(&a, &b, 2));//0x11227788
//	return 0;
//}

//#include<stdio.h>//模拟memmove
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	char* ret = dest;
//	if (dest > src)
//	{
//		char* p1 = (char*)dest;
//		char* p2 = (char*)src;
//		p1 = p1 + num - 1;
//		p2 = p2 + num - 1;
//		while (num)
//		{
//			*p1-- = *p2--;
//			num--;
//		}
//	}
//	else
//	{
//		while (num)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//			num--;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "i wanna eat banabb";
//	my_memmove(arr + 15, arr + 13, 3);
//	puts(arr);
//	return 0;
//}

//#include<stdio.h>
//
//enum s
//{
//	a ,
//	b ,
//	c 
//};
//int main()
//{
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int b = -3;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	void* p1 = 0x1122334455667788;
//	int* p2 = p1;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = malloc(40);
//	free(p);
//	free(p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[] = { "hello" };
//	int arr1[] = { 1,2,3 };
//	printf(arr1);
//	return 0;
//}

//#include<stdio.h>//对未初始化的指针解引用是错误的
//int main()
//{
//	char* p;
//	*p = 0x11223344;
//	printf("%x", *p);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "123def";
//	char arr2[] = "ab3def";
//	char arr3[] = "1b3def";
//	int ret1 = atoi(arr1);
//	int ret2 = atoi(arr2);
//	int ret3 = atoi(arr3);
//	printf("%d\n", ret1);//123
//	printf("%d\n", ret2);//0
//	printf("%d\n", ret3);//1
//	return 0;
//}

//#include<stdio.h>//模拟 atoi 函数
//int my_atoi(const char* ptr)
//{
//	int ret = 0;
//	int flag = 0;
//	while (1)
//	{
//		if (*ptr >= 48 && *ptr <= 57 || *ptr == '-' || (*ptr >= 0 && *ptr <= 32))
//		{
//			if (*ptr >= 0 && *ptr <= 32)
//				ptr++;
//			else
//			{
//				if (*ptr == '-')
//				{
//					flag = 1;
//					ptr++;
//				}
//				else
//				{
//					ret *= 10;
//					ret += *ptr - 48;
//					ptr++;
//				}
//			}
//		}
//		else
//		{
//			if (flag == 1)
//				ret = -ret;
//			return ret;
//		}
//	}
//}
//int main()
//{
//	char arr1[] = "-123def";
//	char arr2[] = "ab3def";
//	char arr3[] = " 1b3def";
//	char arr4[] = "123456";
//	int ret1 = my_atoi(arr1);
//	int ret2 = my_atoi(arr2);
//	int ret3 = my_atoi(arr3);
//	int ret4 = my_atoi(arr4);
//	printf("%d\n", ret1);//123
//	printf("%d\n", ret2);//0
//	printf("%d\n", ret3);//1
//	printf("%d\n", ret4);//1
//	return 0;
//}

//#include<stdio.h>//验证位段是怎么内存对齐的
//int main()
//{
//	struct S1
//	{
//		char a;
//		int b : 1;
//	}s1;
//	struct S2
//	{
//		char a;
//		int b;
//	}s2;
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	enum s
//	{
//		a = 1.1,
//
//	};
//	return 0;
//}

//#include<stdio.h>//用联合体判断大小端
//int jug(void)
//{
//	union U
//	{
//		int a;
//		struct S
//		{
//			char q;
//			char w;
//			char e;
//			char r;
//		}s;
//	}u;
//	u.a = 1;
//	return u.s.q;
//
//}
//int main()
//{
//	int ret = jug();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端");
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 14610;
//	int r = 0;
//	for (int j = 4; j >= 0; j--)
//	{
//		int a = i;
//		r = a / pow(10, j);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	size_t s = sizeof(arr + 1);
//	printf("%zd", s);
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* pm = (int*)malloc(40);
//	if (pm == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(pm + i) = i;
//	}
//	char* pc = (char*)calloc(10, 1);
//	if (pc == NULL)
//	{
//		perror("calloc"); 
//		return 1;
//	}
//	int* ptr = (int*)realloc(pm, 80);
//	int* pr = NULL;
//	if (ptr == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	else
//		pr = ptr;
//	free(pr);
//	pr = NULL;
//	pm = NULL;
//	free(pc);
//	pc = NULL;
//	return 0;
//}

//#include<stdio.h>//malloc模拟二维数组
//#include<stdlib.h>
//int main()
//{
//	int** p = (int**)malloc(3 * sizeof(int*));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int* p1 = (int*)malloc(5 * sizeof(int));
//	int* p2 = (int*)malloc(5 * sizeof(int));
//	int* p3 = (int*)malloc(5 * sizeof(int));
//	if (p1 == NULL || p2 == NULL || p3 == NULL)
//	{
//		perror("malloc p1 p2 p3");
//		return 1;
//	}
//	*p = p1;
//	*(p + 1) = p2;
//	*(p + 2) = p3;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			p[i][j] = i + j;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	free(p);
//	p = NULL;
//	free(p1);
//	p1 = NULL;
//	free(p2);
//	p2 = NULL;
//	free(p3);
//	p3 = NULL;
//	return 0;
//}

//#include<stdio.h>//测试 union 是否能有柔性数组
//union s
//{
//	int a;
//	int arr[0];
//};
//int main()
//{
//	//int arr[0];
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int nums[] = { 1, 2, 3 };
//    int n = sizeof(nums) / sizeof(nums[0]);
//    int* ans = (int*)malloc(2 * n * sizeof(int));
//    for (int i = 0; i < 2 * n; i++)
//    {
//        if (i < n)
//            ans[i] = nums[i];
//        else if (i >= n)
//            ans[i] = nums[i - n];
//    }
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	malloc(0);
//	return 0;
//}

//struct student
//{
//    int age;
//    char name[20];
//    int ID;
//}a, b, c;
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    a.age = 17;
//    struct student* pa = &a;
//    pa->ID = 20231123;
//    pa->name[49] = 's';
//    a.name[] = "lisi";
//    struct student d = { 17, "lisi", 101};
//   puts()
//   /* char arr[20] = { 0 };
//    *arr = 'w';
//    puts(arr);*/
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//struct student 
//{
//    int age;
//    char name[50];
//    int ID;
//}a = {17, "lisi", 101}, b, c;
//
//int main()
//{
//    struct student d;
//    puts(a.name);
//    return 0;
//}

//#include<stdio.h>//两个结构体创建相同的变量，只有在前面的结构体变量创建成功；同一个结构体创建相同名字的变量，也只有在前面的变量创建成功；两个不同的结构体当中的成员变量不会有命名冲突。
//struct s1
//{
//	int a;
//	int b;
//	char c;
//}a;
//
//struct s2
//{
//	int a;
//	int b;
//	char b;
//}b;
//
//int main()
//{
//	struct s1 arr;
//	struct s2 arr;
//	int c = 0;
//	char c = 0;
//	c = 10;
//	c
//	return 0;
//}

//#include<stdio.h>
//struct s1
//{
//	char a;
//	char b;
//	int c;
//};
//struct s2
//{
//	char a;
//	char b;
//	struct s1 c;
//};
//int main()
//{
//	int r1 = sizeof(struct s1);
//	int r2 = sizeof(struct s2);
//	char* p = &"w";
//	//printf("%d\n%d", r1, r2);
//	printf("%c", '97 + 1');
//	printf("%x", p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	struct S3
//	{
//		double d;//8
//		char c;
//		int i;
//	};
//	printf("%d\n", sizeof(struct S3));
//	//练习4-结构体嵌套问题
//	struct S4
//	{
//		char c1;//1
//		struct S3 s3;//8
//		double d;//8
//	};
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//#include<stdio.h>//顺序读写函数练习
//int main()
//{
//	FILE* p1 = fopen("./../text1.txt", "w");//文件1输入流
//	if (p1 == NULL)
//	{
//		perror("fopen text1 w");
//		return 1;
//	}
//	for (int t = 0; t < 3; t++)
//	{
//		fputc(('a' + t + 10), p1);
//	}
//	FILE* p2 = fopen("./../text1.txt", "r");//文件1输出流
//	if (p2 == NULL)
//	{
//		perror("fopen text1 r");
//		return 1;
//	}
//	char arr[3] = { 0 };
//	for (int t = 0; t < 3; t++)
//	{
//		arr[t] = fgetc(p2);
//		printf("%c ", arr[t]);//输出乱码
//	}
//	fclose(p1);
//	p1 = NULL;
//	fclose(p2);
//	p2 = NULL;
////注意以上代码在 stdout 上输出的是乱码，因为同一个文件不能同时进行读和写
//	printf("\n");
//	FILE* p3 = fopen("./../text2.txt", "r");//文本2输入流
//	if (p3 == NULL)
//	{
//		perror("read text2.txt");
//		return 1;
//	}
//	char arr1[50] = { 0 };
//	puts(fgets(arr1, 15, p3));
//	FILE* p4 = fopen("./../text3.txt", "w");//文本3输出流
//	if (p4 == NULL)
//	{
//		perror("write to text3.txt");
//		return 1;
//	}
//	fputs(arr1, p4);
//	fclose(p3);
//	p3 = NULL;
//	fclose(p4);
//	p4 = NULL;
//	FILE* p5 = fopen("./../text4.txt", "w");//文本4输出流
//	if (p5 == NULL)
//	{
//		perror("write to text4");
//		return 1;
//	}
//	fprintf(p5, "%s", "练习 fprintf");
//	FILE* p6 = fopen("./../text5.txt", "r");
//	if (p6 == NULL)
//	{
//		perror("read text5.txt");
//		return 1;
//	}
//	char arr2[50] = { 0 };
//	fscanf(p6, "%s", arr2);
//	puts(arr2);
//	fclose(p5);
//	p5 = NULL;
//	fclose(p6);
//	p6 = NULL;
//	//------------------------------------------
//	//练习 fread 和 fwrite
//	printf("\n");
//	FILE* p7 = fopen("./../text6.txt", "wb");//文件6输出流
//	if (p7 == NULL)
//	{
//		perror("read text6.txt");
//		return 1;
//	}
//	int a = 3;
//	fwrite(&a, sizeof(int), 1, p7);
//	FILE* p8 = fopen("./../text7.txt", "rb");//文件7输入流
//	if (p8 == NULL)
//	{
//		perror("write text6.txt");
//		return 1;
//	}
//	int b = 0;
//	fread(&b, sizeof(int), 1, p8);
//	printf("%d", b);
//	fclose(p7);
//	p7 = NULL;
//	fclose(p8);
//	p8 = NULL;
//}


//#include<stdio.h>//拷贝文件
//int main()
//{
//	FILE* p1 = fopen("./../text1.txt", "r");
//	if (p1 == NULL)
//	{
//		perror("open text1 r");
//		return 1;
//	}
//	FILE* p2 = fopen("./../text2.txt", "w");
//	if (p2 == NULL)
//	{
//		fclose(p1);
//		p1 = NULL;
//		perror("open text1 r");
//		("open text1 w");
//		return 1;
//	}
//	int c = 0;
//	while ((c = fgetc(p1)) != EOF)
//	{
//		fputc(c, p2);
//	}
//	fclose(p1);
//	p1 == NULL;
//	fclose(p2);
//	p2 == NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* p1 = fopen("./../text3.txt", "r");
//	if (p1 == NULL)
//	{
//		perror("text3");
//		return 1;
//	}
//	char a = fgetc(p1);
//	printf("%c\n", a);
//	FILE* p2 = fopen("./../text5.txt", "r");
//	if (p2 == NULL)
//	{
//		perror("text5");
//		return 1;
//	}
//	char b = fgetc(p2);
//	printf("%c\n", b);
//	a = fgetc(p1);
//	printf("%c\n", a);
//	b = fgetc(p2);
//	printf("%c\n", b);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[20] = { 0 };
//	int num = sprintf(arr, "hello world");
//	int l = strlen("hello world");
//	printf("%d %d", num, l);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("text1.c", "w");//以写的形式打开文件 text1.c（相当于打开了文件 text1.c 的输出流）
//	if (pf == NULL)//判断文件打开是否成功
//	{
//		perror("write to text1.c");
//		return 1;
//	}
//	//向文件 text1.c 写入数据
//	// ...
//	fclose(pf);//关闭文件
//	pf = NULL;//pf 置为空指针，避免野指针
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	fscanf(stdin, "%d", &a);
//	fprintf(stdout, "%d", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("./../text.txt", "w");//打开文件，写
//	if (pf == NULL)
//	{
//		perror("write to text.txt");
//		return 1;
//	}
//	fputs("测试", pf);
//	//
//	//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//创建一个 10 个元素的整型数组
//	int* p1 = arr;//这里 arr 是首元素地址
//	int(*p2)[10] = &arr;// 这里 &arr 是整个数组的地址，与首元素地址值一样，类型不同
//	++p1;//向后走 1，不过 p1 是首元素地址，指向数组第二个元素 2
//	++p2;//向后走 1，不过 p2 是整个数组地址，指向第十个元素后面的一个元素，是未知值
//	int a = *p1;//解引用 p1 获得 2
//	int b = *((int*)p2 - 1);//将 p2 转换为 int* 类型，指针向前移动一个整型，指向第十个元素 10
//	printf("%d\n%d", a, b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	union U
//	{
//		int a;
//		char b;
//		int c;
//	}n;
//	n.a = 0x11223344;
//	printf("%x\n%c\n%x", n.a, n.b, n.c);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	enum Sex
//
//	{
//		男 = 3, 
//		女,  
//		保密 = 7  
//	};
//	int people = 0;
//	printf("请输入性别：男3，女4，保密5\n");
//	scanf("%d", &people);
//	////////////////////////////////////////
//	if (people == 3)
//		printf("男性\n");
//	//////////////////////////////////////
//	if (people == 女)
//		printf("女性\n");
//	return 0;
//}

//蓝桥杯模拟

//#include<stdio.h>//2
//int main()
//{
//	int count = 0;
//	int arr[30] = { 0 };
//	for (int i = 0; i < 30; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 30; ++i)
//	{
//		for (int j = i + 1; j < 30; ++j)
//		{
//			if ((arr[i] * arr[j] >= 2022) && (i != j))
//				++count;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>//4
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//    // 请在此输入您的代码
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int t = 0;
//    scanf("%d", &t);
//    int arr[100][100] = { 0 };
//    while (t)
//    {
//        int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
//        scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
//        --r1;
//        --r2;
//        --c1;
//        --c2;
//        for (int i = r1; i <= r2; ++i)
//        {
//            for (int j = c1; j <= c2; ++j)
//            {
//                arr[i][j] = 1;
//            }
//        }
//        --t;
//    }
//    int count = 0;
//    for (int i = 0; i < n * m; ++i)
//    {
//        if (arr[0][i] == 0)
//            ++count;
//    }
//    printf("%d", count);
//    return 0;
//}

//#include<stdio.h>//错误
//int main()
//{
//	char arr[26] = { 0 };
//	for (int i = 0; i < 26; ++i)
//	{
//		arr[i] = i + 65;
//	}
//	for (int i = 0; i < 26; ++i)
//	{
//		for (int j = 0; j < 26; ++j)
//		{
//			for (int k = 0; k < 26; ++k)
//			{
//				if ((i * 26 * 26) + (j * 26) + (k + 1) + 26 == 2022)
//				{
//					printf("%c%c%c", arr[i], arr[j], arr[k]);
//					goto end;
//				}
//			}
//		}
//	}
//	end:
//	return 0;
//}

//#include<stdio.h>//最大连通，注意因为所有联通的都是联通的，所以一个地点计算一次即可
//int count = 0;//计数连通
//int max = 0;//最大连通
//int find(int i, int j, int (*arr)[62])
//{
//	if (i < 1 || i >30 || j < 1 || j > 60)//条件不满足退出
//		return 0;
//	if (arr[i][j] == 1)
//	{
//		++count;
//		arr[i][j] = 0;
//		find(i - 1, j, arr);
//		find(i + 1, j, arr);
//		find(i, j + 1, arr);
//		find(i, j - 1, arr);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int arr[32][62] = { 0 };//行和列多都多出两行避免越界
//	int i = 0;
//	int j = 0;
//	for(i = 1; i < 31; ++i)//输入
//	{
//		for (j = 1; j < 61; ++j)
//		{
//			arr[i][j] = getchar() - 48;
//		}
//		scanf("%*c");
//	}
//	for(i = 1; i < 31; ++i)//行
//	{
//		for(j = 1; j < 61; ++j)//列
//		{
//			find(i, j, arr);//计算连通数
//			if (max < count)
//				max = count;
//			count = 0;//连通数置零
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>//信号覆盖
//#include<math.h>
//
//int main()
//{
//	int W = 0;//横坐标
//	int H = 0;//纵坐标
//	int n = 0;
//	int R = 0;
//	scanf("%d%d%d%d", &W, &H, &n, &R);
//	scanf("%*c");
//	int count = 0;//计数
//	int p[101][101] = { 0 };//判断是否计算过
//	while(n)
//	{
//		int x = 0;
//		int y = 0;
//		scanf("%d%d", &x, &y);//每次输入不同的x，y
//		scanf("%*c");
//		for (int i = 0; i <= W; ++i)
//		{
//			for (int j = 0; j <= H; ++j)
//			{
//				if (p[i][j] == 0 && sqrt(pow(x - i, 2) + pow(y - j, 2)) <= R)//没有计数过的话计数加一，标志赋值 1
//				{
//					++count;
//					p[i][j] = 1;
//				}
//			}
//		}
//		--n;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>//附近最小
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d%*c", &n);
//	int* arr = (int*)calloc(n, sizeof(int));
//	if (arr == NULL)
//	{
//		perror("arr");
//		return 0;
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%*c");
//	int k = 0;
//	scanf("%d", &k);
//	for(int i = 0; i < n; ++i)
//	{
//		int min = 1000000;
//		for (int m ; m <= 2 * k; ++m)
//		{
//			if (i - k + m < 0 || i - k + m > n - 1)
//				continue;
//			
//			if (min > arr[i - k + m])
//				min = arr[i - k + m];
//		}
//		printf("%d ", min);
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}

//#include <stdio.h>//第三小,自己版，超时
//#include <stdlib.h>
//#include<string.h>
//int compare(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d%*c", &n);
//	int* arr = (int*)malloc(3 * sizeof(int));
//	scanf("%d%d", &arr[0], &arr[1]);
//	int count = 0;
//	while (n - 2)
//	{
//		scanf("%d", &arr[2 + count]);
//		qsort(arr, 3 + count, 4, compare);
//		printf("%d ", arr[2]);
//		++count;
//		arr = (int*)realloc(arr, (3 + count) * 4);
//		--n;
//	}
//	return 0;
//}

//#include<stdio.h>//第三小，看了题解思路版
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d%*c", &n);
//	int arr[3] = { 1000000, 1000000, 1000000 };
//	scanf("%d%d", &arr[0], &arr[1]);
//	int s = 0;
//	while (n - 2)
//	{
//		scanf("%d", &s);
//		if (s < arr[2])
//			arr[2] = s;
//		qsort(arr, 3, 4, compare);
//		printf("%d ", arr[2]);
//		--n;
//	}
//	return 0;
//}

//#include<stdio.h>//特殊日期
//int is_leap_year(int year)
//{
//	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
//		return 1;//是
//	else
//		return 0;//不是
//}
//int main()
//
//{
//	int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int rarr[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int year = 2000;
//	int month = 0;
//	int count = 0;
//	for (year; year <= 1999999; ++year)
//	{
//		if(is_leap_year(year))
//		{
//			for (month = 1; month <= 12; ++month)
//			{
//				for (int day = 1; day <= rarr[month]; ++day)
//				{
//					if (year % day == 0 && year % month == 0)
//						++count;
//				}
//			}
//		}
//		else
//		{
//			for (month = 1; month <= 12; ++month)
//			{
//				for (int day = 1; day <= arr[month]; ++day)
//				{
//					if (year % day == 0 && year % month == 0)
//						++count;
//				}
//			}
//		}
//	}
//	printf("%d", count + 1);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 0;//满足条件的个数
//	int res = 0;//当前的数
//	int i = 0;//复制 res 判断 1 的个数
//	int count = 0;//计数 1 的个数
//	for (res = 3; num < 23; ++res)//当 count 为 23 个时退出循环，此时 res 为 答案 + 1
//	{
//		i = res;
//		count = 0;
//		while(i)
//		{
//			if ((i ^ 1) < i)
//				++count;
//			i >>= 1;
//		}
//		if (count == 3)
//			++num;
//	}
//	printf("%d", res - 1);
//	return 0;
//}

////思路：
////1.先在 m+1 个字符中找到序数最小的，将其与后面的字符串复制到目标字符串中（删掉前面的 x 个字符）
////2.再从剩下的 m-x+1 个字符中找到序数最小的，以此循环/递归
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int min = 0;//记录最小的序数偏移量(当前删掉的字符数)
//int x = 0;//删掉的字符数总数
//char res[1000000] = { 0 };//目标字符串
//int count = 0;//递归次数，关系到字符串复制时的初始位置
//int del(char* res, char* arr, int n, int m, int cm)
//{
//    min = 0;
//    for (int i = 0; i < m; ++i)
//    {
//        if (arr[i] < arr[i + 1] && arr[i] < arr[min])
//            min = i;
//        else if (arr[i] > arr[i + 1] && arr[i + 1] < arr[min])
//            min = i + 1;
//    }
//    x += min;
//    strcpy(res + count, arr + min);
//    ++count;
//    if (x == cm)
//        return 0;
//    else
//        del(res, arr + min + 1, n, m - x, cm);
//}
//int main()
//{
//    int n, m;
//    scanf("%d%d%*c", &n, &m);
//    char arr[1000000];
//    scanf("%s", arr);
//    int cm = m;//用于比较删掉的字符数和需要删掉的字符数以结束递归
//    del(res, arr, n, m, cm);
//    puts(res);
//    return 0;
//}

//#include <stdio.h>//最小位数和
//#include <stdlib.h>
//int main()
//{
//    int arr[6] = { 0 };
//    int min[6] = { 0 };
//    int n = 64;
//    int sum = 0;
//    int mins = 9 * 6;
//    while (n)
//    {
//        sum = 0;
//        for (int i = 0; i < 6; ++i)
//        {
//            arr[i] = getchar() - 48;
//            sum += arr[i];
//        }
//        getchar();
//        if (sum < mins)
//        {
//            mins = sum;
//            for (int i = 0; i < 6; ++i)
//            {
//                min[i] = arr[i];
//            }
//        }
//        --n;
//    }
//    for (int i = 0; i < 6; ++i)
//    {
//        printf("%d", min[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	static int a;
//	printf("%d%d", a);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int sum = 3 * 3 * 4;
//	int num = 2023 / sum;
//	printf("%d", num);
//	return 0;
//}

//#include <stdio.h>//统计次数
//#include <stdlib.h>
//#include<string.h>
//int main()
//{
//    char arr[10000] = { 0 };
//    int i = 0;
//    while ((arr[i] = getchar()) != EOF)
//    {
//        ++i;
//    }
//    int num = strlen(arr);
//    int put[10] = { 0 };
//    for (i = 0; i < num; ++i)
//    {
//        put[arr[i] - 48] += 1;
//    }
//    for (i = 0; i < 10; ++i)
//    {
//        printf("%d ", put[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	printf("%f", a);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    long double L = 0;
//    scanf("%llf", &L);
//    int count = 0;
//    while (L > 1)
//    {
//        L /= 2;
//        ++count;
//    }
//    printf("%d", count);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int P = 0;
//    int i = 1;
//    scanf("%d", &P);
//    while (P)
//    {
//        ++i;
//        if (i == 4)
//            i = 1;
//        --P;
//    }
//    if (i == 1)
//        printf("low");
//    else if (i == 2)
//        printf("mid");
//    else if (i == 3)
//        printf("high");
//    return 0;
//}

//5137 8534 5597 3858 9242 *7901 5735 4752 3590 6568 8481 1039 9940 9666 2950 1119 9391 7083 4625 8509
//9661 6419 1115 2502 *2663 5787 9553 7676 7508 3428 5698 1757 6048 8086 3091 1620 1277 1419 9534 5014
//4125 9529 1679 *9525 1896 2988 9763 3348 9366 1248 3699 7555 3167 9637 3632 1165 4143 8678 8590 2559
//8822 8835 *4322 5504 3759 4993 3402 4171 8027 4096 1933 7803 8034 2560 9801 7238 2611 9710 9350 2387
//7413 *7211 3107 5763 6372 2439 6668 1892 2076 5500 8264 2324 8747 4871 8962 2672 1398 3421 2508 2793
//*4965 9822 5995 3687 5007 1500 5033 1787 4380 1000 4069 6532 2023 3430 8036 7491 3960 6755 4173 1693
//8836 8610 3057 5447 4001 7848 1081 6441 9940 8584 7272 5980 3735 8203 6889 4069 2760 3629 3819 3806
//2389 9878 6163 3273 4565 9555 9764 4663 5197 5417 7669 6991 8089 6394 6961 8681 9700 3870 2243 5311
//8103 7366 2394 7100 7594 3715 4593 9263 8125 8233 4523 2144 4814 2990 3657 4785 7583 8574 1335 8833
//1654 8952 9522 1759 3219 3389 1600 5384 7865 1244 7198 2922 4883 7763 3163 5019 3593 2738 4405 2470
//2246 6189 5809 5824 3465 5961 5751 1041 4460 2481 8948 4457 7853 6995 8558 4521 8908 9785 1926 3572
//8302 2528 9940 4514 1389 5333 4862 9811 1070 4862 3095 1336 3409 7779 7709 7524 4195 2464 5806 3991
//3414 8622 2139 4970 4211 1474 5610 8534 6228 5955 8105 7034 4600 8445 3055 2723 9615 5666 1291 6734
//8046 5166 7040 8201 8825 5220 5867 3269 8799 5285 1705 3271 8660 1559 8889 9833 9800 3393 4002 3087
//3339 3753 1699 3662 2975 6709 2931 6437 2750 6376 5119 1412 3806 3836 7429 6393 7661 7638 4959 9775
//3681 5303 9472 3821 6692 1690 2170 7144 5132 2402 7483 3806 7831 1584 7894 8907 7029 4832 1675 4022
//6622 6455 2206 5189 3874 2819 5304 3327 9723 8756 2253 4483 4005 2539 8246 1887 9571 8397 1067 4393
//4981 5432 7097 5512 8146 3286 5150 1717 3912 9794 1291 9356 5867 2859 3969 8923 2909 1303 2068 4981
//2557 8192 1391 3839 4577 4491 5678 1239 7734 3398 4216 5026 8964 6124 2710 2942 5702 6536 5959 4856
//2886 3077 7358 7363 2826 2438 4590 2038 3370 1846 3942 7574 2209 8937 7393 9020 1991 6662 7878 1492
//9613 8885 3620 7561 5913 9032 1954 3118 4377 9838 4629 5447 8313 5514 2398 3412 8243 6406 9272 5676
//7911 3914 2760 4286 4813 8555 8563 2017 3425 2995 1248 7067 4201 6228 9655 5684 6665 6909 1411 5755
//5997 5965 9264 9780 7407 9247 9805 9601 8513 8995 1489 4059 1781 8177 3152 5155 8927 1659 6585 5236
//6428 5704 7820 5584 1575 6593 1564 7261 5638 7396 2609 3468 9662 1271 2100 2946 1778 5975 2019 1113
//7034 8041 2660 4038 5845 9221 8186 4893 3771 6855 6367 7818 3739 3463 4011 9659 7323 9413 1709 8610
//3254 5705 1228 1479 9546 4221 3147 1027 4088 5022 5140 1586 7300 7384 5697 8129 8667 7264 2299 9641
//5907 5332 9787 3037 8998 3672 3474 8796 9104 7331 8321 3021 1439 5992 9253 8387 2895 7489 3219 1056
//8717 8100 4183 2250 1804 5588 6799 9781 7428 1675 6452 5683 4139 1186 2513 8412 4823 8360 6859 8448
//1584 8119 1764 1598 3958 6205 1970 7925 8173 1094 8456 8579 3657 6227 8868 2921 7962 4787 8786 9714
//3495 3036 7617 8448 3219 1455 4797 8053 8208 9694 7293 4144 1244 7065 3223 7796 9161 4435 1928 8227

//#include<stdio.h>
//#include<math.h>
//int max = 0;
//void find(int(*arr)[20], int i, int j)
//{
//	for (int x = i - 5; x <= i + 5; ++x)//x,y为偏移后的坐标
//	{
//		for (int y = j - 5; y <= j + 5; ++y)
//		{
//			if (!(x >= 0 && x <= 29 && y >= 0 && y <= 19))
//				continue;
//			if (abs(i - x) + abs(j - y) <= 5)
//			{
//				if (abs(arr[i][j] - arr[x][y]) > max)
//					max = abs(arr[i][j] - arr[x][y]);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[30][20] = { 0 };
//	for (int i = 0; i < 30; ++i)
//	{
//		for (int j = 0; j < 20; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//		scanf("%*c");
//	}
//	for (int i = 0; i < 30; ++i)
//	{
//		for (int j = 0; j < 20; j++)
//		{
//			find(arr, i, j);
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0; 
//	scanf("%d", &n);
//	if (n == 0)
//		printf("yes");
//	printf("yyy");
//	else
//		printf("no");
//}

//#include<stdio.h>//最尖位置
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    scanf("%*c");
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int max = 0;
//    for (int i = 1; i < n - 1; ++i)
//    {
//        int cmax = 0;
//        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
//            cmax = (arr[i - 1] - arr[i]) * (arr[i + 1] - arr[i]);
//        if (cmax > max)
//            max = cmax;
//    }
//    printf("%d", max);
//    return 0;
//}

//#include"stdio.h"
//int main()
//{
//	printf("根据原理那么包含库函数的头文件也可以用\"\"而非一定是<>");
//	return 0;
//}

//#include<stdio.h>
//typedef int MM;
//typedef MM NN;
//typedef int UU;
//typedef double MM;
//int main()
//{
//	int a = 10;
//	MM b = 100;
//	NN c = 1000;
//	UU d = 10000;
//	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
//	printf("%d", sizeof(MM));
//	return 0;
//}

//#include<stdio.h>//相近分解
//#include<math.h>
//int main()
//{
//    int n = 0;
//    int num = 0;
//    int a = 1;
//    for (n = 1; num < 23; ++n)
//    {
//        for (a = 1; a <= n; ++a)//a
//        {
//            for (int b = a - 2; b <= a + 2; ++b)//b
//            {
//                for (int c = a - 2; c <= a + 2; ++c)//c
//                {
//                    if(abs(b - c) <= 2 && a * b * c == n)
//                    {
//                        ++num;
//                        goto next;
//                    }
//                }
//            }
//        }
//    next:;
//    }
//    --n;
//    printf("%d", n);
//    return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//scanf("%*c");
//	int* p = (int*)calloc(n, 4);
//	if (p == NULL)
//	{
//		perror("calloc p");
//		return 1;
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", p + i);
//	}
//	//for (int i = 0; i < n; ++i)
//	//{
//	//	printf("%d", *(p + i));
//	//}
//	printf("%d ", 0);
//	int count = 0;
//	for (int j = 1; j < n; ++j)
//	{
//		count = 0;
//		for (int k = 0; k <= j - 1; ++k)
//		{
//			if (*(p + j) >= *(p + k))
//				++count;
//		}
//		printf("%d ", count);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else return b;
//}
//
//#include<stdio.h>
//int main()
//{
//
//	int max(int a, int b);
//}

#include<stdio.h>
int main()
{
	int a, b, c;
	a = b = c = 1;
	printf("%d %d", a, c);
	return 0;
}