#include <stdio.h>
#include <string.h>

int main()
{
    char str[10], z;
    printf("what is the characters you want to type ? \n");
    scanf("%s", &str);
    printf("what is the character you want to search ? \n");
    scanf(" %c", &z);
    for (int i = 0; i < 10; i++)
    {
        if (str[i] == z)
        {
            printf("the character is found at %d", i + 1);
            return 0;
        }
    }
    printf("the character is not found");
    return 0;
}