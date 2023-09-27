#include<stdio.h>
int main()
{
	int a, b, c;
	int max(int, int);
	printf("请输入一个整数：");
	scanf("%d", &a);
	printf("请再输入一个整数：");
	scanf("%d", &b);
	c = (a, b);
	printf("整数%d与整数%d的最大值为%d", a, b, c);
	return 0;
}
int max(int x, int y)
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return = z;
}