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
#include<string.h>
int main()
{
	char Username[7] = { 0 };
	char password[7] = { 0 };
	printf("����û���Ϊ��123456\n");
	printf("�������Ϊ��abcdef\n");
	printf("����������û���\n");
	scanf("%s", &Username);
	printf("������������룺\n");
	scanf("%s", &password);
	if (strcmp(Username, "123456") == 0 && strcmp(password, "abcdef") == 0)
		printf("�װ���ͬѧ�ǣ���ӭ�������ߵ�����");
	else if(strcmp(Username, "123456") != 0 && strcmp(password, "abcdef" != 0))
		printf("�û���/�������");
	else if (strcmp(Username, "123456") != 0)
		printf("�û�������");
	else if  (strcmp(password, "abcdef") != 0)
		printf("�������");
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	printf("��������ݣ�");
//	while (scanf("%d", &year) != EOF)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//			printf("����");
//		else if (year % 400 == 0)
//			printf("����");
//		else
//			printf("��������");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int chose = 0;
//	printf("�˵�\n1.�̶�������\n2.�����ٺ���\n3.��ϳ�ţ��\n4.���γ�˿��\n5.�ཷ��˿\n6.��������\n");
//	printf("��������Ҫ��Ĳ˵ı�ţ�");
//	scanf("%d", &chose);
//	switch (chose)
//	{
//	case 1:
//		printf("�̶�������");
//		break;
//	case 2:
//		printf("�����ٺ���");
//		break;
//	case 3:
//		printf("��ϳ�ţ��");
//		break;
//	case 4:
//		printf("���γ�˿��");
//		break;
//	case 5:
//		printf("�ཷ��˿");
//		break;
//	case 6:
//		printf("��������");
//		break;
//	default:
//		printf("������˼��û�������");
//	}
//	return 0;
//}