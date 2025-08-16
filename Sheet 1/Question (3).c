#include <stdio.h>

int greatest_num(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else if (z > y && z > x)
        return z;
    else
        return x;
}

int main()
{
    int x, y, z;
    printf("please enter the three numbers you want to compare : \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("the greatest value is : %d", greatest_num(x, y, z));
    return 0;
}