#include<stdio.h>
int main()
{
	int a, b, c;
	int max(int, int);
	printf("������һ��������");
	scanf("%d", &a);
	printf("��������һ��������");
	scanf("%d", &b);
	c = (a, b);
	printf("����%d������%d�����ֵΪ%d", a, b, c);
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