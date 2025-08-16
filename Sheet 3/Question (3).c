#include <stdio.h>
#include <string.h>

int no_of_occurrences(char s1[], int n, char c)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == c)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    char s1[100], c;
    printf("enter the string : \n");
    scanf("%s", s1);
    printf("enter the character you want to check : \n");
    scanf(" %c", &c);
    printf("the character %c occurred for %d times in the string %s .", c, no_of_occurrences(s1, 100, c), s1);
    return 0;
}