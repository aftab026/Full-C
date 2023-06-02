#include<stdio.h>

int main();
int i ;
void star_pattern()
{
    int a;
    printf("Enter how many stars(*) you want : \n");
    scanf("%d", &a);
    for ( i = 0; i < a; i++)
    {
        printf("*");
    }

    //return 0;
}
