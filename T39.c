// example 2 of pointer
#include<stdio.h>

int main()
{
    printf("Pointer Basics\n");
    int a=76;
    int *ptra=&a;
    int *ptra2= NULL;

    printf("The Address of pointer is %p\n", &ptra);
    printf("The Address of a is %p\n", &a);
    printf("The Address of a is %p\n", ptra);
    printf("The Address of some garbage is %p\n", ptra2);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    return 0;
}
