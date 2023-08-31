#include<stdio.h>
#define n 5
int  a[n];
int f=-1,r=-1;
int display()
{
    int i=f;
    if(f<0)
    {
        printf("Queue is empty");
    }
    else{
        do
        {
        printf("\t %d",a[i]);
        i=(i+1)%n;
        } while (i!=(r+1)%n);
    }
    printf("\n");
}
int insertend(int val)
{
    if(r<0)
    {
        f=r=0;
        a[r]=val;
    }
    else if((r+1)%n==f)
    {
        printf("Queue is full..\n");
    }
    else{
        r=(r+1)%n;
        a[r]=val;
    }
}
int  deletefirst()
{
    if(f==-1)
    printf("queue is full..\n");
    else if(f==r)
    f=r=-1;
    else
    f=(f+1)%n;
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
        scanf(" %d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter elemet:");
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
            default:
            printf("wrong choice:");
            break;
        }
    } while (ch!=0);
    
}

