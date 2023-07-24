#include<stdio.h>
#define n 5
int  a[n],top=-1;
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
int main()
{
    int ch;
    printf("\n1.insert");
    printf("\n2.delete");
    printf("\n3.display");
    printf("\n4.exit");
    while(ch!=4)
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
            printf("exit:");
            break;
            default:
            printf("please enter valid number:");
        }
    };
}