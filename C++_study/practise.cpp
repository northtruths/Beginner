#define _CRT_SECURE_NO_WARNINGS

#include"leetcode.h"

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
//用c的结构体类型，不初始化 const 等，看看弊端->没弊端，就是定义出实例时要手动初始化罢了

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
//		int ret1 = 0;//大年的最后一年多出的天数
//		int ret2 = 0;//小年
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
//	int* p = new int[10] {1, 2, 3, 4, 5};//前五个初始化为12345
//	int* p1 = new int(10);//初始化为10
//	Data<int>* pd1 = new Data<int>;
//	Data<int>* pd2 = new Data<int>();
//	Data<int>* pd3 = new Data<int>(2, 2, 2);
//	Data<int>* pd4 = new Data<int>[5]();
//	Data<int>* pd5 = new Data<int>[5] {5, 5, 5};
//	Data<int>* pd6 = new Data<int>[5] {{5, 5, 5}, { 5, 5, 5 }, { 5, 5, 5 }};
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Data
//{
//public:
//
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
//	int* p = new int[10] {1, 2, 3, 4, 5};//前五个初始化为12345
//	int* p1 = new int(10);//初始化为10
//	Data* pd1 = new Data;//调默认构造，默认值
//	Data* pd2 = new Data();//调默认构造，默认值
//	Data* pd3 = new Data(2, 2, 2);//调默认构造，传参222
//	Data* pd4 = new Data[5]();//全部调默认构造，默认值
//	Data* pd5 = new Data[5] {5, 5, 5};//前三个对象每个传一个参数5，其余的、包括前三个剩下未传参的数据都为默认值
//	Data* pd6 = new Data[5] { {5, 5, 5}, { 5, 5, 5 }, { 5, 5, 5 }};//前三个对象传参555，剩下两个对象默认构造默认值
//
//	delete p;
//	delete p1;
//	delete pd1;
//	delete pd4;
//	return 0;
//}

//#include<iostream>
//using namespace std;

//template<typename T>
//void Print(T& a)
//{
//    cout << a;
//}
////根据传的参数类型，编译器就会将 T 变为对应的类型然后生成一个函数
//int main()
//{
//    int a = 10;
//    Print(a);    //编译器自动推演 T 为 int 类型
//}
//
//template<typename T>
//void Print(int a)
//{
//    T b;    //类型为 T 的变量
//    while (a--)    //循环 a 次
//    {
//        cout << b;    //其实这里语法有点错误，因为 T 类型可能不能直接输出的，不过为了方便理解就这样，理解即可
//    }
//}
////这里传参是传给 int 类型的形参 a，没有任何 T 接受了传参，编译器无法推演
//int main()
//{
//    int a = 10;
//    Print<int>(10);//其中<int>就是现实实例化，直接指定 T 为 int类型
//    //不过放在上面代码上，因为 b 未初始化，所以打印十遍随机值
//    Print<int>(2.0);
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//void Print(int a, int b)
//{
//	cout << a << endl << b << endl;
//}
//template<typename T>
//void print(T& a, T& b)
//{
//	cout << a << endl << b << endl;
//}
//template <typename T1, typename T2>
//void Print(T1& a, T2& b)
//{
//	cout << a << endl << b << endl;
//}
//
//
//int main()
//{
//	int x = 10;
//	int x1 = 20;
//	double y = 1.0;
//	double y1 = 2.0;
//	Print(x, x1);//匹配俩int，调用现成的“void Print(int a, int b)”
//	Print(y, y1);//匹配俩double，调用“void print(T& a, T& b)”，形参是同类型的，推演出一个就相当于推演所有的了，更省事
//	Print(x, y);//匹配一个int一个double，调用“void Print(T1& a, T2& b)”，因为两个实参类型不同，前两个函数或函数模板的形参都不能直接匹配
//	return 0;
//}


//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param root TreeNode类
//     * @return int整型
//     */
//    bool isleave(TreeNode* root)
//    {
//        if (root->left == NULL && root->right == NULL)
//            return true;
//        else
//            return false;
//    }
//    TreeNode* Find(TreeNode* root)
//    {
//        if (!isleave(root) &&
//            ((root->left->left == NULL && root->left->right == NULL)
//                || (root->right->left == NULL && root->right->right == NULL))
//            )
//        {
//            _arr[_n] = root;
//            ++_n;
//        }
//        Find(root->left);
//        Find(root->right);
//        return NULL;
//    }
//    int sumOfLeftLeaves(TreeNode* root) {
//        // write code here
//        //1.找到叶子结点的父节点，2.判断是否有右结点
//        int sum = 0;
//        Find(root);
//        for (int i = 0; i < _n; ++i)
//        {
//            if (_arr[i]->left != NULL)
//            {
//                sum += _arr[i]->left->val;
//            }
//        }
//        return sum;
//    }
//    int _n = 0;
//    TreeNode* _arr[1000] = { NULL };
//};


//#include<iostream>
//using namespace std;
//
//int main(int argc, char* argv[])
//
//{
//
//	string a = "hello world";
//
//	string b = a;
//	printf("%s\n", a.c_str());
//	printf("%s\n", b.c_str());
//	if (a.c_str() == b.c_str())
//
//	{
//
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	string c = b;
//
//	c = "";
//	printf("%s\n", a.c_str());
//	printf("%s\n", b.c_str());
//	if (a.c_str() == b.c_str())
//
//	{
//
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	a = "";
//	printf("%s\n", a.c_str());
//	printf("%s\n", b.c_str());
//	if (a.c_str() == b.c_str())
//
//	{
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	return 0;
//
//}

//#include<iostream>
//using namespace std;
//int main(int argc, char* argv[])
//
//{
//
//	string strText = "How are you?";
//
//	string strSeparator = " ";
//
//	string strResult;
//
//	int size_pos = 0;
//
//	int size_prev_pos = 0;
//
//	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
//
//	{
//
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//
//		cout << strResult << " ";
//
//		size_prev_pos = ++size_pos;
//
//	}
//
//	if (size_prev_pos != strText.size())
//
//	{
//
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//
//		cout << strResult << " ";
//
//	}
//
//	cout << endl;
//
//	return 0;
//
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char a[] = "1111";
//	char b[] = "666";
//	printf("%d", strcmp(a, b));
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//
//
//    int myAtoi(string str) {
//        if (str.empty())
//        {
//            return 0;
//        }
//        //1.读取数字字符部分
//        //2.判断大小是否在整数范围内
//        //3.转换
//        string temp;
//        int num = 0;//记录数字前的非数字字符个数
//        int begini = 0;
//        string::iterator begin = str.begin();
//        while (begin != str.end())
//        {
//            if (48 <= *begin && *begin <= 57)
//            {
//                break;
//            }
//            if (*begin != ' ' && *begin != '-' && *begin != '+')//如果数字前不是这三个就直接返回
//            {
//                return 0;
//            }
//            else if (*begin != ' ')
//            {
//                ++num;//记录 +- 号的个数，多于一个也是
//            }
//            ++begini;
//            ++begin;
//        }
//        if (num > 1)
//            return 0;
//        if (begini != 0 && str[begini - 1] == ' ' && num == 1)
//            return 0;
//        int endi = begini;
//        string::iterator end = str.begin() += begini;
//        while (end != str.end())
//        {
//            if (!(48 <= *end && *end <= 57))
//            {
//                break;
//            }
//            ++endi;
//            ++end;
//        }
//        --endi;
//        int flag = 1;
//        if (begini != 0 && str[begini - 1] == '-')
//        {
//            flag = -1;
//        }
//        //printf("%d", INT_MAX);//2147483647:10
//        while (str[begini] == '0' && begini != endi)
//        {
//            ++begini;
//        }
//        temp = str.substr(begini, endi - begini + 1);
//        if (temp.size() > 10)
//        {
//            if (flag == 1)
//                return pow(2, 31) * flag - 1;
//            else
//                return pow(2, 31) * flag;
//        }
//        char max[] = "2147483647";
//        if (temp.size() == 10)
//        {
//            if (strcmp(temp.c_str(), max) > 0)
//            {
//                if (flag == 1)
//                    return pow(2, 31) * flag - 1;
//                else
//                    return pow(2, 31) * flag;
//            }
//        }
//        string::reverse_iterator tbegin = temp.rbegin();
//        string::reverse_iterator tend = temp.rend();
//        long index = 1;
//        int ret = 0;
//        while (tbegin != tend)
//        {
//            ret += (*tbegin - 48) * index;
//            index *= 10;
//            ++tbegin;
//        }
//        return ret * flag;
//    }
//};
//
//int main()
//{
//
//    Solution a;
//    //printf("%d\n", a.myAtoi("   -42"));
//    printf("%d\n", a.myAtoi("+-2"));
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        //1.迭代器从俩字符串末尾开始加，逢十进一
//        //2.若一边走完则使后续都加 0
//        string::reverse_iterator begin1 = num1.rbegin();
//        string::reverse_iterator begin2 = num2.rbegin();
//        int n1 = 0, n2 = 0;
//        int next = 0;
//        string ret;
//        while (begin1 != num1.rend() && begin2 != num2.rend())
//        {
//            n1 = *begin1 - 48;
//            n2 = *begin2 - 48;
//            ret += ((n1 + n2 + next) % 10) + '0';
//            next = (n1 + n2 + next) / 10;
//            ++begin1;
//            ++begin2;
//        }
//        while (begin1 != num1.rend())
//        {
//            n1 = *begin1 - 48;
//            ret += (n1 + next) % 10 + '0';
//            next = (n1 + next) / 10;
//            ++begin1;
//        }
//        while (begin2 != num2.rend())
//        {
//            n2 = *begin2 - 48;
//            ret += (n2 + next) % 10 + '0';
//            next = (n2 + next) / 10;
//            ++begin2;
//        }
//
//        if (next != 0)
//        {
//            ret += next + '0';
//        }
//
//        // string rret;
//        // string::reverse_iterator ret_begin = ret.rbegin();
//        // while (ret_begin != ret.rend())
//        // {
//        //     rret += *ret_begin;
//        //     ++ret_begin;
//        // }
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution a;
//    printf("%s", (a.addStrings("11", "123")));
//    return 0;
//}

//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    bool isalp(char a)
//    {
//        if ((65 <= a && a <= 90) || (97 <= a && a <= 122))
//            return true;
//        else
//            return false;
//    }
//    bool isPalindrome(string s) {
//        string ret;
//        for (int i = 0; i < s.size(); ++i)
//        {
//            if (isalp(s[i]))
//            {
//                ret += s[i];//取出字母部分
//            }
//        }
//        for (int i = 0; i < ret.size(); ++i)
//        {
//            if (ret[i] < 97)
//            {
//                ret[i] += 32;//大写转小写
//            }
//        }
//        int b = 0;
//        int e = ret.size() - 1;
//        while (b < e)
//        {
//            if (ret[b] != ret[e])
//                return false;
//            ++b;
//            --e;
//        }
//        return true;
//    }
//};
//int main()
//{
//    Solution a;
//    if (a.isPalindrome("0P"))
//        printf("T");
//    else
//        printf("F");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        //1.迭代器从俩字符串末尾开始加，逢十进一
//        //2.若一边走完则使后续都加 0
//        string::reverse_iterator begin1 = num1.rbegin();
//        string::reverse_iterator begin2 = num2.rbegin();
//        int n1 = 0, n2 = 0;
//        int next = 0;
//        string ret;
//        while (begin1 != num1.rend() && begin2 != num2.rend())
//        {
//            n1 = *begin1 - 48;
//            n2 = *begin2 - 48;
//            ret += ((n1 + n2 + next) % 10) + '0';
//            next = (n1 + n2 + next) / 10;
//            ++begin1;
//            ++begin2;
//        }
//        while (begin1 != num1.rend())
//        {
//            n1 = *begin1 - 48;
//            ret += (n1 + next) % 10 + '0';
//            next = (n1 + next) / 10;
//            ++begin1;
//        }
//        while (begin2 != num2.rend())
//        {
//            n2 = *begin2 - 48;
//            ret += (n2 + next) % 10 + '0';
//            next = (n2 + next) / 10;
//            ++begin2;
//        }
//
//        if (next != 0)
//        {
//            ret += next + '0';
//        }
//
//        // string rret;
//        // string::reverse_iterator ret_begin = ret.rbegin();
//        // while (ret_begin != ret.rend())
//        // {
//        //     rret += *ret_begin;
//        //     ++ret_begin;
//        // }
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//
//    string multiply(string num1, string num2) {
//        //1.用字符串相加一样的方法，不过是每位相乘再加起来
//        if (num1[0] == '0' || num2[0] == '0')
//        {
//            return "0";
//        }
//        long add = 0;//进位
//        long n1 = 0;//num1 的每位
//        long n2 = 0;//num2 的每位
//        string::reverse_iterator rbegin1 = num1.rbegin();
//        string::reverse_iterator rbegin2 = num2.rbegin();
//        string ret;//返回的字符串
//        string temp;//每次临时算出的字符串
//        long index = 0;//补零的次数
//        while (rbegin2 != num2.rend())
//        {
//            temp.clear();
//            add = 0;
//            rbegin1 = num1.rbegin();
//            while (rbegin1 != num1.rend())
//            {
//                n1 = *rbegin1 - 48;
//                n2 = *rbegin2 - 48;
//                temp += (n1 * n2 + add) % 10 + '0';
//                add = (n1 * n2 + add) / 10;
//                ++rbegin1;
//            }
//            if (add != 0 && add < 10)
//            {
//                temp += add + '0';
//            }
//            else if (add != 0 && add > 10)
//            {
//                while (add)
//                {
//                    temp += add % 10 + '0';
//                    add /= 10;
//                }
//            }
//            reverse(temp.begin(), temp.end());
//            for (int i = 0; i < index; ++i)
//            {
//                temp += "0";
//            }
//            ret = addStrings(ret, temp);
//            ++rbegin2;
//            ++index;
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution a;
//    a.multiply("123", "456");
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main(int argc, char* argv[])
//
//{
//
//	string strText = "How are you?";
//
//	string strSeparator = " ";
//
//	string strResult;
//
//	int size_pos = 0;
//
//	int size_prev_pos = 0;
//
//	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
//
//	{
//
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//
//		cout << strResult << " ";
//
//		size_prev_pos = ++size_pos;
//
//	}
//
//	if (size_prev_pos != strText.size())
//
//	{
//
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//
//		cout << strResult << " ";
//
//	}
//
//	cout << endl;
//
//	return 0;
//
//}

//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    string reverseStr(string s, int k) {
//        int pre = 0, post = k - 1;
//        while (post < s.size())
//        {
//            reverse(s.begin() + pre, s.begin() + post + 1);
//            pre += 2 * k;
//            post += 2 * k;
//        }
//        if (pre < s.size())
//        {
//            reverse(s.begin() + pre, s.end());
//        }
//        return s;
//    }
//    Solution(const char* s)
//    {
//        _s = s;
//    }
//    string _s;
//};
//int main()
//{
//    Solution t1("abcdefg");
//    t1.reverseStr(t1._s, 2);
//    return 0;
//}

//#include<string>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	string t1 = "zbdcajrnz";
//	vector<int> v1 = { 4, 3, 6, 1, 2, 6, 7, 6, 8 };
//	sort(v1.rbegin(), v1.rend());
//
//	return 0;
//}

//#include<iostream>
//#include<cctype>
//#include<vector>
//#include<algorithm>
//#include<list>
//using namespace std;
//
//int main()
//{
//	//char t1 = 'a';
//	//char t2 = 'A';
//	//char t3 = '1';
//	//printf("%c", tolower(t1));
//	//printf("%c", tolower(t2));
//	//printf("%c", tolower(t3));
//	//vector<int> t1 = { 1, 2, 3 };//全排列
//	//vector<int> t2 = { 4, 4, 4 };//全排列
//
//	//do
//	//{
//	//	int flag = 0;
//	//	for (auto e : t1)
//	//	{
//	//		cout << e << " ";
//	//		++flag;
//	//		if (flag == t1.size())
//	//		{
//	//			cout << endl;
//	//		}
//	//	}
//	//} while (next_permutation(t1.begin(), t1.end()));
//	//swap(t1, t2);
//
//	list<int> l1 = { 0, 0, 0, 0};
//	list<int>::iterator i1 = l1.begin();
//	l1.insert(i1++, 2);//00200
//	list<int>::iterator i2 = l1.end();
//	l1.insert(i2--, 2);//002200
//
//	return 0;
//}

//#include<iostream>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//int main()//优先队列
//{
//	priority_queue<int> q1;
//	q1.push(3);
//	q1.push(1);
//	q1.push(5);
//	q1.push(4);
//	q1.push(0);
//	priority_queue <int, vector<int>, greater<int>> q2;
//	q2.push(3);
//	q2.push(1);
//	q2.push(5);
//	q2.push(4);
//	q2.push(0);
//	
//	return 0;
//}

//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<math.h>
//using namespace std;
//int main()//思路是错的，因为房子不能动
//{
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        int n = 0, k = 0;
//        cin >> n >> k;
//        vector<int> v;
//        int e = 0;
//        for(int i = 0 ; i < n ; ++i)
//        {
//            cin >> e;
//            v.push_back(e);
//        }
//        sort(v.begin(), v.end());//输入到排序
//        int cur = 0, max_count = 0, count = 0;//当前计数的数字，最大计数，当前计数
//        for (auto m : v)
//        {
//            if (m == cur)
//            {
//                ++count;//当前计数
//            }
//            if (m != cur)
//            {
//                cur = m;//准备开始计数下一个数字
//                if (count > max_count)
//                {
//                    max_count = count;//记录最大计数
//                }
//                count = 1;
//            }
//        }
//        cout << ceil((n - max_count) / (float)k) << endl;//把所有其他的都涂为计数最多的颜色，向上取整
//
//
//    }
//    // 请在此输入您的代码
//    return 0;
//}
//1
//20 3
//11 2 55 1 4 1 22 5 1 33 2 1 4 88 55 22 6 11 2 1 2

//#include <iostream>
//#include <vector>
//#include <unordered_set>
//using namespace std;
//int main() {
//    int t; cin >> t;
//    for (int i = 0, n, k; i < t; i++) {
//        cin >> n >> k;
//        vector<int> arr(n);
//        unordered_set<int> s;
//        for (int j = 0; j < n; j++) {
//            cin >> arr[j];
//            s.insert(arr[j]);  //一个集合，防止重复记录
//        }
//        int ans = INT_MAX;
//        for (auto& x : s) {
//            int cnt = 0;
//            for (int j = 0; j < n; j++) {
//                if (arr[j] == x) continue;  //如果当前颜色和我要涂的颜色一样，那么跳过
//                cnt += 1;
//                j += k - 1;   //否则将k区间内的颜色全部涂该种颜色，由于上面有j++,这里要-1
//            }
//            ans = min(ans, cnt);  //记录最小的就是答案
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	std::vector<int> v1 = { 1, 1, 1, 2, 3, 4 ,5, 5 };
//	//std::unique(v1.begin(), v1.end());
//	vector<int>::iterator begin = v1.begin() += 3;
//	cout << *begin;
//	cout << *begin << endl << *(++begin) << endl;
//	while (1)
//	{
//		int a = 0;
//		++a;
//		++a;
//	}
//	return 0;
//}

//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<math.h>
////#include<limits.h>
//using namespace std;
//int main()
//{
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        int n = 0, k = 0;
//        cin >> n >> k;
//        vector<int> v1;
//        int e = 0;
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> e;
//            v1.push_back(e);
//        }
//        vector<int> v2(v1);
//        sort(v2.begin(), v2.end());//输入到排序
//
//        vector<int>::iterator begin2 = v2.begin();
//        vector<int>::iterator end2 = v2.end();
//        end2 = unique(begin2, end2);
//        vector<int> v3;
//        while (begin2 != end2)//每个颜色（数字）对应的映像
//        {
//            v3.push_back(*begin2);
//            ++begin2;
//        }
//
//        vector<int>::iterator begin3 = v3.begin();
//        vector<int>::iterator end3 = v3.end();
//
//        int cur = 0, min_count = INT_MAX, count = 0;
//        while (begin3 != end3)//每种颜色
//        {
//            count = 0;
//            cur = *begin3;
//            v2 = v1;
//            begin2 = v2.begin();
//            end2 = v2.end();
//            while (begin2 != end2)
//            {
//                if (*begin2 == cur)
//                {
//                    ++begin2;
//                    continue;
//                }
//                //此时跟要涂的颜色不一样
//                int flag = 0;
//                for (int i = 0; i < k; ++i)
//                {
//                    if (begin2 + i == end2)
//                    {
//                        flag = 1;//标记到末尾了
//                        break;
//                    }
//                    *(begin2 + i) = cur;
//                }
//                ++count;
//                if(flag)
//                {
//                    begin2 = end2;
//                }
//                else
//                {
//                    begin2 += k;
//                }
//            }
//            if (count < min_count)
//            {
//                min_count = count;
//            }
//            ++begin3;//下种颜色
//        }
//        cout << min_count << endl;
//    }
//    // 请在此输入您的代码
//    return 0;
//}

//#include <iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        int n = 0;
//        cin >> n;
//        vector<int> v1;
//        int e = 0;
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> e;
//            v1.push_back(e);
//        }
//
//        int count = 0;
//        vector<int>::iterator begin1 = v1.begin();
//        //统计负数 0 和正数 的个数，与和
//        int arr[4] = { 0 };
//        for (auto& i : v1)
//        {
//            if (i < 0)
//                ++arr[0];
//            else if (i == 0)
//                ++arr[1];
//            else
//                ++arr[2];
//            arr[3] += i;
//        }
//        //使arr满足负数个数为偶数，没有0，和为正则达成条件
//        if (arr[0] % 2 == 1 && arr[1] > 0)
//        {
//            arr[0] += 1;
//            arr[1] -= 1;
//            arr[3] -= 1;
//        }
//        cout << arr[3] + 1 - arr[1] << endl;
//    }
//    cout << 666 << endl;
//    return 0;
//}

//#include  <iostream>
//#include  <string>
//#include  <vector>
//#include<utility>
//using namespace std;
//int main()
//{
//    //遍历两边数组，第一遍找能互换的，第二边强行换
//    int n = 0;
//    int count = 0;
//    cin >> n;
//    vector<char> v1;
//    vector<pair<char, int>> v2;//第二个标记是否有配对
//    for (int i = 0; i < n; ++i)
//    {
//        char a = 0;
//        cin >> a;
//        v1.push_back(a);
//    }
//    for (int i = 0; i < n; ++i)
//    {
//        char a = 0;
//        cin >> a;
//        v2.push_back(make_pair(a, 0));
//    }
//    int arr[4] = { 0 };//以此记录 A T C G 待配对的数 ascll 65 84 67 71
//    vector<pair<int, int>> v3;//待交换的下标
//    for (int i = 0; i < n; ++i)
//    {
//        if (v1[i] == v2[i].first && v2[i].second == 0)//找到可以匹配，记录个数，并放进 v3 去等待匹配或匹配已有的
//        {
//            if (v1[i] == 'A' && arr[1] != 0)
//            {
//                for (auto& e : v3)
//                {
//                    if (v1[e.first] == 'T')
//                    {
//                        //匹配到了
//                        --arr[1];
//                        v2[i].second = 1;
//                        v2[e.first].second = 1;
//                        //交换
//                        char temp = v2[i].first;
//                        v2[i].first = v2[e.first].first;
//                        v2[e.first].first = temp;
//                        ++count;
//                        break;
//                    }
//                }
//            }
//            else if (v1[i] == 'T' && arr[0] != 0)
//            {
//                for (auto& e : v3)
//                {
//                    if (v1[e.first] == 'A')
//                    {
//                        //匹配到了
//                        --arr[0];
//                        v2[i].second = 1;
//                        v2[e.first].second = 1;
//                        //交换
//                        char temp = v2[i].first;
//                        v2[i].first = v2[e.first].first;
//                        v2[e.first].first = temp;
//                        ++count;
//                        break;
//                    }
//                }
//            }
//            else if (v1[i] == 'C' && arr[3] != 0)
//            {
//                for (auto& e : v3)
//                {
//                    if (v1[e.first] == 'G')
//                    {
//                        //匹配到了
//                        --arr[3];
//                        v2[i].second = 1;
//                        v2[e.first].second = 1;
//                        //交换
//                        char temp = v2[i].first;
//                        v2[i].first = v2[e.first].first;
//                        v2[e.first].first = temp;
//                        ++count;
//                        break;
//                    }
//                }
//            }
//            else if (v1[i] == 'G' && arr[2] != 0)
//            {
//                for (auto& e : v3)
//                {
//                    if (v1[e.first] == 'C')
//                    {
//                        //匹配到了
//                        --arr[2];
//                        v2[i].second = 1;
//                        v2[e.first].second = 1;
//                        //交换
//                        char temp = v2[i].first;
//                        v2[i].first = v2[e.first].first;
//                        v2[e.first].first = temp;
//                        ++count;
//                        break;
//                    }
//                }
//            }
//            else
//            {
//                v3.push_back(make_pair(i, NULL));
//                if (v1[i] == 'A')
//                    arr[0]++;
//                if (v1[i] == 'T')
//                    arr[1]++;
//                if (v1[i] == 'C')
//                    arr[2]++;
//                if (v1[i] == 'G')
//                    arr[3]++;
//               
//            }
//        }
//    }
//
//    for (int i = 0; i < n; ++i)
//    {
//        if (!(
//            (v1[i] == 'A' && v2[i].first == 'T')
//            || (v1[i] == 'T' && v2[i].first == 'A')
//            || (v1[i] == 'C' && v2[i].first == 'G')
//            || (v1[i] == 'G' && v2[i].first == 'C')
//            ))
//        {
//            ++count;
//        }
//    }
//    cout << count << endl;
//    return 0;
//}

//#include <iostream>
//#include<math.h>
//#include<stdbool.h>
//using namespace std;
//
//bool my_is_num(int n)
//{
//    for (int i = 2; i <= (int)sqrt(n); ++i)
//    {
//        if (n % i == 0)
//            return false;
//    }
//    return true;
//}
//int main()
//{
//    int count = 0;
//    int m = 0;
//    for (int i = 6; i <= 2198; ++i)
//    {
//        for (int j = i + 1; j <= 4830459; ++j)
//        {
//            if (!(my_is_num(i) && my_is_num(j)))
//                continue;
//            if (i == j)
//                continue;
//            m = i * i * j * j;
//            if (2333 <= m && m <= 23333333333333)
//            {
//                ++count;
//            }
//        }
//    }
//    cout << count;
//    return 0;
//}

//#include <iostream>
//#include<algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//    int ans = 0;
//    int n = 0;
//    cin >> n;
//    int count1 = 0;//记录匹配的 id 数
//    int count2 = 0;//记录除了最开始一对，多余的重复id
//    vector<int> v1;
//    for (int i = 0; i < n; ++i)
//    {
//        int a = 0;
//        cin >> a;
//        v1.push_back(a);
//    }
//    sort(v1.begin(), v1.end());
//    vector<int> v2;//记录已经有相同的id
//    //vector::iterator end2 = v2.end();
//    for (int i = 0; i < v1.size() - 1; ++i)
//    {
//        int flag = 0;
//        if (v1[i] == v1[i + 1])//若前后相等，检查是否是多余重复 id
//        {
//            for (int e : v2)
//            {
//                if (v1[i] == e)
//                {
//                    ++count2;
//                    flag = 1;
//                    break;
//                }
//            }
//        }
//        else
//        {
//            for (int e : v2)//前后不等，检查是单独的id 还是多余重复 id
//            {
//                if (v1[i] == e)
//                {
//                    ++count2;
//                    break;
//                }
//            }
//            continue;
//        }
//        if (flag == 1) continue;
//
//        v2.push_back(v1[i]);//匹配的 id
//        count1 += 2;
//        //end = unique(v2.begin(), end);
//        v1[i] = 0;
//        v1[i + 1] = 0;
//    }
//    for(int i = v2.size() - 1; i >= 0; --i)//前面是没有检查最后一个id的，这里检查
//    {
//        if (v1[v1.size() - 1] == v2[i])
//        {
//            ++count2;
//            break;
//        }
//    }
//    int count3 = n - count1 - count2;//单独没有重复的 id
//    if (count3 == count2)
//    {
//        cout << count3;
//    }
//    else if (count3 < count2)
//    {
//        cout << count3 + (count2 - count3) / 2;
//    }
//    else
//    {
//        cout << count2 + (count3 - count2) / 2;
//    }
//    return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    char a = 0, b = 0, c = 0, d = 0;
//    long long count = 0;
//    string s;
//    for (int i = 1; i <= 2023; ++i)
//    {
//        int a = i;
//        int flag = 0;
//        while (a)
//        {
//            if (a % 10 == 2 || a % 10 == 0 || a % 10 == 3)
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if(flag)
//        {
//            s += to_string(i);
//        }
//    }
//    for (int i = 0; i < s.size() - 3; ++i)
//    {
//        a = s[i];
//        if (a == '2')
//        {
//            for (int j = i + 1; j < s.size() - 2; ++j)
//            {
//                b = s[j];
//                if (b == '0')
//                {
//                    for (int k = j + 1; k < s.size() - 1; ++k)
//                    {
//                        c = s[k];
//                        if (c == '2')
//                        {
//                            for (int m = k + 1; m < s.size(); ++m)
//                            {
//                                d = s[m];
//                                if (d == '3')
//                                {
//                                    ++count;
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    printf("%lld", count);
//    return 0;
//}

//#include <iostream>
//#include<string>
//using namespace std;
//int main()
//{
//    int N = 0;
//    cin >> N;
//    string s1, s2;
//    cin >> s1 >> s2;
//    for (auto& e : s2)
//    {
//        if (e == 'A')  e = 'T';
//        else if (e == 'T')  e = 'A';
//        else if (e == 'C')  e = 'G';
//        else e = 'C';
//    }
//    int n = 0;//记录 A-T 的对数
//    int m = 0;//记录 C-G 的对数
//    int s = 0;//记录碱基相同的数量
//    for (int i = 0; i < N; ++i)
//    {
//        if ((s1[i] == 'A' && s2[i] == 'T') || (s1[i] == 'T' && s2[i] == 'A'))
//        {
//            ++n;
//        }
//        if ((s1[i] == 'C' && s2[i] == 'G') || (s1[i] == 'G' && s2[i] == 'C'))
//        {
//            ++m;
//        }
//        if (s1[i] == s2[i])
//        {
//            ++s;
//        }
//    }
//    int res = (m / 2 + m % 2) + (n / 2 + n % 2) + (N - m - n - s);
//    cout << res << endl;
//    return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<char> v;
//	string s;
//	cin >> s;
//	//cin >> v;没有
//	bool a = 0;
//	return 0;
//}

//#include <iostream>
//#include<string>
//#include<vector>
//#include<utility>
//using namespace std;
//bool is_match(char& a, char& b)
//{
//    if ((a == 'A' && b == 'T') || (a == 'T' && b == 'A')
//        || (a == 'C' && b == 'G') || (a == 'G' && b == 'C'))
//        return true;
//    else return false;
//}
//
//int main()
//{
//    int N = 0;
//    cin >> N;
//    vector<char> s1;
//    vector<pair<char, int>> s2;
//    for (int i = 0; i < N; ++i)
//    {
//        char in = 0;
//        cin >> in;
//        s1.push_back(in);
//    }
//    for (int i = 0; i < N; ++i)
//    {
//        char in = 0;
//        cin >> in;
//        s2.push_back(make_pair(in, 0));
//    }
//    int n = 0;//原本就匹配
//    int m = 0;//交换次数，乘二就是交换的数量了
//    // N - 2*m - n 就是需强换的个数
//    for (int i = 0; i < N; ++i)
//    {
//        if (((s1[i] == 'A' && s2[i].first == 'T') || (s1[i] == 'T' && s2[i].first == 'A')
//            || (s1[i] == 'C' && s2[i].first == 'G') || (s1[i] == 'G' && s2[i].first == 'C'))
//            && s2[i].second == 0)
//        {
//            ++n;
//            continue;
//        }
//
//        for (int j = i + 1; j < N; ++j)
//        {
//            if (s2[i].second == 0 && s2[j].second == 0 && (is_match(s1[i], s2[j].first) && is_match(s2[i].first, s1[j])))
//            {
//                char temp = s2[i].first;
//                s2[i].first = s2[j].first;
//                s2[j].first = temp;
//                s2[i].second = 1;
//                s2[j].second = 1;
//                ++m;
//                break;
//            }
//        }
//    }
//
//    int res = m + (N - 2 * m - n);
//    cout << res << endl;
//}

//#include <iostream>
//#include<vector>
//#include<math.h>
//using namespace std;
//int main()
//{
//    int n = 0, k = 0;
//    cin >> n >> k;
//
//    vector<int> arr(0);
//    for (int i = 0; i < n; ++i)
//    {
//        auto e = 0;
//        cin >> e;
//        arr.push_back(e);
//    }
//    if (k == 1)
//    {
//        long long sum = 0;
//        for (int i = 0; i < n; ++i)
//        {
//            sum += arr[i];
//        }
//        if (sum % 2 == 0)
//        {
//            cout << "Bob" << endl;
//            return 0;
//        }
//        else
//        {
//            cout << "Alice" << endl;
//            return 0;
//        }
//    }
//    int W = -1;//1 是 alice，-1是 bob
//    for (int i = 0; i < n; ++i)
//    {
//        int m = 0;
//        while (pow(k, m) <= arr[i])
//        {
//            ++m;
//        }
//        arr[i] -= pow(k, m - 1);
//        if (arr[i] > 0) --i;
//        W *= -1;
//    }
//    if (W == 1)
//        cout << "Alice" << endl;
//    else
//        cout << "Bob" << endl;
//    return 0;
//}

//#include <iostream>
//#include<vector>
//#include<utility>
//#include<math.h>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int n = 0;
//    cin >> n;
//    long long max = 0;
//    vector<pair<long long, long long>> v;
//    for (int i = 0; i < n; ++i)
//    {
//        long long w = 0, p = 0;
//        cin >> w >> p;
//        if (max < p) max = p;
//        v.push_back(make_pair(p, w));
//    }
//    sort(v.begin(), v.end());
//    for (int i = 0; i < v.size(); ++i)
//    {
//        while (i + 1 < v.size() && v[i].first == v[i + 1].first)
//        {
//            v[i].second += v[i + 1].second;
//            v.erase(v.begin() + (i + 1));
//        }
//    }
//    unsigned long long sum = 0;
//    unsigned long long ret = -1;
//    for (int i = 1; i < v.size(); ++i)
//    {
//        for (auto e : v)
//        {
//            sum += e.second * (abs(e.first - i));
//        }
//        if (ret > sum)
//            ret = sum;
//    }
//    cout << ret << endl;
//    return 0;
//}

//#include <iostream>
//#include<vector>
//#include<utility>
//#include<math.h>
//#include<algorithm>
//#include<limits.h>
//using namespace std;
//int main()
//{
//    int n = 0;
//    cin >> n;
//    long long max = 0;//最大位置
//    vector<pair<long long, long long>> v;
//    for (int i = 0; i < n; ++i)
//    {
//        long long w = 0;
//        long long p = 0;
//        cin >> w >> p;
//        if (max < p) max = p;
//        v.push_back(make_pair(p, w));
//    }
//    sort(v.begin(), v.end());
//    //for (int i = 0; i < v.size(); ++i)
//    //{
//    //    while (i + 1 < v.size() && v[i].first == v[i + 1].first)
//    //    {
//    //        v[i].second += v[i + 1].second;
//    //        v.erase(v.begin() + (i + 1));
//    //    }
//    //}
//    //相当于将石头分两份，位置的左边一份右边一份,左边和右边移到中间这个石头的费用的最小值就为答案
//    long long left[3] = { 0 };//左边 i-1 个石头移动到第 i 这个石头 的总消耗
//    long long right[3] = { 0 };
//    long long w = 0;
//    for (int i = 1; i <  n; ++i)
//    {
//        int s = v[i].first - v[i - 1].first;//这颗石头到上颗的距离
//        left[i] = (left[i - 1] + v[i - 1].second) * s;
//    }
//    for (int i = n - 2; i >= 0; --i)
//    {
//        int s = v[i + 1].first - v[i].first;
//        right[i] = (right[i + 1] + v[i + 1].second) * s;
//    }
//    long long res = LLONG_MAX;
//    for (int i = 0; i < n; ++i)
//    {
//        res = min(res, left[i] + right[i]);
//    }
//    cout << res << endl;
//    return 0;
//}

//#include <iostream>
//#include<vector>
//#include<utility>
//#include<math.h>
//#include<algorithm>
//#include<limits.h>
//using namespace std;
//int main()
//{
//    int n = 0;
//    cin >> n;
//    vector<pair<long long, long long>> v;
//    for (int i = 0; i < n; ++i)
//    {
//        long long w = 0;
//        long long p = 0;
//        cin >> w >> p;
//        v.push_back(make_pair(p, w));
//    }
//    sort(v.begin(), v.end());
//    //相当于将石头分两份，位置的左边一份右边一份,左边和右边移到中间这个石头的费用的最小值就为答案
//    long long left[3] = { 0 };//左边 i-1 个石头移动到第 i 这个石头 的总消耗
//    long long right[3] = { 0 };
//    long long w = 0;
//    for (int i = 1; i < n; ++i)
//    {
//        int s = v[i].first - v[i - 1].first;//这颗石头到上颗的距离
//        left[i] = (left[i - 1] + v[i - 1].second) * s;
//    }
//    for (int i = n - 2; i >= 0; --i)
//    {
//        int s = v[i + 1].first - v[i].first;
//        right[i] = (right[i + 1] + v[i + 1].second) * s;
//    }
//    long long res = LLONG_MAX;
//    for (int i = 0; i < n; ++i)
//    {
//        res = min(res, left[i] + right[i]);
//    }
//    cout << res << endl;
//    return 0;
//}

//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        int n = 0, k = 0;
//        cin >> n >> k;
//        vector<int> v;
//        for (int i = 0; i < n; ++i)
//        {
//            int add = 0;
//            cin >> add;
//            v.push_back(add);
//        }
//        sort(v.begin(), v.end());
//
//        int min = 0;//最小宝石下标
//        int max = v.size() - 1;//最大宝石下标
//        while (k--)
//        {
//            if (v[min] + v[min + 1] > v[max])
//            {
//                --max;
//            }
//            else
//            {
//                min += 2;
//            }
//        }
//        long long sum = 0;
//        for (int i = min; i <= max; ++i)
//        {
//            sum += v[i];
//        }
//
//        cout << sum << endl;
//    }
//
//    return 0;
//}
//2
//11 4
//4 10 3 1 7 8 2 6 11 5 9
//19 8
//17 16 6 9 14 10 8 11 5 3 19 2 18 4 13 7 15 12 1

//#include <iostream>
//#include<vector>
//#include<algorithm>
//#include<limits.h>
//using namespace std;
//int main()
//{
//    int t = 0;
//    cin >> t;
//    while (t--)
//    {
//        int n = 0, k = 0;
//        cin >> n >> k;
//        vector<int> v;
//        for (int i = 0; i < n; ++i)
//        {
//            int add = 0;
//            cin >> add;
//            v.push_back(add);
//        }
//        sort(v.begin(), v.end());
//
//        int prefix[130000];
//        prefix[0] = 0;
//        for (int i = 1; i <= n; ++i)
//        {
//            prefix[i] = prefix[i - 1] + v[i - 1];
//        }
//        int i = 0;//去小次数
//        int j = k - i;//去大次数
//        long long sum = 0;//减去的价值和
//        long long MIN = LLONG_MAX;
//        for (i = 0; i <= k; ++i)
//        {
//            j = k - i;
//            sum = prefix[i*2] + (prefix[n] - prefix[n - j]);
//            MIN = min(MIN, sum);
//        }
//        cout << prefix[n] - MIN << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    int n = 0;
//    cin >> n;
//    int arr[100];
//    vector<int> v;
//    int count = 0;
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> arr[i];
//        int flag = 0;
//        for (auto e : v)
//        {
//            if (e == arr[i])
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//        {
//            v.push_back(arr[i]);
//        }
//        if (v.size() >= 4)
//        {
//            cout << "YES" << endl;
//            return 0;
//        }
//    }
//
//    cout << "NO" << endl;
//    return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
////	string s1;
//	char ch[100] = { 0 };
//	//while (cin >> ch)
//	//{
//	//	s1 += ch;
//	//}
//	//string s2;
//	//istream& is = cin;
//	//while (ch = is.get() != '\n')
//	//{
//	//	s2 += ch;
//	//}
//	string s3;
//	while (scanf("%s", &ch) != '\n')
//	{
//		s3 += ch;
//	}
//	//cout << s1 << endl;
////	cout << s2 << endl;
//	cout << s3 << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Solution {
//public:
//    Solution()
//        :cost(4)
//    {
//        cost[0] = 0;
//        cost[1] = 10;
//        cost[2] = 15;
//        cost[3] = 20;
//    }
//
//    int Cost(vector<int>& cost, vector<int>& dp, int i)
//    {
//        if (i == 0 || i == 1) return 0;
//        int cost1 = Cost(cost, dp, i - 1) + cost[i - 1];
//        int cost2 = Cost(cost, dp, i - 2) + cost[i - 2];
//        dp[i] = cost1 < cost2 ? cost1 : cost2;
//        return dp[i];
//    }
//
//    int minCostClimbingStairs(vector<int>& cost) {
//        //1.dp表,第i层楼梯的最小花费
//        //2.初始化
//        //3.填表
//        //4.返回
//        vector<int> dp(cost.size() + 1);
//        int i = cost.size();
//        return Cost(cost, dp, i);
//
//    }
//
//    vector<int> cost;
//};
//
//int main()
//{
//    Solution s1;
//    cout << s1.minCostClimbingStairs(s1.cost);
//    return 0;
//}



//#include<vector>
//#include<iostream>
//using namespace std;
//vector<vector<int>> generate(int numRows) {
//    vector<vector<int>> ret(numRows);
//    for (int i = 0; i < numRows; ++i)
//    {
//        for (int j = 0; j <= i; ++j)
//        {
//            if (j == 0 || j == i)
//            {
//                ret[i].push_back(1);
//            }
//            else
//            {
//                ret[i].push_back(ret[i - 1][j - 1] + ret[i - 1][j]);
//            }
//        }
//    }
//    return ret;
//}
//
//int main()
//{
//    generate(5);
//    return 0;
//}

//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int removeDuplicates(vector<int>& nums) {
//    //std::iterator<vector<int>> new = unique(nums.begin(), nums.end());
//    std::vector<int>::iterator new_it = unique(nums.begin(), nums.end());
//    nums.erase(new_it, nums.end());
//    return nums.size();
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//vector<int> singleNumber(vector<int>& nums) {
//    vector<int> ret;
//    int count = 0;//找到的一次元素的个数
//    sort(nums.begin(), nums.end());
//
//    std::vector<int>::iterator mid = unique(nums.begin(), nums.end());
//    std::vector<int>::iterator start = nums.begin();
//    auto& i = mid;
//    sort(mid, nums.end());
//    for(i; i != nums.end(); ++i)
//    {
//        while (mid != nums.end() && *mid != *(start + count))
//        {
//            ret.push_back(*(start + count));
//            ++count;
//        }
//        ++start;
//        if (ret.size() == 2) break;
//    }
//    return ret;
//}
//
//
//int main()
//{
//    vector<int> v1 = { 1,2,1,3,2,5 };
//    //singleNumber(v1);
//    sort(v1.begin(), v1.end());
//    for (auto& e : v1)
//    {
//        cout << e << ' ';
//    }
//    cout << endl;
//    unique(v1.begin(), v1.end());
//    for (auto& e : v1)
//    {
//        cout << e << ' ';
//    }
//    cout << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	for (int i = 0; i <= 100; ++i)
//	{
//		cout << (i & 4) << endl;
//	}
//	return 0;
//}



//#include<iostream>
//#include<stack>
//#include<vector>
//using namespace std;
//
//class MinStack {
//public:
//    MinStack() {
//        
//    }
//
//    void push(int val) {
//        _in_put.push(val);
//        if(_ret_min.empty())
//            _ret_min.push(val);
//        else if (val <= _ret_min.top())
//            _ret_min.push(val);
//    }
//
//    void pop() {
//        int temp = _in_put.top();
//        _in_put.pop();
//        if (temp == _ret_min.top())
//            _ret_min.pop();
//    }
//
//    int top() {
//        return _in_put.top();
//    }
//
//    int getMin() {
//        return _ret_min.top();
//    }
//private:
//    stack<int> _in_put;
//    stack<int> _ret_min;
//};
//
//int main()
//{
//    MinStack s1;
//    s1.push(5);
//    s1.push(3);
//    s1.push(1);
//    s1.push(4);
//    s1.push(1);
//    cout << s1.top() << endl;
//    return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//        int max = INT_MIN;
//        int min = INT_MAX;
//        for (const int& e : nums)
//        {
//            if (e > max) max = e;
//            if (e < min) min = e;
//        }
//        vector<int> ret(max - min + 1);
//
//        for (const int& e : nums)
//        {
//            ++ret[e - min];
//        }
//        for (int i = max - min; i >= 0; --i)
//        {
//            while (ret[i] && k > 1)
//            {
//                --ret[i];
//                --k;
//            }
//            if (k == 1 && ret[i])
//                return  i + min;
//        }
//        return 0;
//    }
//};
//
//
//int main()
//{
//    vector<int> v = {-1, -1};
//    Solution s;
//    cout << s.findKthLargest(v, 2) << endl;
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	class Car
//	{
//	public:
//		virtual void Drive() final {}
//	};
//	class Benz :public Car
//	{
//	public:
//		virtual void Drive() { cout << "Benz-舒适" << endl; }
//	};
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	int _a = 0;
//	int test()
//	{
//		cout << "A" << endl;
//		return 0;
//	}
//};
//
//class B : protected A
//{
//public:
//	int _b = 1;
//	int _a = 10;
//
//	int test()
//	{
//		cout << "B" << endl;
//		return 0;
//	}
//};
//
//int main()
//{
//	A t0;
//	t0._a;
//	B t1;
//	t1._b;
//	//t1._a;
//	cout << t1._a << endl;
//	t1.test();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class A
//{
//
//public:
//
//  void f() { cout << "A::f()" << endl; }
//
//  int a;
//
//};
//
//
//
//class B : public A
//
//{
//
//public:
//
//	void f(int a) { cout << "B::f()" << endl; }
//
//	int a;
//
//};
//
//
//
//int main()
//
//{
//
//	B b;
//
//	b.f();
//
//	return 0;
//
//}
//


//#include<iostream>
//using namespace std;
//
//	char* test()
//	{
//		static char s[5] = "1234";
//		return s;
//	}
//
//int main()
//{
//	long a = 10;
//	long* p1 = &a;
//	int* p2 = (int*)&a;
//	cout << p1 << endl << p2 << endl;
//	
//
//	return 0;
//}


//#include<string>
//#include<iostream>
//using namespace std;
//
//
// struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//string tree2str(TreeNode* root) {
//    //一个节点有左右子树，则左右子树分别括起来
//    //若只有左子树，只括左子树，右边空树可省略
//    //若只有右子树，左空子树要括号，右边也括
//    //若没有子树，可直接省略
//    //合起来就是，右边有就不能省略，右边没有就能省略
//    static string ret;//static是错的，大概会在所以例子都生效，会叠加答案
//    ret += to_string(root->val);
//    if (root->right != nullptr)
//    {
//        if (root->left == nullptr)
//        {
//            ret += "()";
//        }
//        else
//        {
//            ret += "(";
//            tree2str(root->left);
//            ret += ")";
//        }
//        ret += "(";
//        tree2str(root->right);
//        ret += ")";
//    }
//    else {
//        if (root->left != nullptr)
//        {
//            ret += "(";
//            tree2str(root->left);
//            ret += ")";
//        }
//    }
//    return ret;
//}
//
//int main()
//{
//    TreeNode* head = new TreeNode;
//    head->val = 1;
//    head->left = new TreeNode;
//    head->left->val = 2;
//    head->left->right = new TreeNode;
//    head->left->right->val = 4;
//    head->left->left = nullptr;
//    head->right = new TreeNode;
//    head->right->val = 3;
//
//    cout << tree2str(head) << endl;
//    return 0;
//
//}

//#include<vector>
//#include<queue>
//#include<utility>
//#include<iostream>
//using namespace std;
//
//
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//class Solution {
//public:
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        queue<pair<TreeNode*, int>> ret;
//        ret.push(pair<TreeNode*, int>(root, root->val));
//        while (ret.empty())
//        {
//            if (ret.front().first->left)
//            {
//                pair<TreeNode*, int> temp1(ret.front().first->left, ret.front().first->left->val);
//                ret.push(temp1);
//            }
//            if (ret.front().first->right)
//            {
//                pair<TreeNode*, int> temp2(ret.front().first->right, ret.front().first->right->val);
//                ret.push(temp2);
//            }
//            r.push_back(ret.front().first->val);
//            ret.pop();
//        }
//    }
//    vector<int> r;
//};
//
//int main()
//{
//    return 0;
//}




//#include<vector>
//#include<queue>
//#include<utility>
//#include<iostream>
//using namespace std;
//
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//     TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
//
//  class Solution {
//  public:
//      vector<vector<int>> levelOrder(TreeNode* root) {
//          return mylevelOrder(root, depth);
//      }
//
//      vector<vector<int>> mylevelOrder(TreeNode* root, int depth)
//      {
//
//          if (root == nullptr)
//              return ret;       
//          if (depth + 1 > ret.size())
//              ret.resize(depth + 1);
//          ret[depth].push_back(root->val);
//          mylevelOrder(root->left, depth + 1);
//          mylevelOrder(root->right, depth + 1);
//          return ret;
//      }
//
//  private:
//      vector<vector<int>> ret;
//      int depth = 0;
//  };
//
//
//  int main()
//  {
//    TreeNode* head = new TreeNode;
//    head->val = 1;
//    head->left = new TreeNode;
//    head->left->val = 2;
//    head->left->right = new TreeNode;
//    head->left->right->val = 4;
//    head->left->left = nullptr;
//    head->right = new TreeNode;
//    head->right->val = 3;
//    Solution s;
//    vector<vector<int>> ret = s.levelOrder(head);
//
//      return 0;
//  }

//#include<iostream>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//			val(x), left(NULL), right(NULL) {
//	}
//};
//
//class Solution {
//public:
//	TreeNode* Convert(TreeNode* pRootOfTree) {
//		TreeNode* ret = FindMin(pRootOfTree->left);
//		resovle(pRootOfTree);
//		return ret;
//	}
//
//	void resovle(TreeNode* root)
//	{
//		//left为子，right为父
//		//对于一个根，它左子树找最大相互连起来，右子树找最小
//		//中序
//
//		if (root == nullptr)
//			return;
//		resovle(root->left);
//		resovle(root->right);
//
//		TreeNode* max = FindMax(root->left);
//		TreeNode* min = FindMin(root->right);
//		if (max)
//		{
//			max->right = root;
//			root->left = max;
//		}
//		if (min)
//		{
//			min->left = root;
//			root->right = min;
//		}
//		return;
//	}
//
//	TreeNode* FindMin(TreeNode* root)
//	{
//		if (root == nullptr)
//			return nullptr;
//		if (root->left == nullptr)
//			return root;
//		return FindMin(root->left);
//	}
//
//	TreeNode* FindMax(TreeNode* root)
//	{
//		if (root == nullptr)
//			return nullptr;
//		if (root->right == nullptr)
//			return root;
//		return FindMax(root->right);
//	}
//};
//
//
//int main()
//{
//
//	TreeNode* head = new TreeNode(3);
//    head->left = new TreeNode(1);
//    head->left->right = new TreeNode(2);
//    head->right = new TreeNode(4);
//	Solution s;
//	TreeNode* ret = s.Convert(head);
//	
//	return 0;
//}






//#include<iostream>
//#include<vector>
//using namespace std;
//
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
// 
//class Solution {
//public:
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        return my_buildTree(preorder, inorder);
//    }
//
//    TreeNode* my_buildTree(vector<int>& preorder, vector<int>& inorder)
//    {
//        TreeNode* ret = new TreeNode(preorder[_num]);
//        vector<int>::iterator _end = inorder.begin();
//        while (*_end != preorder[_num])//找到根节点
//        {
//            ++_end;
//        }
//        if (inorder.size() == 1)
//        {
//            ret->left = nullptr;
//            ret->right = nullptr;
//            return ret;
//        }
//
//        if (_end == inorder.begin())
//        {
//            ret->right = nullptr;
//        }
//        else
//        {
//            ++_num;
//            vector<int> temp1(inorder.begin(), _end);
//            ret->left = my_buildTree(preorder, temp1);
//        }
//
//        if (_end + 1 == inorder.end())
//        {
//            ret->right = nullptr;
//        }
//        else
//        {
//            ++_num;
//            vector<int> temp2(++_end, inorder.end());
//            ret->right = my_buildTree(preorder, temp2);
//            return ret;
//        }
//    }
//
//    int _num = 0;//先序遍历的下标
//};
//
//int main()
//{
//    vector<int> pre{ 1,2};
//    vector<int> in{1,2};
//    Solution s;
//    TreeNode* ret = s.buildTree(pre, in);
//    int a = 0;
//    return 0;
//}

//#include<utility>
//#include<vector>
//#include<iostream>
//#include<stack>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//        if (root == nullptr)
//            return ret;
//        stack<TreeNode*> s;
//        s.push(root);
//        while(!s.empty())
//        {
//            TreeNode* cur = s.top();
//            ret.push_back(cur->val);
//            s.pop();
//            if (cur->right)
//            {
//                s.push(cur->right);
//            }
//            if (cur->left)
//            {
//                s.push(cur->left);
//            }
//        }
//        return ret;
//    }
//    vector<int> ret;
//};
//int main()
//{
//    	TreeNode* head = new TreeNode(3);
//    head->left = new TreeNode(1);
//    head->left->right = new TreeNode(2);
//    head->right = new TreeNode(4);
//    Solution s;
//    vector<int> ret = s.preorderTraversal(head);
//    for (auto& e: ret)
//    {
//        cout << e << " ";
//    }
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
// struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//class Solution {
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        stack<TreeNode*> s;
//        TreeNode* cur = root;
//        while (cur || !s.empty())
//        {
//            while (cur)
//            {
//                s.push(cur);
//                cur = cur->left;
//            }
//            cur = s.top();
//            ret.push_back(cur->val);
//            s.pop();
//            cur = cur->right;
//        }
//        return ret;
//    }
//
//    vector<int> ret;
//};
//
//
//int main()
//{
//        	TreeNode* head = new TreeNode(3);
//    head->left = new TreeNode(1);
//    head->left->right = new TreeNode(2);
//    head->right = new TreeNode(4);
//    Solution s;
//    vector<int> ret = s.inorderTraversal(head);
//    for (auto& e: ret)
//    {
//        cout << e << " ";
//    }
//    return 0;
//}




//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
// struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         if (root == nullptr)
//             return ret;
//         int flag = 0;
//         int flag1 = 0;//是否有左树
//         if (root->left)
//             flag1 = 1;
//         stack<TreeNode*> s;
//         TreeNode* cur = root;
//         s.push(cur);
//         while (!s.empty())
//         {
//             if (cur->right)
//                 s.push(cur->right);
//             if (cur->left)
//                 s.push(cur->left);
//
//             cur = s.top();
//             if(cur->left == nullptr && cur->right == nullptr)
//             {
//                 while (s.size() > 2 && flag1)
//                 {
//                     TreeNode* add = s.top();
//                     s.pop();
//                     ret.push_back(add->val);
//                 }
//                 while (!s.empty() && flag)
//                 {
//                     TreeNode* add = s.top();
//                     s.pop();
//                     ret.push_back(add->val);
//                 }
//                 flag = 1;
//                 if(!s.empty())
//                     cur = s.top();
//             }
//         }
//         return ret;
//     }
//
//     vector<int> ret;
// };
//
//
//int main()
//{
//    //TreeNode* head = new TreeNode(3);
//    //head->left = new TreeNode(1);
//    //head->left->right = new TreeNode(2);
//    //head->right = new TreeNode(4);
//
//    TreeNode* head = new TreeNode(1);
//    head->right = new TreeNode(2);
//    head->right->right = new TreeNode(3);
//
//    Solution s;
//    vector<int> ret = s.postorderTraversal(head);
//    for (auto& e: ret)
//    {
//        cout << e << " ";
//    }
//    return 0;
//}



//#include<vector>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	vector<int> v = { 1,2,3,4,5 };
//	reverse(v.begin(), v.end());
//	for (auto& e : v)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}

//#include<map>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//
//    struct compare
//    {
//        bool operator()(const pair<string, int>& p1, const pair<string, int>& p2)
//        {
//            return p1.second > p2.second;
//        }
//    };
//
//    vector<string> topKFrequent(vector<string>& words, int k) {
//        map<string, int> m;
//        for (int i = 0; i < words.size(); ++i)
//        {
//            auto it = m.insert({ words[i], 1 });
//            if (it.second == false)
//            {
//                ++it.first->second;
//            }
//        }
//
//        for (auto& e : m)
//        {
//            temp.push_back(e);
//        }
//
//        stable_sort(temp.begin(), temp.end(), compare());
//        vector<string> ret;
//        for (int i = 0; i < k; ++i)
//        {
//            ret.push_back(temp[i].first);
//        }
//
//        return ret;
//    }
//
//    vector<pair<string, int>> temp;
//};
//
//int main()
//{
//    vector<string> v{ "i","love","leetcode","i","love","coding" };
//
//    Solution s;
//    vector<string> ret = s.topKFrequent(v, 2);
//    for (auto& e : ret)
//    {
//        cout << e << endl;
//    }
//    return 0;
//}


//#include<string>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string test;
//	cin >> test;
//	test.erase(test.end() - 1);
//	cout << test << endl;
//	return 0;
//}




//#include<iostream>
//#include<string>
//#include<map>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//    map<string, int> m;
//    string temp;
//    while (cin >> temp)
//    {
//        for (int i = 0; i < temp.size(); ++i)
//        {
//            if (temp[i] < 'a' && temp[i] != '.')
//                temp[i] += 32;
//        }
//        if (*(temp.end() - 1) == '.')
//        {
//            temp.erase(temp.end() - 1);
//            auto it = m.insert({ temp, 1 });
//            if (it.second == false)
//            {
//                it.first->second++;
//            }
//            break;
//        }
//
//        auto it = m.insert({ temp, 1 });
//        if (it.second == false)
//        {
//            it.first->second++;
//        }
//    }
//
//    vector<pair<string, int>>  ret(m.begin(), m.end());
//    struct compare
//    {
//        bool operator()(const pair<string, int>& p1, const pair<string, int>& p2)
//        {
//            return p1.second > p2.second;
//        }
//    };
//
//    stable_sort(ret.begin(), ret.end(), compare());
//
//    for (auto& e : ret)
//    {
//        cout << e.first << ':' << e.second << endl;
//    }
//
//    return 0;
//}


//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	queue<int> in;
//	queue<int> q;
//	for (int i = 0; i < n; ++i)
//	{
//		int temp;
//		cin >> temp;
//		in.push(temp);
//	}
//	if (n == 1)
//		return in.front();
//
//	int ret = 0;
//	int cur = 0;
//	if (!in.empty())
//	{
//		q.push(in.front());
//		in.pop();
//		ret = q.front();
//		cur = ret;
//	}
//	while (!in.empty())
//	{
//		while (q.size() > 1 && q.front() <= 0)
//		{
//			cur -= q.front();
//			q.pop();
//		}
//		if (cur > ret)	ret = cur;
//		if(q.size() < m)
//		{
//			while (q.size() < m && !in.empty())
//			{
//				q.push(in.front());
//				cur += in.front();
//				if (cur > ret)	ret = cur;
//				in.pop();
//			}
//		}
//		else
//		{
//			cur -= q.front();
//			q.pop();
//			q.push(in.front());
//			cur += in.front();
//			in.pop();
//		}
//		if (cur > ret) ret = cur;
//	}
//
//	while (q.size() > 1 && q.front() <= 0)
//	{
//		cur -= q.front();
//		q.pop();
//	}
//	if (cur > ret)	ret = cur;
//	cout << ret << endl;
//	return 0;
//}

//10 5
//1 -1 -2 -3 5 6 -1 -1 6 0
//15

//5 3
//-2 -3 -1 -2 -1
//0

//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//void answer(int begin, int end, int n, vector<int> v)
//{
//	if (end > n)
//		return;
//	for (begin; begin < n; ++begin)
//	{
//		cout << v[begin] << " ";
//
//		answer(begin + 1, end + 1, n, v);
//		cout << endl;
//		++begin;
//	}
//
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> v;
//	for (int i = 0; i < n; ++i)
//		v.push_back(i + 1);
//	answer(0, 1, n, v);
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int solution(int n)
//{
//	if (n == 1)
//		return 1;
//	return (solution(n - 1) + 1) * 2;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << solution(n) << endl;
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int f(int i, int n, vector<int>& a)
//{
//	if (i > n)
//		return 0;
//	return f(i + a[i], n, a) + 1;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> a(n + 1);
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> a[i + 1];
//	}
//	cout << f(1, n, a) << endl;
//	return 0;
//}


//235
//#include<iostream>
//using namespace std;
//
//int arr[15];
//void output(int i)
//{
//	for (int j = 0; j <= i; ++j)
//	{
//		j && printf(" ");
//		cout << arr[j];
//	}
//	cout << endl;
//	return;
//}
//
//void f(int i, int j, int n)
//{
//	if (i >= n) return;
//	for (int k = j; k <= n; k++)
//	{
//		arr[i] = k;
//		output(i);
//		f(i + 1, k + 1, n);
//	}
//	return;
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	f(0, 1, n);
//	return 0;
//}


//236
//#include<iostream>
//using namespace std;
//
//int arr[15];
//void output(int i)
//{
//	for (int j = 0; j <= i; ++j)
//	{
//		i && cout << " ";
//		cout << arr[i];
//	}
//	cout << endl;
//	return;
//}
//
//void f(int i, int j, int n, int m)
//{
//	if (i == m)
//	{
//		output(i);
//		return;
//	}
//	for (int k = j; k <= n; k++)
//	{
//		arr[i] = k;
//		f(i + 1, k + 1, n, m);
//	}
//	return;
//}
//int main()
//{
//
//	return 0;
//}



//237
//#include<iostream>
//using namespace std;
//
//int arr[15] = { 0 };
//int num[15] = { 0 };
//
//void output(int n)
//{
//	for (int i = 0; i < n; ++i)
//	{
//		i && cout << " ";
//		cout << arr[i];
//	}
//	cout << endl;
//	return;
//}
//
//void f(int i, int n)
//{
//	if (i >= n)
//	{
//		output(n);
//		return;
//	}
//
//	for (int k = 1; k <= n; ++k)
//	{
//		if (num[k] == 1) continue;
//		arr[i] = k;
//		num[k] = 1;
//		f(i + 1, n);
//		num[k] = 0;
//	}
//	return;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//bool IsPrime(int n)
//{
//	if (n <= 1) {
//		return false;
//	}
//	for (int i = 2; i < sqrt(n); i++)
//	{
//		if ((n % i) == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//
//void f(int i, int j, int sum, int n, int k, vector<int>& v, int& ret)
//{
//	if (i == k)
//	{
//		ret += IsPrime(sum) ? 1 : 0;
//		return;
//	}
//	for (int z = j; z < n; ++z)
//	{
//		f(i + 1, z + 1, sum + v[z], n, k, v, ret);
//	}
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	cin >> n >> k;
//	vector<int> v(n + 5);
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> v[i + 1];
//	}
//	int ret = 0;
//	f(0, 1, 0, n, k,  v, ret);
//	cout << ret << endl;
//	return 0;
//}



//#include<iostream>
//#include<vector>
//#include<limits.h>
//#include<utility>
//using namespace std;
//
////cur为当前次数，ret为最小次数
//int solution(vector<pair<int, int>>& K, int cur, int& ret, int a, int b)
//{
//
//	if (cur > ret)
//		return ret;
//	if (a == b)
//	{
//		if (cur < ret)
//			ret = cur;
//		return ret;
//	}
//	if (K[a].first == 0)
//		return ret;
//	if (a + K[a].first < K.size() && K[a].second == 0)
//	{
//		K[a].second = 1;
//		solution(K, cur + 1, ret, a + K[a].first, b);
//		K[a].second = 0;
//	}
//	if (a - K[a].first > 0 && K[a].second == 0)
//	{
//		K[a].second = 1;
//		solution(K, cur + 1, ret, a - K[a].first, b);
//		K[a].second = 0;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	cin >> n >> a >> b;
//	vector<pair<int, int>> K;
//	K.resize(n + 1);
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> K[i].first;
//		K[i].second = 0;
//	}
//	int ret = INT_MAX;
//	solution(K, 0, ret, a, b);
//	if (ret != INT_MAX)
//		cout << ret << endl;
//	else
//		cout << -1 << endl;
//	return 0;
//}

//5 1 5
//1 1 1 3 5

//奇怪的电梯（ac）
//#include<iostream>
//#include<vector>
//#include<limits.h>
//#include<utility>
//using namespace std;
//
////cur为当前次数，ret为最小次数
//void solution(vector<int>& K, vector<int>& step, int cur, int a, int b)
//{
//	if (cur >= step[a])
//		return;
//	else
//		step[a] = cur;
//	if (K[a] == 0)
//		return;
//	if (a + K[a] < K.size())
//	{
//		solution(K, step, cur + 1, a + K[a], b);
//	}
//	if (a - K[a] > 0)
//	{
//		solution(K, step, cur + 1, a - K[a], b);
//	}
//	return;
//}
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	cin >> n >> a >> b;
//	vector<int> K;
//	vector<int> step;
//	K.resize(n + 1);
//	step.resize(n + 1);
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> K[i];
//		step[i] = INT_MAX;
//	}
//	solution(K, step, 0, a, b);
//	int ret = step[b] == INT_MAX ? -1 : step[b];
//	cout << ret << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int dis[8][2] =
//{
//	{1, 2}, {2, 1},{-1, 2},{-2, 1},
//	{1, -2},{2, -1},{-1, -2},{-1, -2}
//};
//
//int step[405][405];
//
//int main()
//{
//	int m, n, x, y;
//	cin >> m >> n >> x >> y;
//	for (int i = 1; i <= m; ++i)
//	{
//		for (int j = 1; j <= n; ++j)
//		{
//			step[i][j] = -1;
//		}
//	}
//
//
//	return 0;
//}



//滑动窗口
//#include<iostream>
//#include<vector>
//#include<deque>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	vector<int> v;
//	v.resize(n);
//	for (int i = 0; i < n; ++i)
//	{
//		scanf("%d", &v[i]);
//	}
//	deque<int> w;
//	w.resize(k);
//	w[0] = v[0];
//	vector<int> ret_1;
//	vector<int> ret_2;
//	for (int i = 0; i < n; ++i)
//	{
//		if (i + 1 >= k)
//			w.pop_front();
//		while (!w.empty() && v[i] < w.back())
//			w.pop_back();
//		w.push_back(v[i]);
//		if (i + 1 < k)	continue;
//		ret_1.push_back(w.front());
//	}
//	while (!w.empty()) w.pop_back();
//	for (int i = 0; i < n; ++i)
//	{
//		if (i + 1 >= k)
//			w.pop_front();
//		while (!w.empty() && v[i] > w.back())
//			w.pop_back();
//		w.push_back(v[i]);
//		if (i + 1 < k)	continue;
//		ret_2.push_back(w.front());
//	}
//	for (auto e : ret_1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	for (auto e : ret_2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}



//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	queue<int> in;
//	queue<int> q;
//	for (int i = 0; i < n; ++i)
//	{
//		int temp;
//		cin >> temp;
//		in.push(temp);
//	}
//	if (n == 1)
//		return in.front();
//
//	int ret = 0;
//	int cur = 0;
//	if (!in.empty())
//	{
//		q.push(in.front());
//		in.pop();
//		ret = q.front();
//		cur = ret;
//	}
//	while (!in.empty())
//	{
//		while (q.size() > 1 && q.front() <= 0)
//		{
//			cur -= q.front();
//			q.pop();
//		}
//		if (cur > ret)	ret = cur;
//		if (q.size() <= m)
//		{
//			while (q.size() < m && !in.empty())
//			{
//				q.push(in.front());
//				cur += in.front();
//				if (cur > ret)	ret = cur;
//				in.pop();
//			}
//		}
//		else
//		{
//			cur -= q.front();
//			q.pop();
//			q.push(in.front());
//			cur += in.front();
//			in.pop();
//		}
//		if (cur > ret) ret = cur;
//	}
//
//	while (q.size() > 1 && q.front() <= 0)
//	{
//		cur -= q.front();
//		q.pop();
//	}
//	if (cur > ret)	ret = cur;
//	cout << ret << endl;
//	return 0;
//}



//#include<iostream>
//#include<string>
//using namespace std;
//
//  struct TreeNode {
//      int val;
//      TreeNode*left;
//      TreeNode*right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode*left, TreeNode*right) : val(x), left(left), right(right) {}
//  };
// 
//class Solution {
//public:
//    int sumNumbers(TreeNode* root) {
//        string s;
//        int ret = 0;
//        return Func(root, ret, s.c_str());
//    }
//    int Func(TreeNode* root, int& ret, string& s)
//    {
//        if (root == nullptr)
//            return 0;
//        s += 48 + root->val;
//        Func(root->left, ret, s);
//        Func(root->right, ret, s);
//        if (root->left == nullptr && root->right == nullptr)
//        {
//            ret += atoi(s.c_str());
//        }
//        s.pop_back();
//        return ret;
//    }
//
//};





//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <unordered_set>
//#include <tuple>
//#include <algorithm>
//
//using namespace std;
//
//struct Node {
//    int weight;
//    unordered_set<int> neighbors;
//};
//
//int max_weight_after_merge(int n, vector<int>& weights, vector<pair<int, int>>& edges) {
//    unordered_map<int, Node> graph;
//
//    for (int i = 1; i <= n; ++i) {
//        graph[i] = { weights[i - 1], {} };
//    }
//
//    for (const auto& edge : edges) {
//        graph[edge.first].neighbors.insert(edge.second);
//        graph[edge.second].neighbors.insert(edge.first);
//    }
//
//    while (graph.size() > 1) {
//        int max_weight = -1;
//        tuple<int, int, int> to_merge;
//
//        for (const auto& pair : graph) {
//            int y = pair.first;
//            const Node& node = pair.second;
//            for (int x : node.neighbors) {
//                for (int z : node.neighbors) {
//                    if (x != z && graph[x].neighbors.count(y) && graph[y].neighbors.count(z)) {
//                        int combined_weight = graph[x].weight + graph[y].weight + graph[z].weight;
//                        if (combined_weight > max_weight) {
//                            max_weight = combined_weight;
//                            to_merge = make_tuple(x, y, z);
//                        }
//                    }
//                }
//            }
//        }
//
//        if (max_weight == -1) break; // 找不到合适的合并候选
//
//        int x, y, z;
//        tie(x, y, z) = to_merge;
//        int new_node = weights.size() + 1;
//        int new_weight = graph[x].weight + graph[y].weight + graph[z].weight;
//        weights.push_back(new_weight);
//
//        unordered_set<int> new_neighbors;
//        for (int neighbor : graph[x].neighbors) {
//            if (neighbor != y && neighbor != z) new_neighbors.insert(neighbor);
//        }
//        for (int neighbor : graph[y].neighbors) {
//            if (neighbor != x && neighbor != z) new_neighbors.insert(neighbor);
//        }
//        for (int neighbor : graph[z].neighbors) {
//            if (neighbor != x && neighbor != y) new_neighbors.insert(neighbor);
//        }
//
//        graph[new_node] = { new_weight, new_neighbors };
//        for (int neighbor : new_neighbors) {
//            graph[neighbor].neighbors.erase(x);
//            graph[neighbor].neighbors.erase(y);
//            graph[neighbor].neighbors.erase(z);
//            graph[neighbor].neighbors.insert(new_node);
//        }
//
//        graph.erase(x);
//        graph.erase(y);
//        graph.erase(z);
//    }
//
//    return graph.begin()->second.weight;
//}
//
//int main() {
//    int n = 7;
//    int m = 7;
//    vector<int> weights = { 1, 2, 3, 1, 2, 3, 1 };
//    vector<pair<int, int>> edges = { {1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}, {7, 1} };
//
//    cout << max_weight_after_merge(n, weights, edges) << endl;
//    return 0;
//} 



//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	vector<int> v = { 5,5,5,1,2,3,5,5,4,4,6,7 };
//	//sort(v.begin(), v.end());
//	std::vector<int>::iterator it_end = unique(v.begin(), v.end());
//	for (auto i = v.begin(); i != it_end; ++i)
//		cout << *i << ' ';
//	cout << endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	vector<int> arr1 = { 3, 1, 2, 5, 4 };//1 2 0 4 3
//	vector<int> arr2 = { 0, 1, 2, 3, 4 };
//	sort(arr2.begin(), arr2.end(), [arr1](int i, int j)->bool {return arr1[i] < arr1[j];});
//	for (auto& e : arr2)
//		cout << e << ' ';
//	cout << endl;
//	return 0;
//}


//#include<vector>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//int main() {
//	vector<int> v = { 1,1,1,1,1,2,2,2,2,2,3,3,3 };
//	unique(v.begin(), v.end());
//	cout << v.size() << endl;
//	for (auto& e : v)
//		cout << e << endl;
//	return 0;
//}


//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//int main() {
//	unordered_map<int, int> hash;
//	if (hash[0] == 1)
//		;
//	else
//		hash[0] = 1;
//	return 0;
//}


//#include<unordered_set>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	unordered_set<int> hash;
//	hash.insert(2);
//	cout << hash.size() << endl;
//	hash.insert(2);
//	cout << hash.size() << endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main() {
//	cout << -6 % 2 << endl;
//	int 
//	for (int i = 0; i < 5; ++i)
//		cout << i << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//	for (int i = 1; i < 5; ++i)
//		for (int j = i; j < 5; ++j)
//			cout << (i ^ j) << ' ';
//	cout << endl;
//	for (int i = 1; i < 5; ++i)
//		for (int j = i; j < 5; ++j)
//			for (int k = j; k < 5; ++k)
//				cout << (i ^ j ^ k) << ' ';
//	cout << endl;
//	return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//typedef pair<int, int> PII;
//const int N = 1e5 + 10;
//int n, m;
//vector<PII> edges[N];
//int main()
//{
//	cin >> n >> m; // 读⼊结点个数以及边的个数
//
//		for (int i = 1; i <= m; i++)
//		{
//			int a, b, c; cin >> a >> b >> c;
//			// a 和b之间有⼀条边，权值为c
//			edges[a].push_back({ b, c });
//			// 如果是⽆向边，需要反过来再存⼀下
//			edges[b].push_back({ a, c });
//		}
//
//	return 0;
//}

