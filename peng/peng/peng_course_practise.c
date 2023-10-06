#include<stdio.h>
int main()
{int num1;int num2;
printf("请输入两个整数：");
scanf("%d %d", &num1, &num2);
int sum=num1+num2;
printf("%d和%d的和为:%d",num1,num2,sum);
    return 0;
}