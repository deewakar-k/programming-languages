#include <stdio.h>
#include <string.h>
struct book
{
    char name[50];
    int page;
};
void main ()
{
    struct book java;
    struct book *ptr;
    java.page = 500;
    strcpy(java.name, "Master in Java");
    ptr = &java;
    printf("Name of the book is:%s\n", ptr->name);
    printf("No. of Pages:%d\n", ptr->page);
}