#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	int max(int, int);
//	printf("������һ��������");
//	scanf("%d", &a);
//	printf("��������һ��������");
//	scanf("%d", &b);
//	c = max(a, b);
//	printf("%d��%d������Ϊ%d", a, b, c);
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
//	printf("���������IQ��\n");
//	scanf("%d", &IQ);
//	if(IQ >= 140)
//		printf("���");
//}

#include<stdio.h>
#include<string>
int main()
{
	char Username = 0;
	char password = 0;
	printf("����û���Ϊ��123456\n");
	printf("�������Ϊ��abcdef\n");
	printf("����������û���\n");
	scanf("%s", &Username);
	printf("������������룺\n");
	scanf("%s", &password);
	if (strcmp(Username, "123456") == 0 && strcmp(password, "abcdef") == 0)
		printf("�װ���ͬѧ�ǣ���ӭ�������ߵ�����");
	else if (strcmp(Username, "123456") != 0)
		printf("�û�������");
	else if (strcmp(password, "abcdef") != 0)
		printf("�������");
	return 0;
}