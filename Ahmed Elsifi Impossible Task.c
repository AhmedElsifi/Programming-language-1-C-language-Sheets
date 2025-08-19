#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

enum Gender
{
    MALE,
    FEMALE
};

struct user
{
    char userName[50];
    char fullName[256];
    int age;
    enum Gender gender;
    double height;
    double weight;
    int BMI;
};

void BMI_status(FILE *fptr, float BMI)
{
    if (BMI < 18.5)
    {
        fprintf(fptr, "Underweight");
    }
    else if (BMI >= 18.5 && BMI < 25)
    {
        fprintf(fptr, "Normal weight");
    }
    else if (BMI >= 25 && BMI < 30)
    {
        fprintf(fptr, "Overweight");
    }
    else if (BMI >= 30)
    {
        fprintf(fptr, "Obesity");
    }
}

int countUsers(FILE *fp)
{
    char buffer[512];
    int lines = 0;
    rewind(fp);
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        lines++;
    }
    if (lines > 0)
    {
        return lines - 1;
    }
    return 0;
}

void tasktime(struct tm *now)
{
    int hour = now->tm_hour;
    if (hour >= 5 && hour <= 11)
        printf("Time to study C++ 🔥\n");
    else if (hour >= 12 && hour <= 17)
        printf("Go exercise 🏋\n");
    else if (hour >= 18 && hour <= 23)
        printf("Relax or revise!\n");
    else
        printf("Sleep!! 😴\n");
}

int main()
{
    char testcheck[256];
    char choice;
    struct user users[100];

    FILE *DBfileptr;
    DBfileptr = fopen("Health & Fitness.txt", "a+");
    if (DBfileptr == NULL)
    {
        printf("Error opening DataBase file!\n");
        return 1;
    }
    rewind(DBfileptr);
    if (fgets(testcheck, sizeof(testcheck), DBfileptr) == NULL || strcmp(testcheck, "|User Name      |Full Name      |Age            |Gender         |Height         |Weight         |BMI            |\n") != 0)
    {
        fprintf(DBfileptr, "|User Name      |Full Name      |Age            |Gender         |Height         |Weight         |BMI            |\n");
        fflush(DBfileptr);
    }
    int index = countUsers(DBfileptr);
    while (1)
    {
        printf("Welcome To Ahmed Elsifi Health & Fitness Tracker.\n");
        printf("What do you want to do? \n");
        printf("(a) Add a new User \n");
        printf("(b) What to do now ? \n");
        printf("(c) Play Guess the number game \n");
        printf("(d) Exit \n");
        scanf(" %c", &choice);
        if (choice == 'a' || choice == 'A')
        {
            printf("What is The User Name for this user ? \n");
            scanf("%49s", users[index].userName);
            printf("What is The Full Name for this user ? \n");
            scanf(" %[^\n]", users[index].fullName);
            printf("What is The Age for this user ? \n");
            scanf("%d", &users[index].age);
            printf("What is The Gender for this user ? (MALE/FEMALE)\n");
            char genderInput[10];
            scanf("%9s", genderInput);
            if (strcmp(genderInput, "MALE") == 0 || strcmp(genderInput, "Male") == 0 || strcmp(genderInput, "male") == 0)
                users[index].gender = MALE;
            else if (strcmp(genderInput, "FEMALE") == 0 || strcmp(genderInput, "Female") == 0 || strcmp(genderInput, "female") == 0)
                users[index].gender = FEMALE;
            else
                printf("Invalid gender entered, defaulting to MALE\n"), users[index].gender = MALE;
            printf("What is The Height for this user (in cm) ? \n");
            scanf("%lf", &users[index].height);
            printf("What is The Weight for this user (in kg) ? \n");
            scanf("%lf", &users[index].weight);

            users[index].BMI = (int)(users[index].weight / ((users[index].height / 100.0) * (users[index].height / 100.0)));
            fprintf(DBfileptr, "|%-15s|%-15s|%-15d|%-15s|%-15.2f|%-15.2f|%-15d|\n",
                    users[index].userName,
                    users[index].fullName,
                    users[index].age,
                    users[index].gender == MALE ? "MALE" : "FEMALE",
                    users[index].height,
                    users[index].weight,
                    users[index].BMI);
            fflush(DBfileptr);
            index++;
        }
        else if (choice == 'b' || choice == 'B')
        {
            time_t t = time(NULL);
            struct tm *now = localtime(&t);

            printf("Today is %d-%02d-%d and the time is %02d:%02d and now is the time for ",
                   now->tm_mday,
                   now->tm_mon + 1,
                   now->tm_year + 1900,
                   now->tm_hour,
                   now->tm_min);

            tasktime(now);
        }
        else if (choice == 'c' || choice == 'C')
        {
            printf("Welcome To Guess the number Game , Here You Will Guess a number between 1 and 10 , and dont forget you only have 3 tries! \n");
            srand(time(NULL));
            int randomNumber = 1 + rand() % 10, userGuess = 0;
            for (int i = 0; i < 3; i++)
            {
                printf("What's Your Guess ?\n");
                scanf(" %d", &userGuess);
                if (userGuess == randomNumber)
                {
                    printf("Correct Guess! The number was indeed %d \n", randomNumber);
                    break;
                }
                else
                {
                    if (i < 2)
                    {
                        printf("inCorrect Guess! Try Again\n");
                    }
                    else
                    {
                        printf("inCorrect Guess! You Are out of Guesses , the correct number was %d , GAMEOVER! \n", randomNumber);
                    }
                }
            }
        }
        else if (choice == 'd' || choice == 'D')
        {
            return 0;
            fclose(DBfileptr);
        }
        printf("==============================================================================\n");
    }

    fclose(DBfileptr);
}