#include <stdio.h>
int main()
{
    float rice,sugar;
    printf("Give the price of rice(in Rs.): ");
    scanf("%f",&rice);
    printf("Give the price of sugar(in Rs.): ");
    scanf("%f",&sugar);
    printf("\n***LIST OF ITEMS***\n");
    printf("Item \tPrice\n");
    printf("Rice \tRs %.2f\n",rice);
    printf("Sugar\tRs %.2f",sugar);
}