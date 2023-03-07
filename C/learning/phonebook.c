
/*#include <stdio.h>
#include <string.h>

#define MAX 100
#define SIZE 100

int main (void)
{
    char names[MAX][SIZE] = {"Baby <3", "Daksh"};
    char numbers[MAX][SIZE] = {"+91-9800-104-932", "+91-6294-351-111"};

    char name[MAX];
    printf("name? - ");
    gets(name);

    for(int i = 0; i < 2; i++)
    {
        if(strcmp(names[i], name) == 0)
        {
            printf("found >_<\n");
            return 0;
        }
    }
    printf("not found -_-\n");
    return 1;
}*/

/*#include<cs50.h>
#include <stdio.h>
#include <string.h>

#define MAX 100
#define SIZE 100

typedef struct person
{
    string name;
    string number;
    
}
person;


int main (void)
{
    person people[2];

    people[0].name = "Daksh";
    people[0].number = "+91-6294-356-664";

    people[1].name = "Baby";
    people[1].number = "+91-9800-101-322";

    char name[MAX];
    printf("name? - ");
    gets(name);

    for(int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, name) == 0)
        {
            printf("found - %s  >_<\n", people[i].number);
            return 0;
        }
    }
    printf("not found -_-\n");
    return 1;
}*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
    
}person;


int main (void)
{
    person people[2];

    people[0].name = "Daksh";
    people[0].number = "+91-6294-356-664";

    people[1].name = "Baby";
    people[1].number = "+91-9800-101-322";

    char *name;
    printf("name? - ");
    gets(name);

    for(int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, name) == 0)
        {
            printf("found - %s  >_<\n", people[i].number);
            return 0;
        }
    }
    printf("not found -_-\n");
    return 1;
}