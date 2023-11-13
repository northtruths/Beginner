#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	int max(int, int);
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	printf("请再输入一个整数：");
//	scanf("%d", &b);
//	c = max(a, b);
//	printf("%d和%d中最大的为%d", a, b, c);
//	return 0;
//}
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a,b = 0;
//	scanf("%d%d", &a, &b);
//	int answer = pow(a, b);
//	printf("%d", answer);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int IQ = 0;
//	printf("请输入你的IQ：\n");
//	scanf("%d", &IQ);
//	if(IQ >= 140)
//		printf("天才");
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char Username[7] = { 0 };
//	char password[7] = { 0 };
//	printf("你的用户名为：123456\n");
//	printf("你的密码为：abcdef\n");
//	printf("请输入你的用户：\n");
//	scanf("%s", &Username);
//	printf("请输入你的密码：\n");
//	scanf("%s", &password);
//	if (strcmp(Username, "123456") == 0 && strcmp(password, "abcdef") == 0)
//		printf("亲爱的同学们，欢迎来到王者的世界");
//	else if(strcmp(Username, "123456") != 0 && strcmp(password, "abcdef" != 0))
//		printf("用户名/密码错误");
//	else if (strcmp(Username, "123456") != 0)
//		printf("用户名错误");
//	else if  (strcmp(password, "abcdef") != 0)
//		printf("密码错误");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	printf("请输入年份：");
//	while (scanf("%d", &year) != EOF)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("闰年");
//		else if (year % 400 == 0)
//			printf("闰年");
//		else
//			printf("不是闰年");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int chose = 0;
//	printf("菜单\n1.绿豆海带汤\n2.银耳百合汤\n3.苦瓜炒牛肉\n4.鸡肝炒丝瓜\n5.青椒肉丝\n6.宫保鸡丁\n");
//	printf("请输入你要点的菜的编号：");
//	scanf("%d", &chose);
//	switch (chose)
//	{
//	case 1:
//		printf("绿豆海带汤");
//		break;
//	case 2:
//		printf("银耳百合汤");
//		break;
//	case 3:
//		printf("苦瓜炒牛肉");
//		break;
//	case 4:
//		printf("鸡肝炒丝瓜");
//		break;
//	case 5:
//		printf("青椒肉丝");
//		break;
//	case 6:
//		printf("宫保鸡丁");
//		break;
//	default:
//		printf("不好意思，没有这个菜");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 12; i++)
//		printf("老狼老狼几点了？%d点了。\n", i);
//	printf("狼来了。。快跑啊！");
//	return  0;
//}

//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 20; i++)
//	{
//		printf("%d\n", i);
//		if (i % 2 == 0 && i % 3 == 0)
//			printf("叮叮当当\n");
//		else if (i % 2 == 0)
//			printf("叮叮\n");
//		else if (i % 3 == 0)
//			printf("当当\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int Copy = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 3 == 2 && i % 7 == 1)
//		{
//			Copy = i;
//			printf("%d\n", Copy);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int j = 0;
//	int o = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//			o += i;
//		else
//			j += i;
//	}
//	printf("奇数和为%d\n", j);
//	printf("偶数和为%d", o);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	if ((int)a % 2 != 0)
//		printf("YES\n");
//	else
//		printf("NO");
//	return 0;
//}

//#include<stdio.h>//判断回文数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = n;//定义一个和 n 相等的数 a
//	int count = 0;
//	while (a)//计算 n 的位数
//	{
//		a /= 10;
//		count++;
//	}
//	int arr[count];//变长数组（vs不支持）
//	a = n;
//	for (int i = 0; i < count; i++)//将 n 的每位上的数字依次给数组 arr
//	{
//		arr[count - i - 1] = a % 10;
//		a /= 10;
//	}
//	int count1 = 0;//用计数
//	for (int j = 0; j < (count + 1) / 2; j++)//当 count1 等于循环次数说明 n 正序的数等于倒序的数 
//	{
//		if (arr[j] == arr[count - j - 1])
//			count1++;
//	}
//	if (count1 == (count + 1) / 2)
//		printf("%d 是回文数", n);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float money = 0;
//	printf("每个人捐多少？");
//	scanf("%f", &money);
//	int i = 1;
//	while(i <= 1000)
//	{
//		if (i * money >= 100000)
//		{
//			i++;
//			break;
//		}
//		i++;
//	}
//	printf("捐款人数为：%d", i - 1);
//	return 0;
//}

//#include<stdio.h>//鸡兔同笼
//int main()
//{
//	int tu = 0;
//	int ji = 0;
//	for(tu = 1; tu <= 35; tu++ )
//		for (ji = 1; ji <= 35; ji++)
//		{
//			if (tu * 4 + ji * 2 == 94 && ji + tu == 35)
//			{
//				printf("鸡%d只，兔%d只", ji, tu);
//				goto end;
//			}
//		}
//end:
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int N = 0;
//	int K = 0;
//	int money = 0;
//	int need = 0;
//	scanf("%d%d", &N, &K);
//	N = N * 10000;
//	double L = K / 100.0;
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		money += N;
//		need = 2000000 * pow(1 + L , i - 1);
//		if (money >= need)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//	if (i == 21)
//		printf("Impossible");
//	return 0;
//}