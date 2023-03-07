#include <stdio.h>

void calculator(int n1, int n2, int *sum, float *avg);

int main (void)
{
    int n1 = 80, n2 = 80;
    int sum; float avg;

    calculator(n1, n2, &sum, &avg);

    printf("sum : %i\n", sum);
    printf("average : %.2f\n", avg);

}
void calculator(int n1, int n2, int *sum, float *avg)
{
    *sum = n1 + n2;
    *avg = *sum / 2.0;
}