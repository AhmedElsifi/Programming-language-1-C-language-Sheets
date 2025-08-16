#include <stdio.h>

int main()
{
    struct Time
    {
        int seconds;
        int minutes;
        int hours;
    } first_time, second_time, resultant_time;
    printf("Input the first time(hours minutes seconds):");
    scanf("%d %d %d", &first_time.hours, &first_time.minutes, &first_time.seconds);
    printf("Input the second time(hours minutes seconds):");
    scanf("%d %d %d", &second_time.hours, &second_time.minutes, &second_time.seconds);
    resultant_time.seconds = first_time.seconds + second_time.seconds;
    resultant_time.minutes = first_time.minutes + second_time.minutes;
    resultant_time.hours = first_time.hours + second_time.hours;
    while (1)
    {
        if (resultant_time.seconds >= 60)
        {
            resultant_time.seconds -= 60;
            resultant_time.minutes++;
        }
        if (resultant_time.minutes >= 60)
        {
            resultant_time.minutes -= 60;
            resultant_time.hours++;
        }
        if (resultant_time.hours >= 24)
        {
            resultant_time.hours -= 24;
        }
        if (resultant_time.hours < 24 && resultant_time.minutes < 60 && resultant_time.seconds < 60)
        {
            break;
        }
    }
    printf("Resultant Time: %d:%d:%d", resultant_time.hours, resultant_time.minutes, resultant_time.seconds);
    return 0;
}