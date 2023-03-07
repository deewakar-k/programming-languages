#include <stdio.h>

int reverse(int *arr, int length);

int main (void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = 4;
    reverse(arr, length);
    
    for(int i = 0; i < 5; i++)
    {
        printf("%i\t", arr[i]);
    }
}
int reverse (int *arr, int length)
{
    int temp;
    for(int i = 0; i < (length / 2) ; i++)
    {
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
}