#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>//1.两数之和
int main()
{
    int a = 0;
    int i = 0;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target = 0;
    scanf("%d", &target);
    int j = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i] + arr[j] == target)
                printf("[%d,%d]", i, j);
        }

    }


    return 0;
}
