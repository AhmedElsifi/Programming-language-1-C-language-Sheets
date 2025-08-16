#include <stdio.h>
#define PI 3.14

void circle_calc(float arr[], int radius)
{
    arr[0] = 2 * PI * radius;
    arr[1] = PI * radius * radius;
}

int main()
{
    int radius;
    float arr[2];
    printf("what is the radius of the circle ? \n");
    scanf("%d", &radius);
    circle_calc(arr, radius);
    printf("the circumference is %.2f the area is %.2f", arr[0], arr[1]);
    return 0;
}