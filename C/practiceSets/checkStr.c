/*#include <stdio.h>
#include <string.h>

#define MAX 100

int main (void)
{
    char str[] = "boobies";
    char c;
    int flag = 0;

    printf("enter char to check : ");
    scanf("%c", &c);

    for(int i = 0; i < strlen(str); i++)
    {
        char *p = str;
        if(p[i] == c)
        {
            flag = 1;
            printf("present >_<\n");
            break;
        }
    }
    if(flag == 0)
    {
        printf("not present -_-\n");
    }

}*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int main (void)
{
    char str[] = "boobies";
    char c;
    int flag = 0;

    printf("enter char to check : ");
    scanf("%c", &c);

    for(int i = 0; i < strlen(str); i++)
    {
        char *p = str;
        if(p[i] == c)
        {
            flag = 1;
            printf("present >_<\n");
            break;
        }
    }
    if(flag == 0)
    {
        printf("not present -_-\n");
    }
}

