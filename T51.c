// example of strcat in string function....

#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "Hello";
    char t[] = "World";
    strcat ( t, s);
    printf("String = %s", t);
    return 0;
}
