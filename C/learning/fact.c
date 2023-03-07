#include<stdio.h>
int recur(int);

int main()
{
    int n, fact;
    printf("enter any number to check factorial: ");
    scanf("%d", &n);

    fact = recur(n);
    printf("Factorial is %d", fact);
}
int recur(int x)
{
    int f;

    if(x==1)
    {
        return 1;
    }
    else
    {
        f= x* recur(x - 1);
    }

    return f;
}
