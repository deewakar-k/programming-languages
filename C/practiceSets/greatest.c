#include <stdio.h>

int main (void)
{
    int n1, n2, n3, n4;
    printf("enter 4 number to find greatest among : ");
    scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

    if(n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf("%i is the largest number \n", n1);
    }
    else if(n2 > n1 && n2 > n3 && n2 > n4)
    {
         printf("%i is the largest number \n", n2);
    }
    else if(n3 > n1 && n3 > n2 && n3 > n4)
    {
         printf("%i is the largest number \n", n3);
    }
    else if(n4 > n1 && n4 > n2 && n4 > n3)
    {
         printf("%i is the largest number \n", n4);
    }
}