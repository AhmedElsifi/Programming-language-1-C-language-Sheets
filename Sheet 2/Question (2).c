#include <stdio.h>
#include <stdbool.h>

bool checker(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    printf("how many numbers do you want to enter ? \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (checker(arr, n))
    {
        printf("The array is sorted in ascending order.\n");
    }
    else
    {
        printf("The array is not sorted in ascending order.\n");
    }
    return 0;
}