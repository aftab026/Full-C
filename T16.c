// switch case example nested

#include<stdio.h>

int main()
{
    int expression  ;

    switch (expression   )
    {
    case 1:
        printf("Switch statement 1");
        
    switch (expression  )
    {
    case 1:
        printf("Switch statement 2");
        break;
    
    case 2:
    
    default:
        break;
    }
    default:
        break;
    }
    return 0;
}
