#include <stdio.h>

int main (void)
{
    int n, m;
    printf("row size : ");
    scanf("%i", &n);
    printf("column size : ");
    scanf("%i", &m);

    for(int row = 1; row <= n; row++)
    {
        for(int col = 1; col <= m; col++)
        {
            if(row == 1 || col == 1 || row == n || col == m)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}