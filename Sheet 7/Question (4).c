#include <stdio.h>

int main()
{
    int n, sum = 0, mode;
    char choice;
    printf("how many number do you have? ");
    scanf("%d", &n);
    int arr[n];
    printf("please enter the numbers : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
        sum = sum + arr[i];
    }
    getchar();

    printf("What statistic do you want?\n");
    printf("a - mean\nb - median\nc - mode\n");
    scanf(" %c", &choice);
    if (choice == 'a')
    {
        printf("the mean is %f", sum / (float)n);
    }
    else if (choice == 'b')
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        if (n % 2 == 0)
        {
            printf("the median is %f", (arr[n / 2 - 1] + arr[n / 2]) / 2.0);
        }
        else
        {
            printf("the median is %d", arr[n / 2]);
        }
    }
    else if (choice == 'c')
    {
        int mode = arr[0], maxCount = 0;
        for (int i = 0; i < n; ++i)
        {
            int count = 0;
            for (int j = 0; j < n; ++j)
            {
                if (arr[j] == arr[i])
                    count++;
            }

            if (count > maxCount)
            {
                maxCount = count;
                mode = arr[i];
            }
        }
        if (maxCount == 1)
            printf("No mode (all values appear only once)\n");
        else
            printf("The mode is %d (appears %d times)\n", mode, maxCount);
    }

    return 0;
}
