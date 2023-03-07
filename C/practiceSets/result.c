#include <stdio.h>

int main (void)
{
    int s1, s2, s3;
    float totalPer;

    printf("programming marks? : ");
    scanf("%i", &s1);

    printf("digital electronics marks? : ");
    scanf("%i", &s2);

    printf("mathematics marks? : ");
    scanf("%i", &s3);

    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
 
    totalPer = (s1 + s2 + s3) / 3;

    if((totalPer < 40) || s1 < 33 || s2 < 33 || s3 < 33)
    {
        printf("\nyour total percentage is %.2f & better luck next time brother\n\n", totalPer);
    }
    else
    {
        printf("you have passed buddy\n");
    }
}