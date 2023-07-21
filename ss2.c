#include<stdio.h>
int main()
{
    int a[5],i,c,n=5;
    for(i=0;i<n;i++)
    {
        printf("enter value a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("value are:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    
    printf("\n\n");
    
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            c = a[i];
            a[i] = a[n-1];
            a[n-1] = c;
        }
        printf("\t %d",a[i]);
    }

}