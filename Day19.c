#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the values in array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe array is=\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int p1=a[0];
    int p2=a[1];
    int pmin=a[0]+a[1];
    int min=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            min=a[i]+a[j];
            if(min<pmin)
            {
                pmin=min;
                p1=a[i];
                p2=a[j];
            }
        }
        min=0;
    }
    printf("\n %d %d",p1,p2);
}