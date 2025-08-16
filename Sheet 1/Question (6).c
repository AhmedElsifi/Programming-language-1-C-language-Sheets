#include <stdio.h>

void check(int a, int b)
{
    if (a > b)
        printf("%d > %d", a, b);
    else if (a < b)
        printf("%d < %d", a, b);
    else
        printf("%d = %d", a, b);
}

int main()
{
    int a, b;
    printf("please enter the two numbers you want to check : \n");
    scanf("%d %d", &a, &b);
    check(a, b);
    return 0;
}