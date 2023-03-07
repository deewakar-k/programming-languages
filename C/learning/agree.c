#include<stdio.h>
#include<cs50.h>

int main()
{
    char c;
    printf("\nwill you marry me? ");
    scanf("%c", &c);

    if(c == 'y')
    {
        printf("\n <3 <3 <3 <3 <3 <3 <3 \n");
    }
    else if (c == 'n')
    {
        printf("\n</3 </3 </3 </3 </3 </3 </3 \n");
    }

    return 0;
}
