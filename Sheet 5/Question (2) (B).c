#include <stdio.h>

int main()
{
    int array[10] = {2, 5, 9, 0, 3, 7, 2};
    int *data_ptr;
    int value;
    data_ptr = &array[0];
    value = *data_ptr++;
    printf("%d\n", value);
    value = *++data_ptr;
    printf("%d\n", value);
    value = ++*data_ptr;
    printf("%d\n", value);
    value = *data_ptr;
    printf("%d\n", value);
}

/**
it will print

2
9
10
10

**/