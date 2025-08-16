#include <stdio.h>

int main()
{
    int arr[10], sum_even = 0, sum_odd = 0;
    printf("please enter the 10 numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", arr + i);
        if (*(arr + i) % 2 == 0)
        {
            sum_even = sum_even + *(arr + i);
        }
        else if (*(arr + i) % 2 != 0)
        {
            sum_odd = sum_odd + *(arr + i);
        }
    }
    printf("the sum of all odd numbers is %d and the sum of all even numbers is %d ", sum_odd, sum_even);
    return 0;
}