#include <stdio.h>

int main()
{
    int rows, columns;
    printf("how many rows and columns in this matrix ? \n");
    scanf("%d %d", &rows, &columns);
    int arr[rows][columns];
    printf("enter the numbers you want in the matrix : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int symmetric_flag = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric_flag = 0;
            }
        }
    }
    if (symmetric_flag)
    {
        printf("the matrix is symmetric");
    }
    else
    {
        printf("the matrix is not symmetric");
    }
    return 0;
}