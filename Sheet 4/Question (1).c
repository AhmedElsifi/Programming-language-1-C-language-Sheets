#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[10], min = INT_MAX, max = INT_MIN, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + *(arr + i);
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
        if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
    }
    printf("max= %d,min= %d,avg= %.2f", max, min, sum / 10.0);
    return 0;
}