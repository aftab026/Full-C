// example of escape sequence in C

#include <stdio.h>

int main()
{
    int a = 5;
    //printf(" my backslash \ %d", a);
   //printf(" my backslash \\ %d", a);
    //printf(" my backslash \\\n %d", a);
 //printf(" o beta ji \\n %d", a);
  //printf("tab charracter \t\t my backslash \\ %d", a);
// printf(" tab character \t\t\t my backslash \\ %d", a); 
 printf(" my backslash \a\a %d", a);
    return 0;
}
