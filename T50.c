// example of strings in c.......
#include<stdio.h>

void printStr(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    //char str[] = {'a','f','t','a','b','\0'};
    //char str[] = "aftab";
    char str[34];
    gets(str);
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("Using puts: \n");
    puts(str);
    return 0;
}
