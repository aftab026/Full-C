// example of break and continue stateent
#include<stdio.h>
int main()
{
    printf("Hello World\n");
    int i, age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);
        // if age(age>10)
        //{
            // break;
        //}
        if (age>10)
        {
            continue;
        }
        printf("We have not come accross any continue statement");
        printf("We have not come accross any continue statement");
        printf("We have not come accross any continue statement");
        printf("We have not come accross any continue statement");
        printf("Harry is a good boy");
    }
    return 0;
}
