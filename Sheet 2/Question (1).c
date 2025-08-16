#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[10], min = INT_MAX, max = INT_MIN, sum = 0;
    printf("enter the numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("min=%d max=%d avg=%.2f", min, max, sum / 10.0);
}
