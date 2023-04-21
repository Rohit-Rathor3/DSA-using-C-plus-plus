#include<stdio.h>
#include<conio.h>
int main()
{
    int row1,col1,row2,col2;
    int flag=0;
    int i,j,k;
    int mat1[4][4],mat2[4][4],mat[4][4];
    printf("\nEnter Row of Matric 1: ");
    scanf("%d",&row1);
    printf("\nEnter Coloumn of Matric 1: ");
    scanf("%d",&col1);
    printf("\nEnter Row of Matric 2: ");
    scanf("%d",&row2);
    printf("\nEnter Coloumn of Matric 2: ");
    scanf("%d",&col2);
    if(col1==row2)
    {
        flag=1;
    printf("\nEnter Elements of MAtrics 1 : ");
    for(int i=0;i<row1;i++)
    for(int j=0; j<col1;j++)
    {
        scanf("%d",&mat1[i][j]);
    }
    printf("\nEnter Elements of MAtrics 2 : ");
    for(int i=0;i<row2;i++)
    for(int j=0; j<col2;j++)
    {
        scanf("%d",&mat2[i][j]);
    }
    printf("\nMatrix 1 : \n");
    for(int i=0;i<row1;i++)
    {
    for(int j=0; j<col1;j++)
    {
       printf("  %d",mat1[i][j]);
    }
    printf("\n");
    }
     printf("\nMatrix 2 : \n");
    for(int i=0;i<row2;i++)
    {
    for(int j=0; j<col2;j++)
    {
       printf(" %d",mat2[i][j]);
    }
    printf("\n");
    }
        for(i=0;i<row1;i++)
        {   
            for(j=0;j<col2;j++)
            {   mat[i][j]=0;
                for(k=0;k<row2;k++)
                mat[i][j]+=mat1[i][k]*mat2[i][k];
            }
        }
    }
    else
    {
        printf("\nPlz enter right format of matrics ");
    }
    if(flag)
    {
    printf("\n Resultant Matrics : \n");
    for(i=0; i<row1;i++)
    {
    for(j=0 ; j<col2;j++)
    {
        printf(" %d",mat[i][j]);
    }
    printf("\n");
    }
    }
    return 0;
}