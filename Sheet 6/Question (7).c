#include <stdio.h>

int string_length(const char *str)
{
    if (*str == '\0')
        return 0;
    return 1 + string_length(str + 1);
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("The length of the string is: %d\n", string_length(str) - 1);

    return 0;
}
