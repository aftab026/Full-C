// example of string function in C with string.h library....

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "ravi";
    char s2[] = "ant";
    char s3[54];
    printf("The strcmp for s1, s2 returned %d ", strcmp(s1, s2));
    //puts(strcat(s1, s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s1 is %d\n", strlen(s2));
    // printf("The reverse string s1 is: ");
    // puts(strrev(s1));
    // printf("The reverse string s2 is: ");
    // puts(strrev(s2));

    // strcpy(s3,strcat(s1, s2));
    // puts(s3);
   // printf("The reverse string s2 is: ");

    return 0;
}

