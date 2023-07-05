// example of strings in c...

#include<stdio.h>
/* int main()
{
    // declare and initialize string
    char str[] = "CodeWithHarry";
    printf("%s",str);
    return 0;
}*/

int main()
{
    char name[50];
    printf("Enter your name:\n ");
    gets(name);
    printf("My name is %s", name);
    return 0;
}

