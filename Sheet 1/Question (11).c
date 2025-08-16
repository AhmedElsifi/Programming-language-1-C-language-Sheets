#include <stdio.h>
#include <string.h>

void reverse(char *s, int l, int r)
{
    if (l < r)
    {
        char t = s[l];
        s[l] = s[r];
        s[r] = t;
        reverse(s, l + 1, r - 1);
    }
}

int main()
{
    char s[100];
    scanf("%99s", s);
    reverse(s, 0, strlen(s) - 1);
    printf("%s", s);
}
