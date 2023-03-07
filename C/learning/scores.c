#include<stdio.h>

float average(int length, int arr[]);

const int N;

int main ()
{
    printf("no. of subjects? : ");
    scanf("%d", &N);
    
    int scores[N];
    for(int i = 0; i < N; i++)
    {
        printf("score's? :");
        scanf("%d", &scores[i]);
    }
    printf("your average is : %.2f\n", average(N, scores));
}
float average(int length, int arr[])
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum / (float) length;
}