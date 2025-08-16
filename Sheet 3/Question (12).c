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

int n = 100;

void employee_new(struct Employee *record, int n)
{
    printf("you will be asked to enter the employee data (enter -1 in the employee ID to stop) :\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the employee ID : ");
        scanf("%d", &record[i].id_no);
        if (record[i].id_no == -1)
        {
            break;
        }

        printf("enter the employee Salary : ");
        scanf("%d", &record[i].salary);
        printf("enter the employee birth date (dd/mm/yy) : ");
        scanf("%d %d %d", &record[i].birth_date.day, &record[i].birth_date.month, &record[i].birth_date.year);
        printf("enter the employee tasks ID (enter 5 values) : ");
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &record[i].tasks_id[i]);
        }
    }
}

int employee_search(struct Employee *record, int n)
{
    int id_search;
    printf("what is the ID of the employee you want to search about? \n");
    scanf("%d", &id_search);
    for (int i = 0; i < n; i++)
    {
        if (id_search == record[i].id_no)
        {
            return record[i].salary;
            break;
        }
    }
    printf("NOT FOUND!");
    return -1;
}

int main()
{

    struct Employee record[n];
    employee_new(record, n);
    printf("Salary: %d\n", employee_search(record, n));
    printf("\n");
    return 0;
}