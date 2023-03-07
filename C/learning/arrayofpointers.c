#include<stdio.h>
int main()
{
    int *arr[3];

    int p = 40, q = 60, r = 90, i;

    arr[0] = &p;
    arr[1] = &q;
    arr[2] = &r;

    for(i = 0; i < 3; i++)
    {
        printf("address = %d\t and the value of address = %d\n", arr[i], *arr[i]);
    }

return 0;
}