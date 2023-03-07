
/*#include <stdio.h>

int main (void)
{
    int num;
    printf("enter a number you want multiplication table of : ");
    scanf("%i", &num);

    for(int i = 0; i <= 10; i++)
    {
        int mul = num * i;
        printf("%i * %i : %i\n", num, i, mul);
    }
}*/


/*#include <stdio.h>

int main (void)
{
    int num;
    printf("multiplication number : ");
    scanf("%i", &num);
    
    for(int i = 10; i >= 0; i--)
    {
        int mul = num * i;
        printf("%i * %i : %i\n", num, i, mul);
    }
}*/

#include <stdio.h>

int main (void)
{
    int num; int sum = 0;

    printf("multiplication number : ");
    scanf("%i", &num);

    for(int i = 0; i <= 10; i++)
    {
        int mul = num * i;
        sum += mul;

        printf("%i * %i : %i | sum : %i\n\n", num, i, mul, sum);
    }
}