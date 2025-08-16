#include <stdio.h>

int main()
{
    char string[]={'A','h','m','e','d','\0'};
    char *string_ptr=string;
    printf("%s",string_ptr);
    return 0;
}