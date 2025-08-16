#include <stdio.h>

void triangle_type(int x, int y, int z)
{
    if (x + y + z != 180)
    {
        printf("Invalid triangle! The angles must sum to 180 degrees.\n");
        return;
    }

    if (x == y && y == z)
    {
        printf("This triangle is an equilateral triangle.\n");
    }
    else if (x == y || y == z || x == z)
    {
        printf("This triangle is an isosceles triangle.\n");
    }

    if (x < 90 && y < 90 && z < 90)
    {
        printf("This triangle is an acute triangle.\n");
    }
    else if (x == 90 || y == 90 || z == 90)
    {
        printf("This triangle is a right triangle.\n");
    }
    else
    {
        printf("This triangle is an obtuse triangle.\n");
    }
}

int main()
{
    int x, y, z;
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &x, &y, &z);
    triangle_type(x, y, z);
    return 0;
}
