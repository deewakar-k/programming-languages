/*#include <stdio.h>

int main (void)
{
    int numbers[] = {20, 100, 5, 10, 500, 1, 300}; //defining array statically

    int n;
    printf("enter a number : ");
    scanf("%i", &n);

    for(int i = 0; i < 7; i++)
    {
        if(numbers[i] == n)
        {
            printf("no. found yay\n");
            return 0;
        }
    }
    printf("no. not found \n");
    return 1;
}*/

#include <stdio.h>
#include<string.h>

#define MAX 100
#define SIZE 50

int main (void)
{
    char str[MAX][SIZE] = {"battleship", "boot", "cannon", "thimble", "iron", "top hat"};

    char s[MAX];
    printf("strings : ");
    gets(s);
    for(int i = 0; i < 6; i++)
    {
        if(strcmp(str[i], s) == 0)
        {
            printf("found yay\n");
            return 0;
        }
    }
    printf("not found booo\n");
    return 1;
}

