#include <stdio.h>

int main (void)
{
    int num;
    printf("enter a number : ");
    scanf("%i", &num);

    int *p;
    
    p = &num;

    printf("value of p : %i", *p);
}