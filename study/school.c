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

#include<stdio.h>
#include<string.h>
int main()
{
	char Username[7] = { 0 };
	char password[7] = { 0 };
	printf("你的用户名为：123456\n");
	printf("你的密码为：abcdef\n");
	printf("请输入你的用户：\n");
	scanf("%s", &Username);
	printf("请输入你的密码：\n");
	scanf("%s", &password);
	if (strcmp(Username, "123456") == 0 && strcmp(password, "abcdef") == 0)
		printf("亲爱的同学们，欢迎来到王者的世界");
	else if(strcmp(Username, "123456") != 0 && strcmp(password, "abcdef" != 0))
		printf("用户名/密码错误");
	else if (strcmp(Username, "123456") != 0)
		printf("用户名错误");
	else if  (strcmp(password, "abcdef") != 0)
		printf("密码错误");
	return 0;
}

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