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

//#include<stdio.h>
//int main()
//{
//	int arr[6] = { 0, 99, 90, 85, 100, 79 };
//	int c = 0;
//	printf("������Ҫ��ɼ���ѧ�ţ�");
//	scanf("%d", &c);
//	switch (c)
//	{
//	case 1:
//		printf("%d", arr[1]);
//		break;
//	case 2:
//		printf("%d", arr[2]);
//		break;
//	case 3:
//		printf("%d", arr[3]);
//		break;
//	case 4:
//		printf("%d", arr[4]);
//		break;
//	case 5:
//		printf("%d", arr[5]);
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int road = 0;
//	printf("��·����Ϊ(m)��");
//	scanf("%d", &road);
//	int tree = road;
//	int sw = 0;
//	printf("��������Ϊ��m����");
//	scanf("%d", &sw);
//	int de_tree = sw;
//	printf("��ʣ%d����", tree - de_tree);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[5][5] = { {1, 2, 3, 4, 5}, {6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
//	int n = 0;
//	int m = 0;
//	printf("������Ҫ������������\n");
//	scanf("%d%d", &n, &m);
//	printf("����ǰ��\n");
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		int emp = 0;
//		emp = arr[n - 1][i];
//		arr[n - 1][i] = arr[m - 1][i];
//		arr[m - 1][i] = emp;
//	}
//	printf("������\n");
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char fruit[7][20] = { "applees", "bananas","peaches", "cherries", "pears", "oranges", "strawberies" };
//	char s[20] = { 0 };
//	char b[] = "Brussels sprouts";
//	size_t len = strlen(b);
//	printf("������Ҫ���ҵ�ˮ����");
//	scanf("%s", s);
//	for (int i = 0; i < 7; i++)
//	{
//		if (strcmp(s, fruit[i]) == 0)
//			for (int j = 0; j < len; j++)
//			{
//				*(fruit[i] + j) = *(b + j);
//			}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[100] = { 0 };
//	printf("������Ҫ�жϵ��ַ�����");
//	scanf("%s", arr);
//	size_t len = strlen(arr);
//	int flag = 0;
//	for (int i = 0; i < (len + 1) / 2; i++)
//	{
//		if (arr[i] != arr[len - 1 - i])
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag = 1)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}

//#include<stdio.h>//ѡ����ϲ����ˮ��
//#include<string.h>
//
//void swap(char* p1, char* p2, size_t len, int num, int sz)
//{
//	char a[100] = { 0 };
//	strcpy(a, p1 + num + sz);//��ˮ������ַ���������
//	strcpy(p1 + num, "Brussels sprouts");//��ˮ����ʼ�滻Ϊ Brussels sprouts
//	size_t B = strlen("Brussels sprouts");//�� Brussels sprouts ��ʼ�滻Ϊԭ�����������ַ���
//	strcpy(p1 + num + B, a);
//}
//int main()
//{
//	char fruit[7][100] = { "apples", "bananas","peaches", "cherries", "pears", "oranges", "strawberies" };
//	char s[100] = { 0 };
//	while (gets(s) != EOF)
//	{
//		size_t len = strlen(s);
//		int cflag = 0;//�ж��Ƿ��ҵ�ˮ��
//		for (int i = 0; i < 7; i++)//ÿ��ˮ�����ַ����Ƚ�
//		{
//			size_t f = strlen(fruit[i]);
//			for (int j = 0; j < len - f + 1; j++)//�ӵ�һ���ַ���ʼ��ÿ��ˮ���ַ��ȽϺ�ʹ���һ���ַ��ٿ�ʼ�Ƚ�
//			{
//				int flag = 0;//�ж��ַ���ͬ�ĸ���
//				for (int k = 0; k < f; k++)
//				{
//					if (*(fruit[i] + k) == *(s + k + j))//�ַ����еĶ��ٸ��ַ���ÿ��ˮ�����ַ��Ƚ�
//						flag++;
//					if (flag == f)//���ַ���ͬ������ˮ���ַ�����ͬ���ҵ���
//					{
//						swap(s, fruit[i], len, j, f);
//						cflag = 1;
//					}
//				}
//			}
//		}
//
//		if (cflag == 0)
//			printf("you must not enjoy fruit\n");
//		else
//			puts(s);
//	}
//	return 0;
//}

//#include<stdio.h>//�ַ������滻
//#include<string.h>
//int main()
//{
//	char arr[100] = { "I love apples too" };
//	char arra[100] = { 0 };
//	strcpy(arra, arr + 13);//�� apples ������ַ������� arra
//	char arr1[100] = { "Brussels sprouts" };
//	strcpy(arr + 7, arr1);//�� apples �� a ��ʼ���� Brussels sprouts ���串��
//	strcpy(arr + 23, arra);//�� Brussels sprouts �󣬰�ǰ����� arra ����ַ������ں���
//	puts(arr);
//	return 0;
//}

//#include<stdio.h>//����������
//#include<stdlib.h>
//#include<string.h>
//int compare(const void* p1, const void* p2)
//{
//	return strcmp((char*)p1, (char*)p2);
//}
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	char arr[N][50];
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s", arr[i]);
//	}
//	qsort(arr, N, sizeof(arr[0]), compare);
//	for (int j = 0; j < N; j++)
//	{
//		printf("%s\n", arr[j]);
//	}
//	return 0;
//}

//#include<stdio.h>//����ת��Ϊ�Ƕ�λ ASCII ���ַ�
//int main()
//{
//	float A = 0;
//	float B = 0;
//	scanf("%f%f", &A, &B);
//	int c = A / B * 100000; 
//	int arr[5] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		arr[4 - i] = c % 10;
//		c /= 10;
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%c", arr[j] + 65);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
//	}
//	arr[0][0] += 10;
//	arr[0][2] += 10;
//	arr[1][1] += 10;
//	arr[2][0] += 10;
//	arr[2][2] += 10;
//	for (int j = 0; j < 3; j++)
//	{
//		for (int k = 0; k < 3; k++)
//		{
//			printf("%d ", arr[j][k]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int N = 0;
//	int M = 0;
//	scanf("%d%d", &N, &M);
//	int* p = NULL;
//	(int *)calloc(N, sizeof(int));
//	if ((int*)calloc(N, sizeof(int)) == NULL)//���� N �� ��СΪ int �Ŀռ䣬����ʼ�� 0
//	{
//		perror("calloc");
//		return 1;
//	}
//	else
//		p = (int*)calloc(N, sizeof(int));
//	for (int m = 1; m <= M; m++)
//	{
//		for (int n = 1; n <= N; n++)
//		{
//			if (n % m == 0)
//				*(p + n - 1) ^= 1;
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (*(p + i) == 1)// 0 Ϊ���� 1Ϊ��
//			printf("%d,", i + 1); 
//	}
//	printf("\b ");
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* p = NULL;
//	(int*)calloc(n, sizeof(int));
//	if ((int*)calloc(n, sizeof(int)) == NULL)//���� N �� ��СΪ int �Ŀռ䣬����ʼ�� 0
//	{
//		perror("calloc");
//		return 1;
//	}
//	else
//		p = (int*)calloc(n, sizeof(int));
//	for (int i = 0; ; i++)
//	{
//		scanf("%d", p + i);
//		if (getchar() == '\n')
//			break;
//	}
//	int max = 0;
//	int flag = 0;
//	for (int j = 0; j < n - 1; j++)
//	{
//		if (*(p + j) > *(p + 1 + j) && max < *(p + j))
//		{
//			max = *(p + j);
//			flag = j + 1;
//		}
//		else if (*(p + j) < *(p + 1 + j) && max < *(p + 1 + j))
//		{
//			max = *(p + 1 + j);
//			flag = j + 2;
//		}
//	}
//	free(p);
//	p = NULL;
//	printf("%d %d", max, flag);
//	return 0;
//}

//#include<stdio.h>
//int max(int a, int b, int c)
//{
//	if (a >= b && a >= c)
//		return a;
//	else if (b >= a && b >= c)
//		return b;
//	else if (c >= a && c >= b)
//		return c;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	float m = (float)max(a, b, c) / ((float)max(a + b, b, c) * (float)max(a, b, b + c));
//	printf("%f", m);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int findmax(int* p, int n)
//{
//	int m = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (*(p + i) >= *(p + 1 + i) && *(p + i) >= m)
//			m = *(p + i);
//		else if (*(p + i) <= *(p + 1 + i) && *(p + 1 + i) >= m)
//			m = *(p + 1 + i);
//	}
//	return m;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* p = malloc(n * sizeof(int));
//	if (p == NULL)
//	{ 
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", p + i);
//	}
//	int r = findmax(p, n);
//	printf("%d", r);
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	scanf("%*c");
//	char a = 0;
//	while ((a = getchar()) != '\n')
//	{
//		printf("%c", a);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int m = 0;//ƻ��
	int t = 0;//һ��ƻ��ʱ��
	int s = 0;//ʱ��
	int r = 0;//����
	scanf("%d%d%d", &m, &t, &s);
	if (m == 0)
	{
		printf("%d", 0);
		return 0;
	}
	else if (s % t == 0)//���������û�а��ƻ������
	{
		r = m - s / t;
	}
	else
	{
		r = (int)(m - (double)s / t);
	}
	printf("%d", r);
	return 0;
}