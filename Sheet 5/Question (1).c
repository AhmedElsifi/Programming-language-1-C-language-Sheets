#include <stdio.h>
#include <math.h>
int main()
{
    int arr[10], inc = 1, dec = 1, constant = 1;
    printf("enter 10 numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", arr + i);
    }
    for (int j = 0; j < 9; j++)
    {
        if (*(arr + j) < *(arr + j + 1))
        {
            dec = 0;
            constant = 0;
        }
        else if (*(arr + j) > *(arr + j + 1))
        {
            inc = 0;
            constant = 0;
        }
        else
        {
            inc = 0;
            dec = 0;
        }
    }
    if (inc)
    {
        printf("the numbers in the array are increasing");
    }
    else if (dec)
    {
        printf("the numbers in the array are decreasing");
    }
    else if (constant)
    {
        printf("the numbers in the array are not changing");
    }

    else
    {
        int n = 0;
        while (n < 9 && (*(arr + n) < *(arr + n + 1)))
        {
            n++;
        }
        while (n < 9 && (*(arr + n) > *(arr + n + 1)))
        {
            n++;
        }
        if (n == 9)
        {
            printf("The numbers in the array are increasing and then decreasing.\n");
        }
        else
        {
            printf("The numbers in the array do not follow a specific pattern.\n");
        }
    }

    return 0;
}