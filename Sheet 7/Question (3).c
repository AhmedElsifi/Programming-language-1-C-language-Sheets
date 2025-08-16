#include <stdio.h>

int linear_search(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[10], x;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", arr + i);
    }
    printf("what is the number you want to search?");
    scanf("%d", &x);
    int index = linear_search(arr, 10, x);
    if (index != -1)
    {
        printf("the number is at index %d", index);
    }
    else
    {
        printf("not found");
    }
    return 0;
}
