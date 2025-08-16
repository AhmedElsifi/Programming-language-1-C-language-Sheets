#include <stdio.h>
#include <limits.h>

int difference(int x, int y)
{
    return x - y;
}

int main()
{
    int x, min = INT_MAX, max = INT_MIN;
    for (int i = 1; i <= 10; i++)
    {
        printf("please enter a number (%d numbers left) : \n", 11 - i);
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
        if (x < min)
        {
            min = x;
        }
    }
    printf("the smallest value is %d and the greatest value is %d .\n", min, max);
    printf("the difference between the smallest value and the greatest value is : \n %d - %d = %d ", max, min, difference(max, min));

    return 0;
}