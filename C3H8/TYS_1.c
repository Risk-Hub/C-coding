#include <stdio.h>
int main()
{
    int age, m1, m2, m3, m4, m5;
    char name;
    printf("Enter student's name: ");
    scanf("%c", &name);
    printf("Enter student's age: ");
    scanf("%d", &age);
    printf("Enter 5 subject marks: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    printf("Your inputted details are:\n");
    printf("Name: %c\nAge: %d\n5subject marks: %d %d %d %d %d", name, age, m1, m2, m3, m4, m5);
}