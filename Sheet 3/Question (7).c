#include <stdio.h>
#include <string.h>

int main()
{
    enum status
    {
        pass,
        fail,
        absent
    };
    enum status stud1, stud2, stud3;
    stud1 = pass;
    stud2 = absent;
    stud3 = fail;
    printf("%d %d %d\n", stud1, stud2, stud3);
    return 0;
}

// the output is 0 2 1 because
// the enum stores the (pass,absent,fail) as values starting from 0.