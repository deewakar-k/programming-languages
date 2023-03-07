/*#include <stdio.h>

int main (void)
{
    int n = 50;
    int *p = &n; // & -> is figuring out the address of n and tucking in the special variable (pointer -> *p)
    printf("%i is in this -> %p address \n", n, p);
}*/

/*#include <stdio.h>

int main (void)
{
    //strings are the address of the first character in that sequence of character.
    char *s= "hello"; // string is a pointer to a character.
    printf("%s", s);
}*/

#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i", *p); // (*p) actually means -> go there || more formally go there
                      // and print whatever is in that address
}


/*#include <stdio.h>

int main (void)
{
    char *s = "hello lady";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%p\n", &s[4]);
}*/

/*#include <stdio.h>

int main (void)
{
    char *s = "hello";

    // * in printf is (de-reference operator) || going to the address and printing.
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
}*/