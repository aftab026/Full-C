// example of function for dynamic memory allocation ......

#include <stdio.h>
#include <stdlib.h> // in stdlib.h are use malloc calloc realloc free etc...
int main()
{
    // // use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of the array you want to creat\n");
    // scanf("%d\n", &n);
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value on %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of this array is %d\n", i, ptr[i]);
    // }

    // // use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to creat\n");
    scanf("%d", &n);
    ptr = (int *)calloc(n , sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value on %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    // use of ralloc
    
    printf("Enter the size of the new array you want to creat\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value on %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n", i, ptr[i]);
    }

    free(ptr);


    return 0;
}
