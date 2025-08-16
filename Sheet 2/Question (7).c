#include <stdio.h>

int main()
{
    int length;
    printf("what is the length of the matrix you want?\n");
    scanf("%d", &length);
    int arr[length][length]; // Matrix declaration

    // Fill the matrix
    for (int i = 0; i < length; i++)
        for (int j = 0; j < length; j++)
            arr[i][j] = (i == j) ? 0 : (i > j ? -1 : 1);

    // Print the matrix
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
            printf("%3d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
