#include <stdio.h>

int main (void)
{
    int sum = 0; int num = 10;int i = 0;

    /*for(int i = 0; i < num; i++)
    {
        sum += i;
    }*/

    /*while(i < num)
    {
        sum += i;
        i++; 
    }
    printf("the sum of 10 natural number : %i\n", sum);*/

    do
    {
        sum += i;
        i++;
    }
    while(i < num);

    printf("the sum of 10 natural number : %i\n", sum);
 } 
   
   
    
    
