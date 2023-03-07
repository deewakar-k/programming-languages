
/*#include<stdio.h>
#include<string.h>

#define MAX 100

int main(void)
{
    char s[MAX];
    printf("before : ");
    gets(s);

    printf("\nafter : ");
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAX 100

int main (void)
{
    char s[MAX];
    printf("before : ");
    gets(s);

    printf("\nafter : ");
    for(int i = 0, n = strlen; i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}