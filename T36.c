// example of two-dimensional array
#include<stdio.h>

int main()
{
    int Matrice[3][3];
    printf("This program will print no. from 1-9 in matrice form : \n\n");
    for (int i=0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            printf("Enter no. (1-9) : ");
            scanf("%d", &Matrice[i][j]);
        }
        
    }
    printf("\n\n\n");
    for (int i=0; i<3; i++)
    {
        for (int j= 0; j<3; j++)            
        {
            printf("%d\t", Matrice[i][j]);
        }
        printf("\n");
        
    }
    printf("\n\n\n so that's the matrice form of no from 1-9");
    return 0;
}

