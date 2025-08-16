#include <stdio.h>

int sum_of_n(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum_of_n(n - 1);
    }
}

int main()
{
    int n;
    printf("how many natural numbers do you want the sum of ? \n");
    scanf("%d", &n);
    printf("The sum of the first %d natural numbers is %d\n", n, sum_of_n(n));
    return 0;
}