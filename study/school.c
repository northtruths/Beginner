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
#include<string>
int main()
{
	char Username = 0;
	char password = 0;
	printf("你的用户名为：123456\n");
	printf("你的密码为：abcdef\n");
	printf("请输入你的用户：\n");
	scanf("%s", &Username);
	printf("请输入你的密码：\n");
	scanf("%s", &password);
	if (strcmp(Username, "123456") == 0 && strcmp(password, "abcdef") == 0)
		printf("亲爱的同学们，欢迎来到王者的世界");
	else if (strcmp(Username, "123456") != 0)
		printf("用户名错误");
	else if (strcmp(password, "abcdef") != 0)
		printf("密码错误");
	return 0;
}