// format specifier more example

#include <stdio.h>
int main()
{
    int a = 5;
    float b = 2.333;
    printf(" the value of a is %d and the value b is %f\n", a, b);
    printf(" the value of a is %d and the value b is %.4f\n", a, b);
    printf("%.4f\n", b);
    printf("%3.4f\n", b);
    printf("%6.4f\n", b);
    printf("%8.4f\n", b);
    printf("%-10.4f\n", b);
    printf("%.4f hii\n", b);
    printf("%11.4f hii\n", b);
    printf("%-11.4f hii\n", b);
    printf("%-18.4f hii\n", b);
    return 0;
}
