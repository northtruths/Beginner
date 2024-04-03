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

#include<iostream>

struct swapp
{
	void swap(int a, int b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	int a, b;
};
int main()
{
	swapp a;
	struct swapp b;
	return 0;
}