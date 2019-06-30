#include <stdio.h>
#include <stdlib.h>
#define n 2
#define m 3
int main()
{
    int a=0,b=0;
    int mat3[n][m];
    int mat5[n][n];
    int mat1[n][m]=
    {
        {1,2,3},
        {4,5,6},
    };
    int  mat2[m][n]=
    {
        {1,4},
        {2,5},
        {3,6}
    };
  int mat4[n][m];
    for(a=0; a<n; a++)
        for(b=0; b<m; b++)
        {
            mat3[a][b]=mat1[0][b]*mat2[b][a];
            mat4[a][b]=mat1[1][b]*mat2[b][a];
        }


        for(b=0; b<m; b++)
        {
           mat5[0][0]+=mat3[0][b];
           mat5[1][0]+=mat3[1][b];
        }



        for(b=0; b<m; b++)
        {
             mat5[0][1]+=mat4[0][b];
             mat5[1][1]+=mat4[1][b];
        }


     for(a=0; a<n; a++)
    {
        for(b=0; b<n; b++)
        {
             printf("%d ", mat5[a][b]);
        }
        printf("\n");
    }

    return 0;
}
