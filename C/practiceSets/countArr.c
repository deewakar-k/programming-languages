#include <stdio.h>

int counter(int *arr, int s);
int printArray(int *arr, int s);

int main (void)
{
    int arr[] = {-1, 4, 2, -6, 8};
    int s = sizeof(arr) / sizeof(arr[0]);

    counter(arr, s);

    printf("no. of positive element : %i", arr, s);
}
int counter(int *arr, int s)
{
    int count = 0;
    for(int i = 0; i < s; i++)
    {
        if(arr[i] > 0)
        count++;
    }
    return count;
}
int printArray(int *arr, int s)
{
    for(int i = 0; i < s; i++)
    {
        printf("%i\t", arr[i]);
    }
}