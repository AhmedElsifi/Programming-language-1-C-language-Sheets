#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n)
{
    bool swapped;
    int counter;
    do
    {
        swapped = false;
        counter = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                counter++;
                swapped = true;
            }
        }
    } while (counter > 0);
}

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
