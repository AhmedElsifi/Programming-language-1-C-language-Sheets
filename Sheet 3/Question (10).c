#include <stdio.h>
#include <string.h>

struct date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id_no;
    int salary;
    struct date birth_date;
    int tasks_id[5];
};

void employee_new(struct Employee *record)
{
    printf("enter the employee ID : ");
    scanf("%d", &record->id_no);
    printf("enter the employee Salary : ");
    scanf("%d", &record->salary);
    printf("enter the employee birth date (dd/mm/yy) : ");
    scanf("%d %d %d", &record->birth_date.day, &record->birth_date.month, &record->birth_date.year);
    printf("enter the employee tasks ID (enter 5 values) : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &record->tasks_id[i]);
    }
    printf("This employee ID is %d and he has a salary value of %d ,\nhe was born on %d-%d-%d and he is assigned to the tasks with the folowing ID's : ", record->id_no, record->salary, record->birth_date.day, record->birth_date.month, record->birth_date.year);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", record->tasks_id[i]);
    }
}

int main()
{

    struct Employee record;
    employee_new(&record);
    return 0;
}