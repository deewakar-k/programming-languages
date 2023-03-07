/*#include <stdio.h>

int main (void)
{
    int num;
    printf("rows : ");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= num + 1 - i; j++)
        {
            printf("%i ", j);
        }
        printf("\n");
    }
}*/

#include <stdio.h>

int main (void)
{
    int num;
    printf("rows : ");
    scanf("%i", &num);

    for(int i = 1; i <= num; i++)
    {
        int flag = 1;
        for(int j = 1; j <= i; j++)
        {
            printf("%i ", flag);
            flag += 2;
        }
        printf("\n");
    }
}