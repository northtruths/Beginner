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
//	void swap(int a, int b)//�ֲ��������ȣ������Լ���ֵ���Լ���
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
//	const int& b = a;  //����Ȩ�ޱ���С�ˣ��������
//	int& c = b;  //Ȩ��ƽ�ƣ��������
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
//	*p = 0;//�﷨δ�����д�
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
//using namespace t2; // ȫչ�� t2 
//int main()
//{
//	t1::a++; // ������ʱȡ�� t1 �����ռ��е� a ���� ++
//	using t1::b; // �� t1 �����ռ��е� b ��ȫ�ó�������������ֱ��ʹ�� b��
//				//	 �������ھֲ�չ���ģ�����ֻ���ھֲ��ã���ȫ��չ��������ȫ����
//	b++; // ��Ȼ���� t2 ȫչ���ˣ�t2 ��Ҳ��һ�� b��������ֲ��������ȣ����� t1 �е� b++
//	a++; // t2 �� a++
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//    // ���ڴ��������Ĵ���
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
//                    for (int b = a; b < 100; ++b)//��
//                    {
//                        if (arr[b] > 1)
//                            continue;
//                        for (int c = b; c < 100; ++c)
//                        {
//                            if (((arr[b] == 1 && arr[c] > 2)) || (arr[b] == 0 && arr[c] == 0))
//                                continue;
//                            for (int d = c; d < 100; ++d)//��
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
//    // ���ڴ��������Ĵ���
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

//#include<iostream>
//using namespace std;
//
//class Data
//{
//public:
//	void Fun(int a, Data* this)
//	{
//		this->Fun(1);
//		Data d;
//	}
//private:
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};
//
//
//
//void f1(int i, int k);
//
//void f1(char i, char k);
//int main()
//{
//
//
//	Data d1 = Fun();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class D
//{
//public:
//
//private:
//};
//
//int main()
//{
//	D d1;
//	D d2;
//	d2 = d1;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//	/*friend ostream& operator<<(ostream out, const A& a);*/
//public:
//	A(int a = 0, int b = 0)
//		:_a(a)
//		,_b(b)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//	A& operator=(A& a)
//	{
//		_a = a._a;
//		_b = a._b;
//		cout << "A& operator=(A& a)" << endl;
//	}
//
//	void P1()
//	{
//		_t = 20;
//	}
//	static void P(A& a)
//	{
//		_t = 10;
//		a._a = 10;
//	}
//private:
//	int _a;
//	int _b;
//	static int _t;
//};
//
//int A::_t = 0;
//
////class stack
////{
////	//friend ostream& operator<<(ostream out, const A& a);
////public:
////	stack()
////	{
////		for (int i = 0; i < 5; ++i)
////		{
////			_arr[i] = 0;
////			_size = 0;
////		}
////	}
////	void push(const A& a)
////	{
////		_arr[_size] = a;
////		_size++;
////	}
//////private:
////	A _arr[5];
////	int _size = 0;
////};
//
////ostream& operator<<(ostream& out, const A& a)
////{
////	cout << a._a << " ";
////	return out;
////}
//
//class stack
//{
//public:
//
//private:
//	A a1 = { 5 , 5 };
//	
//};
//int main()
//{
//	//stack st;
//	//A a1(1);
//	//for (int i = 0; i < 5; ++i) {
//	//	st.push(i);
//
//	//}
//	//for (int i = 0; i < st._size; ++i)
//	//{
//	//	cout << st._arr[i];
//	//}
//
//	//A a1(1, 2);
//	//A a2 = { 3, 4 };
//	stack s1;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//		,_b(a)
//	{
//		cout << "A(int a, int b)" << endl;
//	}
//
//	A(const A& a)
//	{
//		_a = a._a;
//		_b = a._b;
//		cout << "A(const A& a)" << endl;
//	}
//	void P()
//	{
//		_B._a = 10;
//	}
//private:
//	int _a = 0;
//	int _b = 0;
//	static int _c;
//	B _B;
//};
//int _c = 0;
//
//
//class B
//{
//	friend class A;
//public:
//
//private:
//	int _a;
//	int _b;
//};
//int main()
//{
//	A a1;
//	A a2(1);
//	A a3 = a2;
//	A a4 = {3};
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	A(int a = 0, int b = 0)
//		:_a(0)
//		, _b(0)
//	{
//		cout << "A(int a, int b)" << endl;
//	}
//
//	A& operator=(const A& a)
//	{
//		_a = a._a;
//		_b = a._b;
//		cout << "A& operator=(A& a)" << endl;
//		return *this;
//	}
//	void f1(const A& a)
//	{
//
//	}
//
//private:
//	int _a = 0;
//	int _b = 0;
//};
//
//int main()
//{
//	A a1(1);
//	A a2(1, 2);
//	A a3 = 1;
//	A a4 = { 1,2 };
//	//A().f1({1,2});
//	return 0;
//}
//��c�Ľṹ�����ͣ�����ʼ�� const �ȣ������׶�->û�׶ˣ����Ƕ����ʵ��ʱҪ�ֶ���ʼ������

//#include <iostream>
//using namespace std;
//
//class Data
//{
//public:
//	Data(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	int GetDay(int year, int month) const
//	{
//		int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
//		{
//			return 28;
//		}
//		else
//		{
//			return arr[month];
//		}
//	}
//	Data& operator-=(int day)
//	{
//		_day -= day;
//		while (_day <= 0)
//		{
//			--_month;
//			if (_month == 0)
//			{
//				_month = 12;
//				--_year;
//			}
//			_day += GetDay(_year, _month);
//		}
//		return *this;
//	}
//	Data& operator+=(int day)
//	{
//		if (day < 0)
//		{
//			return *this -= -day;
//		}
//		_day += day;
//		while (_day > GetDay(_year, _month))
//		{
//			_day -= GetDay(_year, _month);
//			++_month;
//			if (_month == 13)
//			{
//				++_year;
//				_month = 1;
//			}
//		}
//		return *this;
//	}
//	Data& operator++()
//	{
//		*this += 1;
//		return *this;
//	}
//	bool operator>(const Data& d) const
//	{
//		if (!(_year > d._year))
//		{
//			if (_year == d._year)
//			{
//				if (!(_month > d._month))
//				{
//					if (_month == d._month)
//					{
//						return (_day - d._day) > 0;
//					}
//					return false;
//				}
//			}
//			return false;
//		}
//
//		return true;
//	}
//	bool operator==(const Data& d) const
//	{
//		return (_year == d._year
//			&& _month == d._month
//			&& _day == d._day);
//	}
//	bool operator>=(const Data& d) const
//	{
//		return *this > d || *this == d;
//	}
//	bool operator<(const Data& d) const
//	{
//		return !(*this >= d);
//	}
//	bool operator<=(const Data& d) const
//	{
//		return !(*this > d);
//	}
//	int operator-(const Data& d) const
//	{
//		Data max = *this;
//		Data min = d;
//		if (max < min)
//		{
//			max = d;
//			min = *this;
//		}
//		int ret1 = 0;//��������һ����������
//		int ret2 = 0;//С��
//		for (int i = 1; i < max._month; ++i)
//		{
//			ret1 += GetDay(max._year, i);
//		}
//		ret1 += max._day;
//		for (int i = 1; i < min._month; ++i)
//		{
//			ret2 += GetDay(min._year, i);
//		}
//		ret2 += min._day;
//		int ret3 = 0;
//		for (int i = min._year; i <= max._year; ++i)
//		{
//			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//				++ret3;
//		}
//		return abs((max._year - min._year) * 365 + (ret1 - ret2)) + ret3;
//	}
//private:
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};
//
//int main() {
//	int year1, month1, day1;
//	int year2, month2, day2;
//	scanf("%4d%2d%2d", &year1, &month1, &day1);
//	scanf("%4d%2d%2d", &year2, &month2, &day2);
//	Data d1(year1, month1, day1);
//	Data d2(year2, month2, day2);
//	printf("%d", d1 - d2 + 1);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class Data
//{
//public:
//    int GetDay(int year, int month)
//    {
//        int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//        if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
//        {
//            return 29;
//        }
//        else
//        {
//            return arr[month];
//        }
//    }
//
//    Data(int year = 1, int day = 0, int month = 1)
//        :_year(year)
//        , _day(day)
//        , _month(month)
//    {
//
//    }
//    Data& operator+=(int day)
//    {
//        _day += day;
//        while (_day > GetDay(_year, _month))
//        {
//            _day -= GetDay(_year, _month);
//            ++_month;
//            if (_month == 13)
//            {
//                ++_year;
//                _month = 1;
//            }
//        }
//        return *this;
//    }
//    //private:
//    int _year = 1;
//    int _month = 1;
//    int _day = 0;
//};
//int main()
//{
//    int n;
//    cin >> n;
//    int y, m, d, day;
//    Data d1;
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> y >> m >> d >> day;
//        d1 = { y, d, m };
//        d1 += day;
//        printf("%d-%02d-%02d\n", d1._year, d1._month, d1._day);
//    }
//}

//#include<iostream>
//using namespace std;
//
//template<typename T>
//class Data
//{
//public:
//	void Printf();
//private:
//};
//template <class T>
//void Data<T>::Printf()
//{
//
//}
//
//int main()
//{
//	return 0;
//}



//void Print()
//{
//	//...
//}
//
//template<class T>
//class Data
//{
//public:
//	void Print()
//	{
//		//...
//	}
//	Data(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	int* p = new int[10] {1, 2, 3, 4, 5};//ǰ�����ʼ��Ϊ12345
//	int* p1 = new int(10);//��ʼ��Ϊ10
//	Data<int>* pd1 = new Data<int>;
//	Data<int>* pd2 = new Data<int>();
//	Data<int>* pd3 = new Data<int>(2, 2, 2);
//	Data<int>* pd4 = new Data<int>[5]();
//	Data<int>* pd5 = new Data<int>[5] {5, 5, 5};
//	Data<int>* pd6 = new Data<int>[5] {{5, 5, 5}, { 5, 5, 5 }, { 5, 5, 5 }};
//
//	return 0;
//}

#include<iostream>
using namespace std;
class Data
{
public:

	Data(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	int* p = new int[10] {1, 2, 3, 4, 5};//ǰ�����ʼ��Ϊ12345
	int* p1 = new int(10);//��ʼ��Ϊ10
	Data* pd1 = new Data;//��Ĭ�Ϲ��죬Ĭ��ֵ
	Data* pd2 = new Data();//��Ĭ�Ϲ��죬Ĭ��ֵ
	Data* pd3 = new Data(2, 2, 2);//��Ĭ�Ϲ��죬����222
	Data* pd4 = new Data[5]();//ȫ����Ĭ�Ϲ��죬Ĭ��ֵ
	Data* pd5 = new Data[5] {5, 5, 5};//ǰ��������ÿ����һ������5������ġ�����ǰ����ʣ��δ���ε����ݶ�ΪĬ��ֵ
	Data* pd6 = new Data[5] { {5, 5, 5}, { 5, 5, 5 }, { 5, 5, 5 }};//ǰ�������󴫲�555��ʣ����������Ĭ�Ϲ���Ĭ��ֵ

	delete p;
	delete p1;
	delete pd1;
	delete pd4;
	return 0;
}