#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the value of m andd n\n");
    scanf("%d %d",&m,&n);
    
    int mat[m][n];

    printf("\nEnter the elements in matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("\n");

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }

    int sum=0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }

    printf("\nSum= %d",sum);
}