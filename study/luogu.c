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

//#include<stdio.h>//P3954 [NOIP2017 �ռ���] �ɼ�
//int main()
//{
//	int A, B, C;
//	scanf("%d%d%d", &A, &B, &C);
//	int scores = A * 0.2 + B * 0.3 + C * 0.5;
//	printf("%d", scores);
//	return 0;
//}


//	������2����֧�ṹ


//#include<stdio.h>//P2433 �����1-2��Сѧ��ѧ N ��һ
//#include<math.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", & num);
//	int m = 110;
//	int n = 10;
//	int r = 110;
//	switch (num)
//	{
//	case 1:
//		printf("I love Luogu!");
//		break;
//	case 2:
//		printf("%d %d", 6, 4);
//		break;
//	case 3:
//		printf("%d\n%d\n%d", 3, 12, 2);
//		break;
//	case 4:
//		printf("%.3lf", 500.0 / 3);
//		break;
//	case 5:
//		printf("%d", (260 + 220) / (12 + 20));
//		break;
//	case 6:
//		printf("%.4lf", sqrt(6 * 6 + 9 * 9));
//		break;
//	case 7:
//		printf("%d\n%d\n%d\n", 110, 90, 0);
//		break;
//	case 8:
//		printf("%.4lf\n%.4lf\n%.3lf", 2 * 3.141593 * 5, 3.141593 * 25, 4.0 / 3 * (3.141593 * pow(5, 3)));
//		break;
//	case 9:
//		printf("%d", (((((1 + 1) * 2) + 1) * 2) + 1) * 2);
//		break;
//	case 10:
//		printf("%d", 9);
//		break;
//	case 11:
//		printf("%.4lf", 100.0 / 3.0);
//		break;
//	case 12:
//		printf("%d\n%c", 'M' - 64, 18 + 64);
//		break;
//	case 13:
//		printf("%d", (int)pow(4.0 / 3 * 3.141593 * pow(4, 3) + 4.0 / 3 * 3.141593 * pow(10, 3), 1 / 3.0));
//		break;
//	case 14:
//		for (int i = 1; i < 110; i++)
//		{
//			m = 110 - i;
//			n = 10 + i;
//			if (m * n >= 3500 && r > m)
//			{
//				r = m;
//			}
//		}
//		printf("%d", (int)r);
//		break;
//	}
//
//	return 0;
//}

//#include<stdio.h>//	�����2.ϰ6��Apples Prologue / ƻ���ͳ���
//int main()
//{
//	int m = 0;//ƻ��
//	int t = 0;//һ��ƻ��ʱ��
//	int s = 0;//ʱ��
//	int r = 0;//����
//	scanf("%d%d%d", &m, &t, &s);
//	if (m == 0)
//	{
//		printf("%d", 0);
//		return 0;
//	}
//	else if (t == 0)
//	{
//		printf("%d", 0);
//		return 0;
//	}
//	else if (s % t == 0)//���������û�а��ƻ������
//	{
//		r = m - s / t;
//		if (r < 0)
//		{
//			printf("%d", 0);
//			return 0;
//		}
//	}
//	else
//	{
//		r = (int)(m - (double)s / t);
//		if (r < 0)
//		{
//			printf("%d", 0);
//			return 0;
//		}
//	}
//	printf("%d", r);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    if (x % 2 == 0 && x > 4 && x <= 12)
//        printf("%d ", 1);
//    else
//        printf("%d ", 0);
//    if (x % 2 == 0 || (x > 4 && x <= 12))
//        printf("%d ", 1);
//    else
//        printf("%d ", 0);
//    if ((x % 2 == 0 && (x <= 4 || x > 12)) || (x % 2 != 0 && x > 4 && x <= 12))
//        printf("%d ", 1);
//    else
//        printf("%d ", 0);
//    if (x % 2 != 0 && (x <= 4 || x > 12))
//        printf("%d ", 1);
//    else
//        printf("%d ", 0);
//    return 0;
//}

//#include<stdio.h>//P5712 �����3.��4��Apples
//#include<string.h>
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("Today, I ate ");
//	printf("%d", x);
//	if (x > 1)
//		printf(" apples.");
//	else
//		printf(" apple.");
//	return 0;
//}

//#include<stdio.h>//P5713 �����3.��5������Ŷ�ϵͳ
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int local = 5 * n;
//	int luogu = 3 * n + 11;
//	if (local < luogu)
//		printf("Local");
//	else
//		printf("Luogu");
//	return 0;
//}

//#include<stdio.h>//�����3.��7����������,��λ��Ч��
//int main()
//{
//	double m = 0;
//	double h = 0;
//	scanf("%lf%lf", &m, &h);
//	double BMI = m / (h * h);
//	if (BMI < 18.5)
//		printf("Underweight");
//	else if (BMI < 24)
//		printf("Normal");
//	else
//	{
//		printf("%.6\n", BMI);
//		printf("%lf\n", BMI);
//		printf("Overweight");
//	}
//	return 0;
//}

//#include<stdio.h>//�����3.��8����λ������
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//    return *(int*)a - *(int*)b;
//}
//int main()
//{
//    int arr[3] = { 0 };
//    for (int i = 0; i < 3; ++i)
//    {     
//        scanf("%d", &arr[i]);
//    }
//    qsort(arr, 3, sizeof(int), compare);
//    for (int j = 0; j < 3; ++j)
//    {   
//        printf("%d", arr[j]);
//        printf(" ");
//    }
//    return 0;
//}

//#include<stdio.h>//�����3.��9���·�����
//int main()
//{
//	int y, m;
//	scanf("%d%d", &y, &m);
//	int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	if (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && m == 2)
//		printf("29");
//	else
//		printf("%d", arr[m]);
//	return 0;
//}

//#include<stdio.h>// [NOIP2004 �ռ���] �����˵Ľ��
//int main()
//{
//	int arr[7][2] = { 0 };
//	for (int i = 0; i < 14; ++i)
//	{
//		scanf("%d", (int*)arr + i);
//	}
//	int max = 0;
//	int day = 0;
//	for (int j = 0; j < 14; j += 2)
//	{
//		int add = *((int*)arr + j) + *((int*)arr + j + 1);
//		if (max < add && add > 8)
//		{
//			max = add;
//			day = (j + 2) / 2;
//		}
//	}
//	printf("%d", day);
//	return 0;
//}

//#include<stdio.h>//P1909 [NOIP2016 �ռ���] ��Ǧ��
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[3][2] = { 0 };
//	for (int i = 0; i < 6; i += 2)
//	{
//		scanf("%d%d", (int*)arr + i, (int*)arr + 1 + i);
//	}
//	int money = 0x4fffffff;
//	for (int j = 0; j < 6; j += 2)
//	{
//		int num = (int)ceil((double)n / *((int*)arr + j));
//		int need = num * (*((int*)arr + 1 + j));
//		if (money > need)
//			money = need;
//	}
//	printf("%d", money);
//	return 0;
//}

//#include<stdio.h>//P5717 �����3.ϰ8�������η���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b <= c || a + c <= b || b + c <= a)
//	{
//		printf("Not triangle");
//		return 0;
//	}
//	if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
//		printf("Right triangle\n");
//	else if ((a * a + b * b > c * c) && (a * a + c * c > b * b) && (b * b + c * c > a * a))
//		printf("Acute triangle\n");
//	else
//		printf("Obtuse triangle\n");
//	if (a == b || a == c || b == c)
//		printf("Isosceles triangle\n");
//	if (a == b && b == c)
//		printf("Equilateral triangle\n");
//	return 0;
//}

//#include<stdio.h>//P1422 С��ҵĵ��
//int main()
//{
//	int e = 0;
//	scanf("%d", &e);
//	double m = 0;
//	if (e <= 150)
//	{
//		m = e * 0.4463;
//	}
//	else if (e <= 400)
//	{
//		m = 150 * 0.4463 + ((e - 150) * 0.4663);
//	}
//	else
//	{
//		m = 150 * 0.4463 + 250 * 0.4663 + ((e - 400) * 0.5663);
//	}
//	printf("%.1lf", m);
//	return 0;
//}

//#include<stdio.h>//P1424 С��ĺ��̣��Ľ��棩
//int main()
//{
//	int x, n;
//	scanf("%d%d", &x, &n);
//	int i = 0;
//	int s = 0;
//	while (n)
//	{
//		if ((x + i) % 7 != 6 && (x + i) % 7 != 0)
//			s += 250;
//		--n;
//		++i;
//	}
//	printf("%d", s);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, 3, 4, compare);
//	int s1 = arr[0];
//	int s2 = arr[2];
//	int r = 0;
//	r = s2 % s1;
//	while (r)
//	{	
//		s1 = s2;
//		s2 = r;
//		r = s1 % s2;
//	}
//	printf("%d/%d", arr[0] / s2, arr[2] / s2);
//	return 0;
//}

//#include<stdio.h>//	[NOIP2005 �ռ���] ����ժƻ��
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int h = 0;
//	scanf("%d", &h);
//	int count = 0;
//	for (int j = 0; j < 10; ++j)
//	{
//		if (h + 30 >= arr[j])
//			++count;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>//P4414 [COCI2006-2007#2] ABC
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int arr1[3] = { 0 };
//	scanf("%d%d%d", &arr1[0], &arr1[1], &arr1[2]);
//	qsort(arr1, 3, 4, compare);
//	char arr2[4] = { 0 };
//	scanf("%*c%c%c%c", &arr2[0], &arr2[1], &arr2[2]);
//	printf("%d %d %d", arr1[(arr2[0] - 65)], arr1[(arr2[1] - 65)], arr1[(arr2[2] - 65)]);
//	return 0;
//}

//#include<stdio.h>//[NOIP2008 �ռ���] ISBN ����
//#include<string.h>
//int main()
//{
//	char arr[15] = { 0 };
//	for (int i = 0; i < 13; ++i)//0-670-83162-0
//	{
//		arr[i] = getchar();
//	}
//	int jug = ((arr[0] - 48) * 1 + (arr[2] - 48) * 2 + (arr[3] - 48) * 3 + (arr[4] - 48) * 4 + (arr[6] - 48) * 5 + (arr[7] - 48) * 6 + (arr[8] - 48) * 7 + (arr[9] - 48) * 8 + (arr[10] - 48) * 9) % 11;//ʶ����
//	if ((arr[12] - 48) == jug || (arr[12] == 'X' && jug == 10))
//		printf("Right");
//	else
//	{
//		if(jug == 10)
//		{
//			arr[12] = 'X';
//			puts(arr);
//		}
//		else 
//		{
//			jug += 48;
//			arr[12] = jug;
//			puts(arr);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>//p1035 [noip2002 �ռ���] �������
//#include<math.h>
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	long long n = 0;
//	double sn = 0;
//	for (n = 1; sn <= k; ++n)
//	{
//		sn += pow(n, -1);
//	}
//	printf("%lld", n - 1);
//	return 0;
//}

//#include<stdio.h>//��������
//int main() 
//{
//    int k, n = 0;
//    scanf("%d", &k);
//    for (double Sn = 0; Sn <= k; ++n, Sn += 1.0 / n);
//    printf("%d", n);
//    return 0;
//}

//#include<stdio.h>//	[NOIP2015 �ռ���] ���
//#include<math.h>
//int main()
//
//{
//	int k = 0;
//	scanf("%d", &k);
//	int arr[143] = { 0 };//�˴�С����װ��10000������
//	for (int i = 0; i <= 142; ++i)//��ÿһ����������һ��Ԫ��
//	{
//		arr[i] = i + 1;
//	}
//	int sum = 0;
//	int i = 0;
//	for (i = 0; (sum += i) < k; ++i)//�������������ĸ���
//	{
//		;
//	}
//	int sum1 = 0;
//	for (int j = 1; j < i; ++j)//�� i ��ǰ��ļ�����
//	{
//		sum1 += j;
//	}
//	int more = k - sum1;//����Ĳ���������������
//	long long gold = 0;
//	for (int z = 1; z <= i; ++z)
//	{
//		if (z == i)
//		{
//			gold += z * more;
//		}
//		else
//		{
//			gold += pow(z, 2);
//		}
//	}
//	printf("%lld", gold);
//	return 0;
//}

//#include<stdio.h>//�����4.��11���������
//int main()
//{
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>//�����4.��13�������ڴ�
//#include<math.h>
//int jug(int i)
//{
//	int flag = 0;
//	for (int j = i - 1; j >= sqrt(i); --j)
//	{
//		if (i % j == 0)//��������
//		{
//			flag = 1;
//			break;
//		}
//	}
//	return flag;//1 ���ǣ�0��
//}
//int main()
//{
//	int L = 0;
//	scanf("%d", &L);
//	int sum = 0;
//	int count = 0;
//	for (int i = 2; sum < L; ++i)
//	{
//		if (jug(i) == 0)
//		{
//			sum += i;
//			if(sum <= L)
//			{
//				++count;
//				printf("%d\n", i);
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>//[USACO1.5] �������� Prime Palindromes
//#include<math.h>
//int jug1(int i)//�ж�����
//{
//	for (int j = 2; j <= sqrt(i); ++j)
//	{
//		if (i % j == 0)//��������
//		{
//			return 1;
//		}
//	}
//	return 0;//1 ���ǣ�0��
//}
//int jug2(int i)//�жϻ�����
//{
//	char arr[10] = { 0 };
//	int count = 0;//λ��
//	while (i)
//	{
//		arr[count] = i % 10;
//		i /= 10;
//		++count;
//	}
//	for (int k = 0; k <= count / 2; ++k)
//	{
//		if (arr[k] != arr[count - 1 - k])
//			return 1;
//	}
//	return 0;
//}
//int jug3(int i)//�ж�λ��
//{
//	if ((1000 <= i && i <= 9999) || (100000 <= i && i <= 999999))
//		return 0;
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (b >= 10000000)
//		b = 9999999;
//	if (a % 2 == 0)
//		a -= 1;
//	for (i = a; i <= b; i += 2)
//	{
//		if (jug3(i) == 1 && jug2(i) == 0 && jug1(i) == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int l, r;
//int check1(int x)//���λ��
//{
//	if ((1000 <= x && x <= 9999) || (100000 <= x && x <= 999999)) return 0;//��֪��&&��||���ȼ��Ŀ��Դ������ 
//	return 1;
//}
//int check2(int x)//����Ƿ����
//{
//	int a[20], flag = 1;//���������£��࿪��
//	while (x > 0)
//	{
//		a[flag] = x % 10;
//		x /= 10;
//		flag++;
//	}
//	for (int i = 1; i <= flag / 2; i++)
//		if (a[i] != a[flag - i]) return 0;//�����ϻ��� 
//	return 1;
//}
//int check3(int x)//����Ƿ�Ϊ���� 
//{
//	if (x == 2) return 1;
//	for (int i = 2; i <= sqrt(x); i++)
//		if (x % i == 0) return 0;
//	return 1;
//}
//int main()
//{
//	scanf("%d %d", &l, &r);
//	if (l == 2) printf("2\n");//һ��Ҫע��2������ 
//	if (l % 2 == 0) l++;
//	if (r >= 10000000)//�ٴ�������������ǻ�������
//		r = 9999999;
//	for (int i = l; i <= r; i = i + 2)//ö��ÿһ������
//	{
//		if (check1(i) == 0) continue;
//		if (check2(i) == 0) continue;
//		if (check3(i) == 0) continue;
//		printf("%d\n", i);//printf���cout��ܶ� 
//	}
//	return 0;
//}

//#include<stdio.h>//P1423 С������Ӿ
//#include<math.h>
//int main()
//{
//	double s = 0;
//	scanf("%lf", &s);
//	int step = 0;
//	double sn = 0;
//	do
//	{
//		++step;
//		sn += 2 * pow(0.98, step);
//	} while (sn < s);
//	printf("%d", step);
//	return 0;
//}

//#include<stdio.h>//P1307 [NOIP2011 �ռ���] ���ַ�ת
//#include<string.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int n1 = n;
//	int n2 = n;
//	while (n1)
//	{
//		++count;
//		n1 /= 10;
//	}
//	char arr[11] = { 0 };
//	int i = 0;
//	if (n2 < 0)
//	{
//		arr[0] = '-';
//		++i;
//		++count;
//		n2 = -n2;
//	}
//	for (i; i < count; ++i)
//	{
//		{
//			arr[i] = n2 % 10 + 48;
//			n2 /= 10;
//		}
//	}
//	int r = 0;
//	int k = 0;
//	if (n < 0)
//		++k;
//	for (k; k < count; ++k)
//	{
//		r += (arr[k] - 48) * pow(10, count - 1 - k);
//	}
//	if (n < 0)
//		r = -r;
//	printf("%d", r);
//	return 0;
//}

//#include<stdio.h>//P1720 ����������Ǯ��쳲��������У�
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double Fn = (pow((1 + sqrt(5)) / 2.0, n) - (pow((1 - sqrt(5)) / 2.0, n))) / sqrt(5);
//	printf("%.2lf", Fn);
//	return 0;
//}

//#include<stdio.h>//�����4.ϰ5���󼫲� / �����ֵ
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, 4, compare);
//	printf("%d", arr[n - 1] - arr[0]);
//}

//#include<stdio.h>//	�����
//int count = 1;
//int max = 1;
//void jug(int* p1)
//{
//	if (*p1 + 1== *(p1 + 1))
//	{
//		++count;
//		if (max < count)
//		{
//			max = count;
//		}
//		jug(p1 + 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10001] = { 0 };
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int* p1 = &arr[0];
//	int* p2 = &arr[0];
//	for (int j = 0; j < n; ++j)
//	{
//		jug(p1);
//		++p2;
//		p1 = p2;
//		count = 1;
//	}
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>//	[NOIP2012 �ռ���] �������ֽ�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i= 0;
//	for (i = 2; i <= n; ++i)
//	{
//		if (n % i == 0)
//			break;
//	}
//	printf("%d", n / i);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int flag = 0;
//	for (int i = 1; i < 14000; i += 2)
//	{
//		flag = 0;
//		for (int j = 2; j < i; ++j)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag = 1)
//			break;
//		else
//			printf("%d\n", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int jug(int i)//�ж�����
//{
//	for (int j = 2; j <= sqrt(i); ++j)
//	{
//		if (i % j == 0)//��������
//		{
//			return 1;
//		}
//	}
//	return 0;//1 ���ǣ�0��
//}
//int main()
//{
//	for (int i = 11111; i < 14000; i += 2)
//	{
//		if (jug(i) == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//#include<stdio.h>//�����4.ϰ8����������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int j = 1;
//	for (i; i <= n; ++i)//��ӡ������
//	{
//		for (j; j <= n * i; ++j)
//		{
//			printf("%02d", j);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	i = 1;
//	j = 1;
//	int p = 0;
//	for (i; i <= n; ++i)
//	{
//		int k = 0;
//		for (j = 1; j <= i; ++j)
//		{
//			++p;
//			for (k; k < n - i; ++k)
//				printf("  ");
//			printf("%02d", p);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>//�����4.ϰ9�����
//#include<stdlib.h>
//int compare(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, 4, compare);
//	int sum = 0;
//	for (int j = 1; j < n - 1; ++j)
//	{
//		sum += arr[j];
//	}
//	printf("%.2lf", (double)sum / (double)(n - 2));
//	return 0;
//}

//#include<stdio.h>//	[COCI2017-2018#6] Davor
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int x = 1;
//	int k = 1;
//	for (x = 100; x >= 1; --x)
//	{
//		for (k = 1; k <= (n - 700) / 1092.0; ++k)
//		{
//			if ((7 * x + 21 * k) * 52 == n)
//				goto end;
//		}
//		if ((7 * x + 21 * k) * 52 == n)
//			goto end;
//	}
//end:
//	printf("%d\n%d", x, k);
//	return 0;
//}

//#include<stdio.h>//	[NOIP2004 �����] ���Ĵ���ƻ�
//int main()
//{
//	int arr[12] = { 0 };
//	for (int i = 0; i < 12; ++i)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	int r = 0;
//	for (int i = 0; i < 12; ++i)
//	{
//		m += 300;
//		if (m < arr[i])
//		{
//			printf("-%d", i + 1);
//			goto end;
//		}
//		m -= arr[i];
//		r += m / 100;
//		m %= 100;
//	}
//	printf("%.0lf", m + r * 100 * 1.2);
//end:
//	return 0;
//}