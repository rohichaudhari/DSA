#include<stdio.h>
#define n 5
int  a[n],top=-1,i,c;
void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("\t %d",a[i]);
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
        top--;
    }
}   
int fdelete()
{
    c=a[0];
    for(i=0;i<top;i++)
    {
        a[i]=a[i+1];
    }
    a[top--]=c;
}
int main()
{
    int ch;
    printf("\n1.insert");
    printf("\n2.delete");
    printf("\n3.display");
    printf("\n4.fdelete");
    printf("\n5.exit");
    while(ch!=5)
    {
        printf("\nenter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert(10);
            insert(20);
            insert(30);
            insert(40);
            insert(50);
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
            printf("exit:");
            break;
            default:
            printf("please enter valid number:");
        }
    };
}