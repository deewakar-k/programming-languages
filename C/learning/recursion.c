#include <stdio.h>

int draw(int n);

int main (void)
{
    int n;
    printf("n : ");
    scanf("%i", &n);

    draw(n);
}
int draw(int n)
{
    if(n <= 0)
    {
        return 0;
    }
    draw(n - 1);  //recursive call

    for(int i = 0; i < n; i++)
    {
        printf("# ");
    }
    printf("\n");
}