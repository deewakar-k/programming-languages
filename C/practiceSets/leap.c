#include <stdio.h>

int main(void)
{
    int year;
    printf("year : ");
    scanf("%i", &year);

    if(year % 4 == 0)
    {
        printf("%i is a leap year >_<\n", year);
    }
    else
    {
        printf("%i is not a leap year\n", year);
    }
}