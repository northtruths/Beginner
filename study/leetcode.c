#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>//1.两数之和
//int main()
//{
//    int a = 0;
//    int i = 0;
//    int arr[5];
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int target = 0;
//    scanf("%d", &target);
//    int j = 0;
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            if (arr[i] + arr[j] == target)
//                printf("[%d,%d]", i, j);
//        }
//
//    }
//
//
//    return 0;
//}

//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<assert.h>
//
//typedef char DataType;
//
//typedef struct stack
//{
//    DataType* arr;
//    int top;
//    int sizenum;
//}SK;
//void InitStack(SK* stack)
//{
//    assert(stack);
//    stack->sizenum = 0;
//    stack->top = 0;//top的位置为尾元素的下一个
//    stack->arr = NULL;
//}
//
//void DestroyStack(SK* stack)
//{
//    assert(stack);
//    free(stack->arr);
//    stack->arr = NULL;
//    stack->sizenum = 0;
//    stack->top = 0;
//}
//void PushStack(SK* stack, DataType x)
//{
//    assert(stack);
//    if (stack->top == stack->sizenum)//扩容
//    {
//        int newsizenum = stack->sizenum == 0 ? 4 : stack->sizenum * 2;
//        DataType* temp = (DataType*)realloc(stack->arr, newsizenum * sizeof(DataType));
//        stack->sizenum = newsizenum;
//        if (temp == NULL)
//        {
//            perror("扩容失败！\n");
//            exit;
//        }
//        stack->arr = temp;
//    }
//    stack->arr[stack->top] = x;
//    stack->top++;
//}
//void PopStack(SK* stack)
//{
//    assert(stack);
//    stack->top--;
//}
//int EmptyStack(SK* stack)
//{
//    return stack == NULL;
//}
//DataType TopStack(SK* stack)
//{
//    return stack->arr[stack->top - 1];
//}
//int SizeStack(SK* stack)
//{
//    assert(stack);
//    return stack->top;
//}
//
//bool isValid(char* s) {
//    SK sk;
//    InitStack(&sk);
//    int len = strlen(s);
//    int num = 0;
//    while (len--)//左括号入栈，右括号出栈匹配
//    {
//        if (s[num] == '(' || s[num] == '{' || s[num] == '[')
//        {
//            PushStack(&sk, s[num]);
//            ++num;
//        }
//        else if(s[num] == ')' || s[num] == '}' || s[num] == ']')
//        {
//            if (SizeStack(&sk) == 0)//右括号并且栈为空
//            {
//                free(sk.arr);
//                sk.arr = NULL;
//                return false;
//            }
//            if ((TopStack(&sk) == '(' && s[num] == ')') //不匹配false，匹配出栈
//                || (TopStack(&sk) == '{' && s[num] == '}')
//                || (TopStack(&sk) == '[' && s[num] == ']'))
//            {
//                PopStack(&sk);
//                ++num;
//            }
//            else
//            {
//                free(sk.arr);
//                sk.arr = NULL;
//                return false;
//            }
//        }
//    }
//    if (SizeStack(&sk) == 0)
//    {
//        DestroyStack(&sk);
//        return true;
//    }
//    else
//    {
//        DestroyStack(&sk);
//        return false;
//    }
//
//}
//
//int main()
//{
//    //char s[] = "()[]{}";
//    //isValid(s);
//    char s1[] = "()[]{}";
//    isValid(s1);
//    return 0 ;
//}



//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<assert.h>
//
//typedef int DataType;
//
//typedef struct stack
//{
//    DataType* arr;
//    int top;
//    int sizenum;
//}SK;
//
//void InitStack(SK* sk)
//{
//    assert(sk);
//    sk->sizenum = 0;
//    sk->top = 0;//top的位置为尾元素的下一个
//    sk->arr = NULL;
//}
//
//void DestroyStack(SK* sk)
//{
//    assert(sk);
//    free(sk->arr);
//    sk->arr = NULL;
//    sk->sizenum = 0;
//    sk->top = 0;
//}
//void PushStack(SK* sk, DataType x)
//{
//    assert(sk);
//    if (sk->top == sk->sizenum)//扩容
//    {
//        int newsizenum = sk->sizenum == 0 ? 4 : sk->sizenum * 2;
//        DataType* temp = (DataType*)realloc(sk->arr, newsizenum * sizeof(DataType));
//        sk->sizenum = newsizenum;
//        if (temp == NULL)
//        {
//            perror("扩容失败！\n");
//            exit;
//        }
//        sk->arr = temp;
//    }
//    sk->arr[sk->top] = x;
//    sk->top++;
//}
//void PopStack(SK* sk)
//{
//    assert(sk);
//    assert(sk->top);
//    sk->top--;
//}
//bool EmptyStack(SK* sk)
//{
//    assert(sk);
//    return sk->top == 0;
//}
//DataType TopStack(SK* sk)
//{
//    assert(sk);
//    return sk->arr[sk->top - 1];
//}
//int SizeStack(SK* sk)
//{
//    assert(sk);
//    return sk->top;
//}
//
//
//
////思路：一个栈拿来入数据，出数据时先把所有数据导入另一个栈，用这个栈出数据，
////然后导回去
//typedef struct {//两个栈
//    SK* sk1;//用sk1入
//    SK* sk2;//sk2出
//} MyQueue;
//
//
//MyQueue* myQueueCreate() {
//    MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
//    queue->sk1 = (SK*)malloc(sizeof(SK));
//    queue->sk2 = (SK*)malloc(sizeof(SK));
//    InitStack(queue->sk1);
//    InitStack(queue->sk2);
//    return queue;
//}
//
//void myQueuePush(MyQueue* obj, int x) {
//    assert(obj);
//    PushStack(obj->sk1, x);
//}
//
//int myQueuePop(MyQueue* obj) {
//    while (!EmptyStack(obj->sk1))//sk1 倒序导入 sk2
//    {
//        int  top = TopStack(obj->sk1);
//        PushStack(obj->sk2, top);
//        PopStack(obj->sk1);
//    }
//    //此时 sk2 的 尾元素 就是要删的
//    int ret = TopStack(obj->sk2);
//    PopStack(obj->sk2);
//    while (!EmptyStack(obj->sk2))//导回去
//    {
//        int  top = TopStack(obj->sk2);
//        PushStack(obj->sk1, top);
//        PopStack(obj->sk2);
//    }
//    return ret;
//}
//
//int myQueuePeek(MyQueue* obj) {
//    while (!EmptyStack(obj->sk1))//sk1 倒序导入 sk2
//    {
//        int  top = TopStack(obj->sk1);
//        PushStack(obj->sk2, top);
//        PopStack(obj->sk1);
//    }
//    int ret = TopStack(obj->sk2);
//    while (!EmptyStack(obj->sk2))//导回去
//    {
//        int  top = TopStack(obj->sk2);
//        PushStack(obj->sk1, top);
//        PopStack(obj->sk2);
//    }
//    return ret;
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//    return EmptyStack(obj->sk1);
//}
//
//void myQueueFree(MyQueue* obj) {
//    DestroyStack(obj->sk1);
//    DestroyStack(obj->sk2);
//    free(obj->sk1);
//    free(obj->sk2);
//    obj->sk1 = NULL;
//    obj->sk2 = NULL;
//    free(obj);
//    obj = NULL;
//
//}
//
//int main()
//{
//    MyQueue* myQueue = myQueueCreate();
//    myQueuePush(myQueue,1); // queue is: [1]
//    myQueuePush(myQueue,2); // queue is: [1, 2] (leftmost is front of the queue)
//    myQueuePeek(myQueue); // return 1
//    myQueuePop(myQueue); // return 1, queue is [2]
//    myQueueEmpty(myQueue); // return false
//    return 0;
//}