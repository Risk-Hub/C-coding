#include <stdio.h>
int main()
{
    int physics, chemistry, maths;
    printf("\nEnter the marks of physics, chemistry and maths resp: ");
    scanf("%d%d%d", &physics, &chemistry, &maths);
    if ((maths >= 60 && physics >= 50 && chemistry >= 40) || (maths + physics >= 150))
    {
        printf("\nCANDIDATE IS ELIGIBLE");
    }
    else
    {
        printf("\nCANDIDATE IS INELIGIBLE");
    }
}