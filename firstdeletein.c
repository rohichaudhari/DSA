#include<stdio.h>
#define n 5
int  a[n],top=-1,i,c;
void display()
{
    int i;
    if(top<0)
    printf("Array is empty..\n");
    else
    {
    for(i=0;i<=top;i++)
    {
        printf("\t %d",a[i]);
    }
    }
}
int insert(int val)
{
    if(top>=n-1)
    {
        printf("Array is full..\n");
    }
    else
    {
        top++;
        a[top]=val;
        printf("insert elsement is:%d",a[top]);
    }
}
int delete()
{
    if(top<0)
    {
        printf("Array is empty\n");
    }
    else
    {
        printf("Deleted element is:%d",a[top]);
        top--;
    }
   
}   
int fdelete()
{
    if(top<0)
    printf("\n Array is empty..");
    else
    {
    printf("Deleted element is:%d",a[0]);
   
    for(i=0;i<top;i++)
    {
        a[i]=a[i+1];
    }
    top--;
    }
}
int finsert(int val)
{
    if(top>=n-1)
    {
        printf("array is  full..");
    }
    else if(top<0)
    {
        top++;
        a[top]=val;
    } 
    else
    {
        top++;
        for(i=top;i>=0;i--)
        {
            a[i]=a[i-1];
           
        }
        a[0]=val;
        printf("insert element is:%d",val);
    }
}
int main()
{
    int ch,m;
    printf("\n1.insert at end");
    printf("\n2.delete at end");
    printf("\n3.display Array");
    printf("\n4.delete at first");
    printf("\n5.finsert at first");
    printf("\n6.exit");
    while(ch!=6)
    {
        printf("\nenter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("enter element:");
                scanf("%d",&m);
                insert(m);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                fdelete();
                break;
            case 5:
                printf("enter m:");
                scanf("%d",&m);
                finsert(m);
                break;
            case 6:
                printf("exit:");
                break;
            default:
                printf("please enter valid number:");
        }
    };
}