#include <stdio.h>

int is_prime(int n, int div)
{
    if (n % div == 0)
    {
        return 0;
    }
    else if (div == n / 2)
    {
        return 1;
    }
    else
    {
        return is_prime(n, div + 1);
    }
}

int main()
{
    int n, div = 2;
    printf("enter the number you want to check : \n");
    scanf("%d", &n);
    is_prime(n, div) ? printf("%d is a prime number.", n) : printf("%d is not a prime number.", n);
    return 0;
}