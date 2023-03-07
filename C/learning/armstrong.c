#include<stdio.h>

int main (void)
{
    int num, count = 0, result = 0, mul = 1, c1, r;
    printf("enter a number brother : ");
    scanf("%d", &num);

//counting number of digits 
    int n = num;
    while(n != 0)
    {
        n = n/10; //quotient finder
        count++;
    }

    c1 = count;
    n = num;

    while(n != 0)
    {
        r = n % 10;   //remainder finder
        while(c1 != 0)
        {
            mul = mul * r;
            c1--;
        }
        result = result + mul;
        c1 = count;
        n = n/10;
        mul = 1;
    }
    if(result == num)
        printf("it is an armstrong number \n");
    else
        printf("it is not an armstrong number \n");
}