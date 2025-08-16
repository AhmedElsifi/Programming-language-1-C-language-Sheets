#include <stdio.h>

struct user_info
{
    char name[100];
    int age;
    int us_citizen;
    union
    {
        char state[50];
        char country[50];
    } origin;
};

int main()
{
    struct user_info user;
    char answer;
    printf("Name :");
    scanf(" %[^\n]", user.name);
    printf("Age :");
    scanf("%d", &user.age);
    printf("are you a US citizen ?\n");
    scanf(" %c", &answer);
    if (answer == 'Y' || answer == 'y')
    {
        printf("what state?");
        scanf(" %[^\n]", user.origin.state);
    }
    else if (answer == 'N' || answer == 'n')
    {
        printf("what country?");
        scanf(" %[^\n]", user.origin.country);
    }
    printf("\n--- User Info ---\n");
    printf("Name: %s\n", user.name);
    printf("Age: %d\n", user.age);
    if (answer == 'Y' || answer == 'y')
    {
        printf("U.S. Citizen from: %s\n", user.origin.state);
    }
    else
    {
        printf("Non-U.S. Citizen from: %s\n", user.origin.country);
    }
    return 0;
}
