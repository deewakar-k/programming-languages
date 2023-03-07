
/*#include <stdio.h>

int linearSearch(int arr[], int size, int elements);

int main (void)
{
    int arr[] = {10, 100, 50, 60, 20, 40, 30, 80, 70, 90};
    int size = sizeof(arr)/sizeof(arr[0]); //calculating size of array
    int element = 50;

    int searchIndex = linearSearch(arr, size, element);

    printf("element %d was found at %d\n", element, searchIndex);

    return 0;

}
int linearSearch(int arr[], int size, int elements)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == elements)
        return i;
    }
    return -1;
}*/

// linear search.c 

/*#include <stdio.h>
int main (void)
{
    int search[] = {100, 900, 800, 400, 500, 200};
    int n;
    printf("enter a number to be searched : ");
    scanf("%i", &n);

    for(int i = 0; i < n - 1; i++)
    {
        if(search[i] == n)
        {
            printf("%i is found", n);
            return 0;
        }
    }
    printf("%i is not found\n", n);
    return 1;

}*/

// binary search.c 

#include <stdio.h>

int binarySearch(int arr[], int size, int element);

int main (void)
{
    int arr[] = {2, 3, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int elements = 8;
    int result = binarySearch(arr,size, elements);
    printf("%i is found at %i", elements, result);
}
int binarySearch(int arr[], int size, int elements)
{
   int start = 0;
   int end = size - 1;

   while(start <= end)
   {
//      int mid = (start + end) / 2; // might get some error 
        int mid = start + (end - start) / 2;

        if(elements < arr[mid])     //left hand side of the array 
        {
            end = mid - 1;
        }
        else if(elements > arr[mid])  //right hand side of the array 
        {
            start = mid + 1;
        }
        else
        {
            return mid;     // when element is found in middle so we return mid hence found my element.
        }
   }

   return -1;
}