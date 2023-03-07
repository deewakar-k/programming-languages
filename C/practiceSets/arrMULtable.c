#include <stdio.h>

int TABLE(int *table, int num, int size);

int main(void)
{
    int table[3][10];
    int N1, N2, N3;
    int size = 10;

    printf("enter 3 number you want multiplication of : ");
    scanf("%i %i %i", &N1, &N2, &N3);

    TABLE(table[0], N1, size);
    TABLE(table[1], N2, size);
    TABLE(table[2], N3, size);

    
}
int TABLE(int *table, int num, int size)
{
    for(int i = 0; i < size; i++)
    {
        table[i] = num * i;
    }
    for(int i = 0; i < size; i++)
    {
        printf("%i * %i : %i\n", num, i+1, table[i]);
    }
    printf("______________________________________________________________\n");
}



