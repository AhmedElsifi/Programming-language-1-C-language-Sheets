#include <stdio.h>
#include <string.h>

int main()
{
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
    struct Employee record;
    return 0;
}