#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 50

struct Student
{
    int ID;
    char name[50];
    int grd[5];
};

typedef enum
{
    Excellent,
    Good,
    Average,
    Fail
} performance_level;

struct Std_avgs
{
    int ID;
    float avg;
} avgs[MAX_STUDENTS];

int student_count = 0;

struct Student std[MAX_STUDENTS];

int sum_of_grades(int grd[], int size)
{
    if (size == 0)
        return 0;
    return grd[size - 1] + sum_of_grades(grd, size - 1);
}

performance_level get(int grd[], int size)
{
    float avg = sum_of_grades(grd, size) / (float)size;
    if (avg >= 90)
        return Excellent;
    else if (avg >= 75)
        return Good;
    else if (avg >= 50)
        return Average;
    else
        return Fail;
}

void grade_to_string(performance_level grade)
{
    if (grade == Excellent)
        printf("Excellent");
    else if (grade == Good)
        printf("Good");
    else if (grade == Average)
        printf("Average");
    else if (grade == Fail)
        printf("Fail");
}

void std_display(int i)
{
    printf("\nID: %d\n", std[i].ID);
    printf("Name: %s\n", std[i].name);
    for (int j = 0; j < 5; j++)
    {
        printf("Grade %d = %d\n", j + 1, std[i].grd[j]);
    }
    printf("Performance: ");
    grade_to_string(get(std[i].grd, 5));
    printf("\n");
}

int student_search(struct Student std[], int size, int search_ID)
{
    for (int i = 0; i < size; i++)
    {
        if (std[i].ID == search_ID)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char choice;
    int avg, highest;
    while (1)
    {
        printf("what do you want to do? \n");
        printf("a)add students (max=50) \n");
        printf("b)update a student grades \n");
        printf("c)display a student's details along with thier performance level \n");
        printf("d)Show the student with the highest average \n");
        printf("e)Find a student by ID \n");
        printf("f)Exit \n");
        scanf(" %c", &choice);
        if (choice == 'a')
        {
            printf("Adding students (max=%d, enter 0 to stop)\n", MAX_STUDENTS);
            while (student_count < MAX_STUDENTS)
            {
                printf("ID: ");
                scanf("%d", &std[student_count].ID);
                if (std[student_count].ID == 0)
                    break;
                printf("Name: ");
                scanf("%s", std[student_count].name);
                for (int j = 0; j < 5; j++)
                {
                    printf("Grade %d: ", j + 1);
                    scanf("%d", &std[student_count].grd[j]);
                }
                student_count++;
            }
        }
        else if (choice == 'b')
        {
            printf("Choice : b)update a student grades (enter the student ID to select a student) : \n");
            int ID;
            scanf("%d", &ID);
            int student_index = student_search(std, MAX_STUDENTS, ID);
            if (student_index == -1)
            {
                printf("Student not found.\n");
                continue;
            }
            std_display(student_index);
            printf("New ID : ");
            scanf("%d", &std[student_index].ID);
            printf("New name : ");
            scanf("%s", std[student_index].name);
            for (int j = 0; j < 5; j++)
            {
                printf("New grade %d : ", j);
                scanf("%d", &std[student_index].grd[j]);
            }
        }
        else if (choice == 'c')
        {
            printf("Choice : c)display a student's details along with thier performance level (enter the student ID to select a student) : \n");
            int ID;
            scanf("%d", &ID);
            int student_index = student_search(std, MAX_STUDENTS, ID);
            std_display(student_index);
        }
        else if (choice == 'd')
        {
            printf("Choice : d)Show the student with the highest average \n");
            for (int i = 0; i < MAX_STUDENTS; i++)
            {
                avgs[i].avg = sum_of_grades(std[i].grd, 5) / 5.0;
                avgs[i].ID = std[i].ID;
            }
            float max_avg = 0;
            int max_ID;
            for (int i = 0; i < MAX_STUDENTS; i++)
            {
                if (avgs[i].avg > max_avg)
                {
                    max_avg = avgs[i].avg;
                    max_ID = avgs[i].ID;
                }
            }
            int student_index = student_search(std, MAX_STUDENTS, max_ID);
            printf("the student with max ID details : \n");
            std_display(student_index);
        }
        else if (choice == 'e')
        {
            printf("Choice : e)Find a student by ID (enter the ID): \n");
            int ID;
            scanf("%d", &ID);
            int student_index = student_search(std, MAX_STUDENTS, ID);
            if (student_index == -1)
                printf("Student not found.\n");
            else
                std_display(student_index);
        }
        else if (choice == 'f')
        {
            printf("thanks for using my program");
            return 0;
        }
    }
    return 0;
}