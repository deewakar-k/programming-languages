#include<stdio.h>

int main (void)
{
    int n;
    printf("enter a number to check natural number : ");
    scanf("%i", &n);

    if(n > 0)
        printf("it is a natural number \n");
    else if(n < -1)
        printf("it is a negative number hence it is not a natural number \n");
}