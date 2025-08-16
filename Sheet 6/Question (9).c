#include <stdio.h>

int digit_check(char *str)
{
    if (*str == '\0')
        return 1;
    if (*str < '0' || *str > '9')
        return 0;
    return digit_check(str + 1);
}

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
    printf(digit_check(str) ? "it doesnt have any non digit values" : "there is a non digit value");
    return 0;
}
