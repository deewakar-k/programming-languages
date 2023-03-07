#include<stdio.h>
int main ()
{
    int draw, n1, n2, n3;
    printf("Enter amount to be withdrawn : \n");
    scanf("%d", &draw);

    n1 = ((draw % 100) % 50) / 10;
    n2 = ((draw % 100) / 50);
    n3 = (draw / 100);

    printf("Note of 10 : %d\n", n1);
    printf("\nNote of 50 : %d\n", n2);
    printf("\nNote of 100 : %d\n", n3);

    return 0;
}