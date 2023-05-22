// example of break statement

#include<stdio.h>
int main()
{
    int i,age;
    for ( i = 0; i < 5 ; i++)
    {
        printf("Iteration time = %d\n Enter your Age :", i);
        scanf("%d", &age);
        if (age>10)
        {
            break;  //checking break statement
        }
         //if (age <10)
        //{ continue; }
         //printf("Hey Guys\n");
         //printf("This code is printedf coz if condition is not satisfied. \n ");
         //printf("Checking Continue Statement \n\n"); // Checking Continue Statement
        
    }
    
    return 0;
}
