// ARRAYS AND POINTER
#include<stdio.h>

int main()
{
    
    int i,a[5],*p;
    p=&a[0];                              //We can also write &a or a
    for ( i = 0; i <=4; i++)
    {
        scanf("%d",p+i);                 //This will take input in Array
    }
    for ( i = 0; i <=4; i++)
    {
        printf("%d",*(p+i));             // This will print Array's values
    }
    
    return 0;
}
