#include <stdio.h>

int main (void)
{
    int num, tempNum, sum = 0, fact = 1;

    printf("enter number to check murthy no. : ");
    scanf("%i", &num);

    tempNum = num;

    while(tempNum != 0)
    {
        int rem = tempNum % 10;

        for(int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact; 
        tempNum = tempNum / 10;
    }

    if(sum == num)
    {
        printf("%i is murthy no.\n", num);
    }
    else
    {
        printf("%i is not murthy no.\n\n", num);
    }
}