// switcch case statement in c (some example)

#include <stdio.h>

int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 2:
        printf("The age is 2\n");
        break;
        switch (marks)
        {
        case 50:
            printf("Your marks are 50\n");
            break;

        default:
            printf("Your marks are not match\n");
            break;
        }
    case 5:
        printf("The age is 5\n");
        break;
    default:
        printf("The age is not match\n");
        break;
    }
    return 0;
}
