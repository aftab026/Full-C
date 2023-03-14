// relational operators

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter number a,b\n");
    scanf("%d%d", &a,&b);

    printf("a > b= %d\n", a > b);
    printf("a < b= %d\n", a < b);
    printf("a >= b= %d\n", a >= b);
    printf("a <= b= %d\n", a <= b);
    printf("a == b= %d\n", a == b);
    printf("a != b= %d\n", a != b);

    return 0;
}