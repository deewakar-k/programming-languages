#include <stdio.h>

int main (void)
{
    int i = 69;
    int *p = &i;
    int **dp = &p;

    printf("value of i : %i", **dp);
}