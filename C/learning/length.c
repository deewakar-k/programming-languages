/*#include<stdio.h>
#include<string.h>

#define MAX 100

int main (void)
{
    char name[MAX];
    printf("What's you name buddy - ");
    gets(name);
    
    int n = strlen(name);
    printf("%i", n);
}*/

#include<stdio.h>

#define MAX 100

 int main (void)
 {
    char str[MAX];
    printf("Enter String - ");
    gets(str);

    int n = 0;
    while(str[n] != '\0')
    {
        n++;
    }
    printf("%s : length is - %i", str, n);
 }


