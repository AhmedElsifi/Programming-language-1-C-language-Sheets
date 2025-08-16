#include <stdio.h>
#include <string.h>

int main()
{
    struct s
    {
        double x;
        int y;
    } a_struct;
    printf("The size of a_struct: %d-byte\n", sizeof(a_struct));
    return 0;
}

// The size of a_struct: 16 bytes