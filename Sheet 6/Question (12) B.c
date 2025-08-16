#include <stdio.h>
int add_two(int x, int y)
{
    static int counter = 1;
    printf("This is the function call of %d,\n", counter++);
    return (x + y);
}

/* the main function */
int main()
{
    int i, j;
    for (i = 0, j = 5; i < 5; i++, j--)
        printf("the addition of %d and %d is %d.\n\n", i, j, add_two(i, j));
    return 0;
}

// This is the function call of 1,
// the addition of 0 and 5 is 5.

// This is the function call of 2,
// the addition of 1 and 4 is 5.

// This is the function call of 3,
// the addition of 2 and 3 is 5.

// This is the function call of 4,
// the addition of 3 and 2 is 5.

// This is the function call of 5,
// the addition of 4 and 1 is 5.