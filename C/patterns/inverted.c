#include <stdio.h>

int main (void)
{
    int num;
    printf("rows : ");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= num + 1 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}