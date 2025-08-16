#include <stdio.h>

char num_grd_to_ltr_grd(int x, int y, int z)
{
    float avg = (x + y + z) / 3;
    if (avg < 50)
    {
        return 'F';
    }
    else if (avg < 70)
    {
        return 'C';
    }
    else if (avg < 90)
    {
        return 'B';
    }
    else if (avg <= 100)
    {
        return 'A';
    }
}

int main()
{
    int grd1, grd2, grd3;
    printf("please enter the three numbers you want to check the letter grade of their average : \n");
    scanf("%d %d %d", &grd1, &grd2, &grd3);
    printf("the letter grade of the average is : %c", num_grd_to_ltr_grd(grd1, grd2, grd3));
    return 0;
}
