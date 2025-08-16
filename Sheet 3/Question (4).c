#include <stdio.h>
#include <string.h>

int checker(char s1[], char s2[], int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        if (s1[0] == s2[i])
        {
            for (int j = 0; j < n && j + i < m; j++)
            {
                if (s1[j] == s2[j + i])
                {
                    continue;
                }
                else
                {
                    return 0;
                }
            }
            return 1;
        }
    }
    return 0;
}

int main()
{
    char s1[100], s2[100];
    printf("enter the first string : \n");
    scanf("%s", s1);
    printf("enter the second string : \n");
    scanf("%s", s2);
    printf("%d", checker(s1, s2, strlen(s1), strlen(s2)));
    return 0;
}