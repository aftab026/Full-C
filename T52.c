// example of strcpy in string...

#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "AFTAB" ;
    char t[6];
    strcpy (t,s);
    printf("\n Source string = %s", s);
    printf("\n Target string = %s", t);
    return 0;
}
