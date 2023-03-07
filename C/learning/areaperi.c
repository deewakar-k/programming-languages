//areaperi.c file

#include "areaperi.h" //including macro definations from areaperi.h file
#include <stdio.h>

int main()
{
    int b,h,x,y,z,s,r;
    float aTri,pTri,aSq,pSq,aCir,pCir;

    printf("Enter base and height of triangle: ");
    scanf("%d%d", &b, &h);
    aTri = areaT(b,h);
    printf("Area of triangle = %f\n",aTri);

    printf("Enter 3 sides of triangle: ");
    scanf("%d %d %d",&x, &y, &z);
    pTri = periT(x,y,z);
    printf("Perimeter of triangle = %f\n",pTri);

    printf("Enter side of square: ");
    scanf("%d", &s);
    aSq = areaS(s);
    printf("Area of square = %f\n", aSq);
    pSq = periS(s);
    printf("Perimeter of square = %f\n", pSq);

    printf("Enter radius of circle: ");
    scanf("%d", &r);
    aCir = areaC(r);
    printf("Area of circle = %f\n", aCir);
    pCir = periC(r);
    printf("Circumference of circle = %f\n", pCir);

    return 0;
}