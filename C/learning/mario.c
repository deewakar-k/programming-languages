/*#include<stdio.h>

int main (void)
{
    printf("????\n");
}*/

/*#include<stdio.h>

int main (void)
{
    //get size of grid 
    int n;
    do
    {
        printf("size? : \n");
        scanf("%d", &n);
    } 
    while (n < 1);

    //prints grid of bricks or anything you want to print 
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}*/

#include <stdio.h>

int get_size();
void print_grid(int);

int main(void)
{
    int n = get_size();
    print_grid(n);
}
int get_size(void)
{
    int n;
    do
    {
        printf("size? : \n");
        scanf("%d", &n);
    } while (n < 1);

    return n;
}
void print_grid(int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
