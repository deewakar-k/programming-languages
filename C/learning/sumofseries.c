#include<stdio.h>

int main () 
{
    int n = 1, c, lim;
    float sum = 0.0, fact;

    printf("enter the number of terms\n");
    scanf("%d", &lim);

    while(n <= lim)
    {
        fact = 1;
        for (c = 1; c <= n; c++)
        {
            fact = fact * c;
        }

        sum = sum + (n/fact);
        
        n++;
    }
    printf("Sum of serires of %d terms is %.2f", lim, sum);

    return 0;
}