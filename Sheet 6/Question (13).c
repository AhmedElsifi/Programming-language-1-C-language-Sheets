#include <stdio.h>

int main()
{
    union u
    {
        double x;
        int y;
    } a_union;
    struct s
    {
        double x;
        int y;
    } a_struct;
    printf("The size of  a_union:  %d-byte\n", sizeof(a_union));
    printf("The size of a_struct: %d-byte\n", sizeof(a_struct));
}

// The size of  a_union:  8-byte
// The size of a_struct: 16-byte