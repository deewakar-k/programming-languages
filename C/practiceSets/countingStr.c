#include <stdio.h>
#include <string.h>

int occur(char str[], char c);

#define MAX 100

int main (void)
{
    char str[MAX] = "la, la, la, la, la, la";
    char c;

    printf("enter a character to check its occurence : ");
    scanf("%c", &c);
    
    int count = occur(str, c);
    printf("%c occured %i times \n",c, count);
}
int occur(char str[], char c)
{
    char *p = str;
    int count = 0;
    while(*p != '\0')
    {
        if(*p == c)
        {
            count++;
    
        }
        p++;
    }
    return count;
}