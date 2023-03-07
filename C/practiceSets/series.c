#include <stdio.h>

int main()  
{  
    int num = 1, count, limit;  
    int sum = 0, fact = 1;  
  
    printf("Enter the number of terms\n");  
    scanf("%d", &limit);  
  
    while(num <= limit)  
    {   
        for(count = 1; count <= num; count++)  
        {  
            fact = fact * count;  
        }  
        sum = sum + (num / fact);  
        num++;  
    }  
  
    printf("sum of %i terms of series is %i\n", limit, sum);    
}  