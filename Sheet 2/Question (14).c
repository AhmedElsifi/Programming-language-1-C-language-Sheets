#include <stdio.h>
#include <limits.h>

void checker(int arr[], int n, float results_array[], int res_size)
{
    int sum = 0;
    results_array[0] = INT_MIN;
    results_array[1] = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (arr[i] > results_array[0])
        {
            results_array[0] = arr[i];
        }
        if (arr[i] < results_array[1])
        {
            results_array[1] = arr[i];
        }
    }
    results_array[2] = sum / n;
}

int main()
{
    int n;
    float results_array[3]; // to store (maximum value,minimum value,average) so we can return more than one value
    printf("how many numbers do you want to enter ? \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    checker(arr, n, results_array, 3);
    printf("the min is %.0f and the max is %.0f and the average is %.2f", results_array[1], results_array[0], results_array[2]);
    return 0;
}