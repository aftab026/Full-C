// example of typedef in c.....
#include <stdio.h>

typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;


int main()
{
    //int*a, b;
    typedef int* intPointer;
    intPointer a, b;
    int c=45;
    a = &c;
    b = &c;
    // std s1, s2;
    // s1.id = 33;
    // s2.id = 24;
    // printf("Value of s1's Id is %d\n", s1.id);
    // printf("Value of s2's Id is %d\n", s2.id);

    // typedef int integer;
    // integer a = 4;
    // printf("Value of a is %d", a);
    return 0;
}
