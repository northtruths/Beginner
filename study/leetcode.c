#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>//1.����֮��
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
//    stack->top = 0;//top��λ��ΪβԪ�ص���һ��
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
//    if (stack->top == stack->sizenum)//����
//    {
//        int newsizenum = stack->sizenum == 0 ? 4 : stack->sizenum * 2;
//        DataType* temp = (DataType*)realloc(stack->arr, newsizenum * sizeof(DataType));
//        stack->sizenum = newsizenum;
//        if (temp == NULL)
//        {
//            perror("����ʧ�ܣ�\n");
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
//    while (len--)//��������ջ�������ų�ջƥ��
//    {
//        if (s[num] == '(' || s[num] == '{' || s[num] == '[')
//        {
//            PushStack(&sk, s[num]);
//            ++num;
//        }
//        else if(s[num] == ')' || s[num] == '}' || s[num] == ']')
//        {
//            if (SizeStack(&sk) == 0)//�����Ų���ջΪ��
//            {
//                free(sk.arr);
//                sk.arr = NULL;
//                return false;
//            }
//            if ((TopStack(&sk) == '(' && s[num] == ')') //��ƥ��false��ƥ���ջ
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
//    sk->top = 0;//top��λ��ΪβԪ�ص���һ��
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
//    if (sk->top == sk->sizenum)//����
//    {
//        int newsizenum = sk->sizenum == 0 ? 4 : sk->sizenum * 2;
//        DataType* temp = (DataType*)realloc(sk->arr, newsizenum * sizeof(DataType));
//        sk->sizenum = newsizenum;
//        if (temp == NULL)
//        {
//            perror("����ʧ�ܣ�\n");
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
////˼·��һ��ջ���������ݣ�������ʱ�Ȱ��������ݵ�����һ��ջ�������ջ�����ݣ�
////Ȼ�󵼻�ȥ
//typedef struct {//����ջ
//    SK* sk1;//��sk1��
//    SK* sk2;//sk2��
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
//    while (!EmptyStack(obj->sk1))//sk1 ������ sk2
//    {
//        int  top = TopStack(obj->sk1);
//        PushStack(obj->sk2, top);
//        PopStack(obj->sk1);
//    }
//    //��ʱ sk2 �� βԪ�� ����Ҫɾ��
//    int ret = TopStack(obj->sk2);
//    PopStack(obj->sk2);
//    while (!EmptyStack(obj->sk2))//����ȥ
//    {
//        int  top = TopStack(obj->sk2);
//        PushStack(obj->sk1, top);
//        PopStack(obj->sk2);
//    }
//    return ret;
//}
//
//int myQueuePeek(MyQueue* obj) {
//    while (!EmptyStack(obj->sk1))//sk1 ������ sk2
//    {
//        int  top = TopStack(obj->sk1);
//        PushStack(obj->sk2, top);
//        PopStack(obj->sk1);
//    }
//    int ret = TopStack(obj->sk2);
//    while (!EmptyStack(obj->sk2))//����ȥ
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