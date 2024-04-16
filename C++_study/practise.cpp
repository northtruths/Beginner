#define _CRT_SECURE_NO_WARNINGS

//#include"practise.h"
//
//
//typedef struct node
//{
//	int a;
//}Node;
//
//void Push(one::Node* node)
//{
//	node->a = 20;
//}
//
//int a = 0;
//
//using namespace one;
//
//int main()
//{
//	one::Node node = {node.a = 0};
//	::Push(&node);
//	cout << node.a  + node.a + 1;
//	return 0;
//}

//#include<iostream>
////using namespace std;
//
//namespace two
//{
//	void swap(float a, int b)
//	{
//		
//	}
//
//	void  swap(int a, int b)
//	{
//
//	}
//}
//
//using namespace two;
//
//void swap(int a, int b)
//{
//
//}
//
//void swap(char a, char b)
//{
//
//}
//
//void swap(int a, int b, double c)
//{
//
//}
//
////void swap(char a, char b)
////{
////
////}
//int main()
//{
//	swap(3, 5, 3.0);
//	return 0;
//}

//int main()
//{
//	int a = 19;
//	int* const p1 = &a;
//	const int* p2 = &a;
//
//	int b = 10;
//	*p1 = 20;
//	p2 = &b;
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//int main()
//{
//	//int x = 10, y = 3;
//	//const int& z = x * y;
//
//	char a = 'a';
//	char& b = a;
//	b -= 1;
//	cout << sizeof(b)<<"\n" << sizeof(char&)<<endl<<sizeof(char*);
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//void f(int*)
//{
//	cout << "int*"<<endl;
//}
//
//void f(int)
//{
//	cout << "int" << endl;
//}
//
//int main()
//{
//	f(NULL);
//	return 0;
//}

//#include<iostream>
//
//struct swapp
//{
//	void swap(int a, int b)//局部变量优先，所以自己赋值给自己了
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	int a, b;
//};
//int main()
//{
//	swapp a;
//	struct swapp b;
//	return 0;
//}

//#include<iostream>
//#include"practise.h"
//using namespace std;
//int a = 0;
//
//int f(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	char a = 'a';
//	cout << f();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int* p = NULL;
//	int& tp = *p;
//	
//	tp = 17;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	const int& b = a;  //这样权限被缩小了，是允许的
//	int& c = b;  //权限平移，是允许的
//	cout << a << b << c;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//struct test1
//{
//	int a;
//};
//
//class test2
//{
//	void f()
//	{
//		cout << "f()";
//	}
//public:
//	int b;
//private:
//	int c;
//
//};
//
//int main()
//{
//	test1 t1;
//	t1.a = 20;
//	class test2 t2;
//	t2.b = 10;
//	/*t2.f();
//	t2.c;*/
//	cout << t1.a;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class test1
//{
//public:
//	void swap(int a)
//	{
//		_a += a;
//	}
//private:
//	int _a = 10;
//	int _b = 20;
//};
//
////int a = 0;
////void swap(int& a, int& b)
////{
////	a = b;
////}
//
//int main()
//{
//	//int a = 5;
//	//int b = 10;
//	//test1 t1;
//	////swap(a, b);
//	////cout << a << b;//10 10
//	//t1.swap(a, b);
//	//cout << a << b;//5 5
//	test1* pt1 = nullptr;
//	pt1->swap(10);
//	return 0;
//}

//int main()
//{
//	int* p = nullptr;
//	*p = 0;//语法未错，运行错
//	return 0;
//}

//namespace t1
//{
//	int a = 10;
//	int b = 20;
//	int Add(int a, int b)
//	{
//		return a + b;
//	}
//}
//
//namespace t2
//{
//	int a = 1;
//	int b = 2;
//	int Add(int a, int b)
//	{
//		return (a + b) * 10;
//	}
//}
//
//using namespace t2; // 全展开 t2 
//int main()
//{
//	t1::a++; // 单独临时取出 t1 命名空间中的 a 拿来 ++
//	using t1::b; // 将 t1 命名空间中的 b 完全拿出来，后续可以直接使用 b，
//				//	 这里是在局部展开的，所以只能在局部用，在全局展开话就能全局用
//	b++; // 虽然上面 t2 全展开了，t2 中也有一个 b，但这里局部变量优先，所以 t1 中的 b++
//	a++; // t2 中 a++
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int arr[100] = { 0 };
//    for (int i = 0; i < 100; ++i)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int count = 0;
//    for (int i = 0; i < 100; ++i)
//    {
//        if (arr[i] != 2)
//            continue;
//        for (int j = i; j < 100; ++j)
//        {
//            if (arr[j] != 0)
//                continue;
//            for (int k = j; k < 100; ++k)
//            {
//                if (arr[k] != 2)
//                    continue;
//                for (int a = k; a < 100; ++a)
//                {
//                    if (arr[a] != 3)
//                        continue;
//                    for (int b = a; b < 100; ++b)//月
//                    {
//                        if (arr[b] > 1)
//                            continue;
//                        for (int c = b; c < 100; ++c)
//                        {
//                            if (((arr[b] == 1 && arr[c] > 2)) || (arr[b] == 0 && arr[c] == 0))
//                                continue;
//                            for (int d = c; d < 100; ++d)//日
//                            {
//                                if (arr[d] > 3)
//                                    continue;
//                                for (int e = d; e < 100; ++e)
//                                {
//                                    if (arr[d] == 0 && arr[e] == 0)
//                                        continue;
//                                    if (arr[d] * 10 + arr[e] > 31)
//                                        continue;
//                                    if ((arr[b] == 0 && arr[c] == 2) && (arr[d] * 10 + arr[e]) > 28)
//                                        continue;
//                                    if (((arr[a] * 10 + arr[b]) == 1 || (arr[a] * 10 + arr[b]) == 3 || (arr[a] * 10 + arr[b]) == 5 || (arr[a] * 10 + arr[b]) == 7 || (arr[a] * 10 + arr[b]) == 8
//                                        || (arr[a] * 10 + b) == 10 || (arr[a] * 10 + arr[b]) == 12) && (arr[d] * 10 + arr[e]) > 31)
//                                        continue;
//                                    if (((arr[a] * 10 + arr[b]) == 4 || (arr[a] * 10 + arr[b]) == 6 || (arr[a] * 10 + arr[b]) == 9 || (arr[a] * 10 + arr[b]) == 11) && (arr[d] * 10 + arr[e]) > 30)
//                                        continue;
//
//                                    ++count;
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//#include <iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    int min = 0;
//    int n = 0, k = 0;
//    scanf("%d%d", &n, &k);
//    int* arr = (int*)malloc(sizeof(int) * n);
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int size = n;
//    while (k--)
//    {
//        min = 0;
//        for (int i = 0; i < size; ++i)
//        {
//            if (arr[i] < arr[min])
//                min = i;
//        }
//        arr[min - 1] += arr[min];
//        arr[min + 1] += arr[min];
//        memmove(arr + min, arr + min + 1, sizeof(int)*(size - min - 1));
//        --size;
//    }
//    for (int i = 0; i < size; ++i)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include<iostream>
//using namespace std;
//class Data
//{
//public:
//	Data(int year = 2, int month = 2, int day = 2)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//
//private:public:
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//
//};
//int main() {
//	Data d1;
//	printf("%d", d1._year);
//	printf("%d", d1._month);
//	printf("%d", d1._day);
//
//}

#include<iostream>
using namespace std;

class Data
{
	int _year = 1;
	int _month = 1;
	int _day = 1;
};

Data Fun()
{
	Data d;
	return d;
}
int main()
{

	Data d1 = Fun();
	return 0;
}