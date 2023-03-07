#include <stdio.h>
#include <math.h>

int main (void)
{
    int num;
    int flag = 1;

    printf("number : ");
    scanf("%i", &num);

    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(num <= 1)
    flag = 0;

    if(flag == 1)
    {
        printf("%i is prime number", num);
    }
    else
    {
        printf("%i is not prime number", num);
    }
}