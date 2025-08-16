#include <stdio.h>

int main()
{
    int arr[3][4], n;
    printf("enter the numbers you want to store in the array : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("what is the number you want to search ? ");
    scanf("%d", &n);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == n)
            {
                printf("the number %d is found at ( %d , %d )", n, i, j);
                return 0;
            }
        }
    }
    printf("number not found !");
    return 0;
}