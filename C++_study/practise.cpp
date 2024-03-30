#define _CRT_SECURE_NO_WARNINGS

#include"practise.h"


typedef struct node
{
	int a;
}Node;

void Push(one::Node* node)
{
	node->a = 20;
}

int a = 0;

using namespace one;

int main()
{
	one::Node node = {node.a = 0};
	::Push(&node);
	cout << node.a  + node.a + 1;
	return 0;
}