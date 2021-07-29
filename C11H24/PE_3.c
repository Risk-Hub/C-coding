#include <stdio.h>
struct time_struct
{
    int hour, min, sec;
} time;
struct time_struct update(struct time_struct time);
int main()
{
    struct time_struct time, k;
    printf("\nEnter the time in hh:mm:ss format: ");
    scanf("%d%d%d", &time.hour, &time.min, &time.sec);
    k = update(time);
    printf("\nThe updated time is hh:mm:ss::%2d:%2d:%2d", k.hour, k.min, k.sec);
}
struct time_struct update(struct time_struct time)
{
    time.sec += 1;
    if (time.sec == 60)
    {
        time.sec = 0;
        time.min += 1;
        if (time.min == 60)
        {
            time.min = 0;
            time.hour += 1;
            if (time.hour == 24)
            {
                time.hour = 0;
            }
        }
    }
    return time;
}