/*#include<stdio.h>
#define str(s) #s
int main ()
{
    printf("%s", str(OK Mommy));
}*/

#include<stdio.h>
#define PRINT(i, limit)                \
        while(i < limit)                \
        {                              \
            printf("\ndaksh is genius\n"); \
            i++;                       \
        }

int main (void)
{
    int i = 0;
    PRINT(i, 5);
}                              
