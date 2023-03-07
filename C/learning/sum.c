
/*#include <stdio.h>
int sum(int);

int main()
{
    int n, result;
    printf("enter any number: ");
    scanf("%d", &n);

    result = sum(n);
    printf("Sum is %d", result);
}
int sum(int n)
{
    int s;
    if(n==0)
    {
        return 0;
    }

    s = n % 10 + sum(n / 10);

    return s;
}*/

#include <stdio.h>

int sum(int, int);

int main()
{
    int a, b, result;
    printf("Enter numbers to add \n");
    scanf("%d %d", &a, &b);

    printf("your sum is %d", sum(a, b));
}
int sum(int n1, int n2)
{
   
    return (n1 + n2);
}

