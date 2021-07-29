#include <stdio.h>
struct time_struct
{
    int hour, minute, second;
} time;
int main()
{
    struct time_struct time;
    time.hour = 16;        //nss wala?
    time.minute = 40;
    time.second = 51;
    printf("\n%d:%d:%d", time.hour, time.minute, time.second);
}