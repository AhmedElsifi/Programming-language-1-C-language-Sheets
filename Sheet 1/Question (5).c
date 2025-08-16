#include <stdio.h>

void even_or_odd(int x)
{
    if (x % 2 == 0)
    {
        printf("this number is even");
    }
    else
    {
        printf("this number is odd");
    }
}

int main()
{
    int x;
    printf("enter the number you wnat to check if its even or odd : \n");
    scanf("%d", &x);
    even_or_odd(x);
    return 0;
}