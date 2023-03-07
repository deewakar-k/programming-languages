#include <stdio.h>

int x = 0;

int func1()

{
    return x;
}

int func2()
{
    int x = 1;
    return func1();
}

int main()
{
    printf("%d", func2());
    printf("\n");

    return 0;
}
