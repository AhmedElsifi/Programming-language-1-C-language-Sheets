#include <stdio.h>

int ascending(int *arr, int n)
{
    for (int i = 0; i < 9; i++)
    {
        if (*(arr + i) < *(arr + i + 1))
        {
            continue;
        }
        return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("how many values in the array?");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    ascending(arr, n) ? printf("ascending") : printf("not ascending");
    return 0;
}