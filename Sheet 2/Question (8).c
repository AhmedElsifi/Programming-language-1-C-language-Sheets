#include <stdio.h>

int main()
{
    int length;
    printf("what is the length of the matrix you want ? \n");
    scanf("%d", &length);
    int arr[length][length];
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i == j || j == 0)
            {
                arr[i][j] = 1;
            }
            else if (i > j)
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (arr[i][j] == 0)
            {
                printf(" ");
            }
            else
            {
                printf("%2d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}