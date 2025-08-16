#include <stdio.h>
#include <math.h>

int main()
{
    int rows, sum = 0;
    printf("how many students in this class ? \n");
    scanf("%d", &rows);
    int arr[rows][5];
    printf("enter the grades of each student : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the average for each student is : \n");
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("student no.%d average is = %f \n", i + 1, (float)sum / 5);
    }

    return 0;
}