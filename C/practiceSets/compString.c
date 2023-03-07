#include <stdio.h>
#include <string.h>

#define MAX 100

int main (void)
{
    char s1[MAX];
    char s2[MAX];
    char c;
    int i = 0;

    printf("enter string : ");
    while (c != '\n')
    {
        fflush(stdin); 
        scanf("%c", &c);
        s1[i] = c;
        i++;
    }
    s1[i] = '\0';
    
    printf("enter string again : ");
    scanf("%s", &s2);

    if(strcmp(s1, s2) == 0)
    {
        printf("same >_<\n");
    }
    else
    {
        printf("not same!\n");
    }
}
