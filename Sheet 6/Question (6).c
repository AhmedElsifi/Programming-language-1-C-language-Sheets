#include <stdio.h>
#include <limits.h>
int max(int *arr, int size)
{
    int max_num = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) > max_num)
        {
            max_num = *(arr + i);
        }
    }
    return max_num;
}

int main()
{
    int arr[8];
    printf("enter 8 numbers : ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", arr + i);
    }
    printf("the greatest number is : %d", max(arr, 8));
    return 0;
}