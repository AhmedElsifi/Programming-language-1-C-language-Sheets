#include <stdio.h>

float area_of_a_triangle(int base, int height)
{
    return (float)0.5 * base * height;
}

int main()
{
    int base, height;
    printf("what is the base length and the hieght of the triangle ? ");
    scanf("%d %d", &base, &height);
    printf("the area of this triangle is = %f", area_of_a_triangle(base, height));
    return 0;
}