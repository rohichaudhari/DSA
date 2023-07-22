#include<stdio.h>
#define n 5
int  a[n],top=-1;
void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d",a[i]);
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
    printf("1.insert");
    printf("2.delete");
    printf("3.display");
    prinf("4.exit");
}