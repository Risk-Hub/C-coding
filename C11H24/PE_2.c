#include <stdio.h>
struct time_struct
{
    int hour, min, sec;
} time;
struct time_struct input(struct time_struct time);
struct time_struct output(struct time_struct time);
int main()
{
    time = input(time);
    output(time);
}
struct time_struct input(struct time_struct time)
{
    printf("\nEnter the time in hh:mm:ss:: ");
    scanf("%d %d %d", &time.hour, &time.min, &time.sec);
    return time;
}
struct time_struct output(struct time_struct time)
{
    printf("\nYour inputted time is %d:%d:%d", time.hour, time.min, time.sec);
}