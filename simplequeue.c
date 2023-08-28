#include<stdio.h>
#define n 5
int f=-1,r=-1;
int  a[n];
int display()
{
    int i;
    if(f<0)
    {
        printf("\n  queue is empty");
    }
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("\t %d",a[i]);
        }
    }
    printf("\n");
}
int insertend(int val)
{
    if(r>n-1)
    {
        printf("\n  queue is full");
    }
    
    else if(r<0)
    {
        f=r=0;
        a[r]=val;
    }
    else
    {
        r++;
        a[r]=val;
    }
}
int  deletefirst()
{
    if(f<0)
    {
        printf("\n queue is empty");
    }
    else if(f==r)
    {
       f=r=-1; 
    }
    else
    ++f;
}
int main()
{
    int ch,m;
    printf("\n 1.insertend");
    printf("\n 2.deletefirst");
    printf("\n 3.display");
    printf("\n 4.exit");
    do
    {
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n enter element:");
            scanf("%d",&m);
            insertend(m);
            break;
            case 2:
            deletefirst();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("\n exit");
            break;
            default:
            printf("\n enter valid number");
            break;

        }

    } while (ch!=0);
    
}