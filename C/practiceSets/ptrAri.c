#include <stdio.h>

int main (void)
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int *p = &arr[0];
    p = p + 2;
    if(p == &arr[2])
    {
        printf("it points\n");
    }
    else
    {
        printf("it is not pointing\n");
    }
}