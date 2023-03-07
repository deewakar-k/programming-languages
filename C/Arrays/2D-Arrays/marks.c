#include <stdio.h>

int main (void)
{
    int r, c;

    printf("enter the number of rows : ");
    scanf("%i", &r);

    printf("enter the number of columns : ");
    scanf("%i", &c);

    int arr[r][c];

    printf("enter the elements in array : ");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%i", &arr[i][j]);
        }
    }

    printf("\n");

    printf("marks obtained by students in table :\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%i ", arr[i][j]);
        }
        printf("\n");
    }
}
