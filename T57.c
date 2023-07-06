// example of structure in c....
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct student harry, ravi, shubh;
    harry.id = 1;
    ravi.id = 2;
    shubh.id = 3;
    harry.marks = 42;
    ravi.marks = 40;
    shubh.marks = 48;
    harry.fav_char = 'p';
    ravi.fav_char = 't';
    shubh.fav_char = 'o';

    strcpy(harry.name,"harry is a good boy\n");
    printf("Harry got %d marks\n", harry.marks);
    printf("Harry's name is: %s\n", harry.name);

    return 0;
}
