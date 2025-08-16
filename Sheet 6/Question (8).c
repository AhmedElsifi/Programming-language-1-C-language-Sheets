#include <stdio.h>

int count_spaces(const char *str)
{
    if (*str == '\0')
        return 0;
    if (*str == ' ')
        return 1 + count_spaces(str + 1);
    return count_spaces(str + 1);
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("The number of spaces in the string is: %d\n", count_spaces(str));

    return 0;
}
