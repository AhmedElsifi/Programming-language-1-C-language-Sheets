#include <stdio.h>

int main()
{
    char arr[10];
    int position = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", arr + i);
        if (*(arr + i) == 'z')
        {
            position = i + 1;
        }
    }
    position ? printf("'z' position is %d", position) : printf("'z' is not found");
    return 0;
}