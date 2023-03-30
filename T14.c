//example of if else else if etc....

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("  you have entered %d as your age\n", age);
    if(age>=18){
        printf("you can vote!");
    }
    //else if (age>=11){
        //printf("you are between 11 to 18 and you can vote for kids ");
    //}
    //else if(age>=3){
       ////printf("you are beetween 3 to 11 aand you can vote for babies");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              printf(" you are between 3 to 11 and you can vote babies");
    //}
    else{
        printf(" you can not vote!");
    }
    return 0;
}