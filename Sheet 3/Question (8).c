#include <stdio.h>
#include <string.h>

int main()
{
    enum days
    {
        MON = -1,
        TUE,
        WED = 6,
        THU,
        FRI,
        SAT
    };
    printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU,
           FRI, SAT);
    return 0;
}

// the program will output -1 0 6 7 8 9
// because the index is reseted in the WED value.