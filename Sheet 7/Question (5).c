#include <stdio.h>
#include <string.h>

int replace(char str[], int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
            counter++;
        }
    }
    return counter;
}

int main()
{
    char str[100];
    int space_count;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    space_count = replace(str, strlen(str));
    printf("%s \n", str);
    printf("%d spaces replaced", space_count);
    return 0;
}
