#include <cs50.h>
#include <stdio.h>
int main () 
{
   int n = 4;
   for(int row = 1; row <= n; row++)
   {
        for(int col = 1; col <= row; col++ )
        {
            printf("*");
        }
        printf("\n");
   }
}