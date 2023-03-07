/*#include <stdio.h>

int main (void)
{
    int i, j;
    printf("i : ");
    scanf("%i", &i);

    printf("j : ");
    scanf("%i", &j);

    if(i == j)
    {
        printf("same\n");
        return 0;
    }
    else
    {
        printf("different\n");
        return 1;
    }
}*/

/*#include <stdio.h>
#include <string.h>

#define max 100

int main (void)
{
    char s[max], t[max];

    printf("s : ");
    gets(s);

    printf("t : ");
    gets(t);

    if(strcmp(s, t) == 0)
    {
        printf("same\n");
       
    }
    else
    {
        printf("different\n");
    }
}*/


#include <stdio.h>
#include <string.h>

#define max 100

int main (void)
{
    char s[max], t[max];

    printf("s : ");
    gets(s);

    printf("t : ");
    gets(t);

    printf("%p\n", s);
    printf("%p\n", t);
}
