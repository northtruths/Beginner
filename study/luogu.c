#define _CRT_SECURE_NO_WARNINGS

//������1��˳��ṹ

//#include<stdio.h>
//int main()
//{
//    int s = 0;
//    int n = 0;
//    scanf("%d %d", &n, &s);
//    printf("%d", s * n);
//    return 0;
//}

//#include<stdio.h>//�����2.��7�����ַ�ת
//#include<math.h>
//int main()
//{
//	float a = 0;
//	scanf("%f", &a);
//	int b = a * 10;//a ת��Ϊ����
//	int arr[4] = { 0 };
//	for (int i = 0; i < 4; i++)
//	{
//		arr[i] = b % 10;
//		b /= 10;
//	}
//	float c = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		c += arr[i] * pow(10, -i);
//	}
//	printf("%.3f", c);
//	return 0;
//}

//#include<stdio.h>//�����2.ϰ2�����������
//#include<math.h>
//int main()
//{
//    double a, b, c = 0;
//    scanf("%lf%lf%lf", &a, &b, &c);
//    double p = (a + b + c) / 2.0;
//    double area = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("%.1lf", area);
//    return 0;
//}

//#include<stdio.h>//�����2.��12����ѧ�ٵ�
//int main()
//{
//	int s = 0;
//	int v = 0;
//	scanf("%d%d", &s, &v);
//	double time1 = ((double)s / v);
//	int time = s / v;
//	if (time1 != time)
//		time += 11;
//	else
//		time += 10;
//	int h = time / 60 + 1;
//	int rh = 0;
//	if (h > 8)
//		rh = 24 + 8 - h;
//	else
//		rh = 8 - h;
//	int m = 60 - (time - (h - 1) * 60);
//	printf("%02d:%02d", rh, m);
//	return 0;
//}

//#include<stdio.h>//b2029 �����ˮ
//int main()
//{
//	int w = 20 * 1000;
//	int h = 0;
//	int r = 0;
//	scanf("%d%d", &h, &r);
//	double v = 3.14 * r * r * h;
//	double num = w / v;
//	if ((int)(w / v) != num)
//		num = (int)num + 1;
//	printf("%d", (int)num);
//	return 0;
//}

//#include<stdio.h>//P1425 С�����Ӿʱ��
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	int time = (60 * c + d) - (60 * a + b);
//	int h = time / 60;
//	int m = time - h * 60;
//	printf("%d %d", h, m);
//	return 0;
//}

//#include<stdio.h>//P1421 С�����ľ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int money = a * 10 + b;
//	int pen = 1 * 10 + 9;
//	int i = 1;
//	while (i * pen <= money)
//	{
//		++i;
//	}
//	printf("%d", i - 1);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	int scores = A * 0.2 + B * 0.3 + C * 0.5;
	printf("%d", scores);
	return 0;
}