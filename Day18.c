#include<stdio.h>

int main()
{
    int n;
    int k;
    printf("Enter the number of input in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements in the array\n");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nThe array is=\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nelnter the index where the array is to rotated \n");
    scanf("%d",&k);

    k=k%n;

    for(int i=k+1;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(int i=0;i<n-k;i++)
    {
        printf("%d ",a[i]);
    }
}