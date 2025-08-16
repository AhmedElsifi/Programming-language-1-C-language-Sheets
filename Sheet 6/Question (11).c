#include <stdio.h>
#include <time.h>

struct date
{
    int day;
    int month;
    int year;
};

struct HealthProfile
{
    char first_name[100];
    char last_name[100];
    char gender[10];
    struct date birthdate;
    int height;
    int weight;
} person;

float BMI_calculator(int weight_kg, int height_cm)
{
    float height_m = height_cm / 100.0;
    return weight_kg / (height_m * height_m);
}

struct date age_calculator(struct date calc_age_date)
{
    int day, month, year;
    struct date age;

    time_t now = time(NULL);
    struct tm local = *localtime(&now);

    day = local.tm_mday;
    month = local.tm_mon + 1;
    year = local.tm_year + 1900;
    age.year = year - calc_age_date.year;
    age.month = month - calc_age_date.month;
    age.day = day - calc_age_date.day;
    if (age.day < 0)
    {
        age.month--;
        age.day += 30;
    }
    if (age.month < 0)
    {
        age.year--;
        age.month += 12;
    }
    return age;
}

int main()
{
    printf("First name : ");
    scanf(" %99[^\n]", person.first_name);
    printf("Last name : ");
    scanf(" %99[^\n]", person.last_name);
    printf("Gender : ");
    scanf(" %9[^\n]", person.gender);
    printf("Date of birth (dd-mm-yyyy) : ");
    scanf("%d %d %d",
          &person.birthdate.day,
          &person.birthdate.month,
          &person.birthdate.year);
    printf("Height : ");
    scanf(" %d", &person.height);
    printf("Weight : ");
    scanf(" %d", &person.weight);
    printf("Profile Summary : \n");
    printf("First name : %s \n", person.first_name);
    printf("Last name : %s \n", person.last_name);
    printf("Gender : %s \n", person.gender);
    printf("Date of birth (dd-mm-yyyy) : %d - %d - %d \n", person.birthdate.day, person.birthdate.month, person.birthdate.year);
    printf("Height : %d \n", person.height);
    printf("Weight : %d \n", person.weight);
    float bmi = BMI_calculator(person.weight, person.height);
    printf("BMI: %.1f\n", bmi);
    struct date age = age_calculator(person.birthdate);
    printf("Age: %d years, %d months, %d days\n",
           age.year, age.month, age.day);
    return 0;
}
