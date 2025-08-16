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
    int zeros = 0, non_zeros = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == 0)
            {
                zeros++;
            }
            else
            {
                non_zeros++;
            }
        }
    }
    if (zeros > non_zeros)
    {
        printf("this matrix is a sparse matrix");
    }
    else
    {
        printf("this matrix is not a sparse matrix");
    }
    return 0;
}