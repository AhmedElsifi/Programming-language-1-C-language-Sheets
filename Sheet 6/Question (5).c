#include <stdio.h>

int main()
{
    int arr[5];
    int sum = 0;
    int *ptr = &sum;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
        *ptr += *(arr + i);
    }
    printf("The sum of the integers is: %d\n", *ptr);
    return 0;
}