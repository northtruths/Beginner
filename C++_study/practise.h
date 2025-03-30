#pragma once
//
//#include<stdbool.h>
//#include<stdio.h>
//#include<iostream>
//
//using namespace std;
//
//namespace one
//{
//	typedef struct node
//	{
//		int a;
//	}Node;
//
//	void Push(Node* node)
//	{
//		node->a = 10;
//	}
//}

//int f(int a = 10, int b = 20);


#include<unordered_set>
#include<iostream>
using namespace std;

int main()
{
	unordered_set<int> hash;
	hash.insert(2);
	//cout << *hash.find(2) << endl;
	//cout << *hash.find(1) << endl;
	return 0;
}