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
    int max_sum = -1, max_row_index = 0;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > max_sum)
        {
            max_sum = sum;
            max_row_index = i;
        }
    }

    printf("the row with the maximum sum is : \n");
    for (int x = 0; x < columns; x++)
    {
        printf("%d ", arr[max_row_index][x]);
    }

    return 0;
}