#include <stdio.h>
#include <stdlib.h>
#define n 3
#define m 4
int main()
{
    int a=0,b=0;
    int mat3[n][m];
    int mat1[n][m]=
    {
        {3,4,5,76},
        {6,8,9,45},
        {13,54,65,65}
    };
    int  mat2[3][4]=
    {
        {5,9,32,76},
        {68,85,65,45},
        {56,89,49,1}
    };

    for(a=0; a<n; a++)
        for(b=0; b<m; b++)
        {
            mat3[a][b]=mat1[a][b]+mat2[a][b];
        }

    for(a=0; a<n; a++)
    {
        for(b=0; b<m; b++)
        {
            printf("%d,",mat3[a][b]);
        }
        printf("\n");
    }

    return 0;
}
