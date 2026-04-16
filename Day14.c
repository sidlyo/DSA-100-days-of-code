#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the value in m and n\n");
    scanf("%d %d",&m,&n);
    int mat[m][n];

    printf("\nEnter the elements in the matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }

    int iden=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(((i==j)&&(mat[i][j]==1)) || ((i!=j)&&(mat[i][j]==0)))
            {
                iden=1;
            }
            else
            {
                iden=0;
                break;
            }                
        }
    }

    if(iden==1)
    {
        printf("\nIDENTITY MATRIX");
    }
    else
    {
        printf("\nNOT A IDENTITY MATRIX");
    }
}