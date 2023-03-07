// call by reference

#include <stdio.h>

int changer(int *p);

int main (void)
{
    int num = 10;
    printf("value of num before change : %i", num);

    changer(&num);

    printf("after chnage : %i", num);
}
int changer(int *num)
{
    *num = *num * 10;
}

//call by val

#include <stdio.h>

void change(int num);

int main (void)
{
    int num = 50;
    printf("before change : %i\n", num);

    change(num);

    printf("after change : %i", num);
}
void change(int num)
{
    num = num * 10;
}