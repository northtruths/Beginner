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

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char Username[7] = { 0 };
//	char password[7] = { 0 };
//	printf("����û���Ϊ��123456\n");
//	printf("�������Ϊ��abcdef\n");
//	printf("����������û���\n");
//	scanf("%s", &Username);
//	printf("������������룺\n");
//	scanf("%s", &password);
//	if (strcmp(Username, "123456") == 0 && strcmp(password, "abcdef") == 0)
//		printf("�װ���ͬѧ�ǣ���ӭ�������ߵ�����");
//	else if(strcmp(Username, "123456") != 0 && strcmp(password, "abcdef" != 0))
//		printf("�û���/�������");
//	else if (strcmp(Username, "123456") != 0)
//		printf("�û�������");
//	else if  (strcmp(password, "abcdef") != 0)
//		printf("�������");
//	return 0;
//}

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

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 12; i++)
//		printf("�������Ǽ����ˣ�%d���ˡ�\n", i);
//	printf("�����ˡ������ܰ���");
//	return  0;
//}

//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 20; i++)
//	{
//		printf("%d\n", i);
//		if (i % 2 == 0 && i % 3 == 0)
//			printf("��������\n");
//		else if (i % 2 == 0)
//			printf("����\n");
//		else if (i % 3 == 0)
//			printf("����\n");
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
//	printf("������Ϊ%d\n", j);
//	printf("ż����Ϊ%d", o);
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

//#include<stdio.h>//�жϻ�����
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = n;//����һ���� n ��ȵ��� a
//	int count = 0;
//	while (a)//���� n ��λ��
//	{
//		a /= 10;
//		count++;
//	}
//	int arr[count];//�䳤���飨vs��֧�֣�
//	a = n;
//	for (int i = 0; i < count; i++)//�� n ��ÿλ�ϵ��������θ����� arr
//	{
//		arr[count - i - 1] = a % 10;
//		a /= 10;
//	}
//	int count1 = 0;//�ü���
//	for (int j = 0; j < (count + 1) / 2; j++)//�� count1 ����ѭ������˵�� n ����������ڵ������ 
//	{
//		if (arr[j] == arr[count - j - 1])
//			count1++;
//	}
//	if (count1 == (count + 1) / 2)
//		printf("%d �ǻ�����", n);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float money = 0;
//	printf("ÿ���˾���٣�");
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
//	printf("�������Ϊ��%d", i - 1);
//	return 0;
//}

//#include<stdio.h>//����ͬ��
//int main()
//{
//	int tu = 0;
//	int ji = 0;
//	for(tu = 1; tu <= 35; tu++ )
//		for (ji = 1; ji <= 35; ji++)
//		{
//			if (tu * 4 + ji * 2 == 94 && ji + tu == 35)
//			{
//				printf("��%dֻ����%dֻ", ji, tu);
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