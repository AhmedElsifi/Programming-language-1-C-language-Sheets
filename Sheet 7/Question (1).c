#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    bool sorted = true;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    }
    if (sorted)
        printf("Sorted\n");
    else
        printf("Not sorted\n");

    return 0;
}
