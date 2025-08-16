#include <stdio.h>
#include <string.h>

void concatenateStrings(char *s1, const char *s2)
{
    strcat(s1, s2);
}

int main()
{
    char s1[200], s2[100];

    printf("Enter the first string: ");
    scanf("%s", s1);

    printf("Enter the second string: ");
    scanf("%s", s2);

    concatenateStrings(s1, s2);

    printf("Concatenated String: %s\n", s1);

    return 0;
}
