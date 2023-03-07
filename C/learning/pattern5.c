#include<stdio.h>
int main()
{
    int n = 4;
    for(int row = 1; row < 2 * n; row++)
    { 
        int totalCol = row > n ? 2*n-row : row;
        for(int col = 1; col <= totalCol; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}