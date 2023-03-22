// example of constant

#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 8;
   const  float b = 7.333;
  //b = 7.22;  // can not do this since b is constant
  // PI = 7.33; // can not do this since PI is constant
    printf("%f", PI);


    return 0;
}