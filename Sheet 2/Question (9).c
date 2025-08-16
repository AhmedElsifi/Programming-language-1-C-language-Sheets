#include <stdio.h>

void reverse(int arr[], int arr_size, int rev_arr[])
{
    for (int i = 0; i < arr_size; i++)
    {
        rev_arr[i] = arr[arr_size - i - 1];
    }
}

int main()
{
    int n;
    printf("what is the size of the array you want to reverse : ");
    scanf("%d", &n);
    int arr[n];
    printf("please enter %d numbers : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int rev_arr[n];
    reverse(arr, n, rev_arr);
    printf("Reversed array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rev_arr[i]);
    }

    printf("\n");
    return 0;
}