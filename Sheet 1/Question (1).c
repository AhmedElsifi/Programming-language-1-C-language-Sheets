#include <stdio.h>

int main()
{
    int x, y;
    float result;
    char opt;
    while (1)
    {
        printf("\nChoose an operation:\n a) Addition\n b) Subtraction\n c) Multiplication\n d) Division\n e) Exit\nEnter your choice: ");
        scanf(" %c", &opt);
        if (opt == 'e')
        {
            printf("Exiting the program...\n");
            return 0;
        }
        printf("Enter the first number: ");
        scanf("%d", &x);
        printf("Enter the second number: ");
        scanf("%d", &y);
        if (opt == 'a')
            printf("%d + %d = %d\n", x, y, x + y);
        else if (opt == 'b')
            printf("%d - %d = %d\n", x, y, x - y);
        else if (opt == 'c')
            printf("%d * %d = %d\n", x, y, x * y);
        else if (opt == 'd')
        {
            if (y == 0)
            {
                printf("Error: Division by zero is undefined.\n");
                continue;
            }
            printf("%d / %d = %.2f\n", x, y, (float)x / y);
        }
        else
            printf("Invalid option! Please enter a valid choice (a, b, c, d, or e).\n");
    }
    return 0;
}
