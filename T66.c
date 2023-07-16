// example of storage in c...

#include<stdio.h>


int sum;
int myfunc(int a, int b)
{
   //auto int sum;
    sum = a+b;
    return sum;

}
int main()
{
   // int sum = myfunc(3, 5);
    printf("The sum is %d\n", sum);
    
    return 0;
}
