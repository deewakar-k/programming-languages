#include <stdio.h>

int main (void)
{
    float income;
    float tax;

    printf("enter the income amount you pay to government : ");
    scanf("%f", &income);

    if(income >= 250000 && income <= 500000)
    {
        tax += 0.5 * (income - 250000);
    }
    if(income >= 500000 && income <= 1000000)
    {
        tax += 0.20 * (income - 500000);
    }
    if(income >= 1000000)
    {
        tax += 0.30 * (income - 1000000);
    }
    printf("you need to pay %.2f\n\n", tax);
}