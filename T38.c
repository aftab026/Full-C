// example 1 of pointer
#include<stdio.h>

void ptrfunc(int *ptr)
{
    *ptr=8;
}

int main()
{
    int x=5;

    printf("x=%d\n",x);
    printf("%d\n",&x);
    printf("x=%d",x);

    return 0;
}