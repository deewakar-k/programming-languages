#include <stdio.h>
int address(int i);

int main (void)
{
    int i = 1;
    printf("address of i : %p\n", &i);
    address(i);
}
int address(int i)
{
    printf("address of i : %p\n", &i);
}