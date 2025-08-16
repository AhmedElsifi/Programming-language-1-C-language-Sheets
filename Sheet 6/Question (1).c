#include <stdio.h>

int main()
{
    int x=25;
    int *xptr=&x;
    printf("%d",*xptr);
    return 0;
}