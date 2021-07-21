#include <stdio.h>
int main()
{
    float call, price;
    int code;
    printf("\nEnter the customer code: ");
    scanf("%d", &code);
    printf("\nEnter the number of calls: ");
    scanf("%f", &call);
    printf("\nCustomer code: %d", code);
    if (call > 100)
    {
        printf("\nCall cost: Rs. %.2f", 250.0 + ((call - 100.0) * 1.25));
    }
    else
    {
        printf("\nCall cost: Rs. %.2f", call);
    }
}