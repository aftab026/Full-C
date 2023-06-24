// example of call by values...
#include<stdio.h>

void swap(int x, int y)
{
    int temp;
    
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int r=10, v=20;
    swap(r, v);     // passing value of function
    printf("\nvalue of r: %d",r);
    printf("\nvalue os v: %d", v);
    return 0;
}
