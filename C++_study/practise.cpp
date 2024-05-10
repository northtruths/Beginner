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

#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	string t1 = "zbdcajrnz";
	vector<int> v1 = { 4, 3, 6, 1, 2, 6, 7, 6, 8 };
	sort(v1.rbegin(), v1.rend());

	return 0;
}