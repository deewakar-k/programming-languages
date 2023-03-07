/*#include <stdio.h>

int main (void)
{
    int num;
    int fact = 1;

    printf("factortial of : ");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorail of %i : %i\n", num, fact);
}*/

#include <stdio.h>

int main (void)
{
    int num; 
    int fact = 1; 
    int i = 1;

    printf("factorial number : ");
    scanf("%i", &num);

    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("factorial of %i : %i\n\n", num, fact);
}
