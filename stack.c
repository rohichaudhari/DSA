#include<stdio.h>
#define n 5
int a[n],top=-1;
void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("\t%d",a[i]);
    }
}
int insert(int val)
{
    if(top>=n-1)
    {
        printf("Array is full...\n");
    }
    else
    {
        top++;
        a[top]=val;
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    display();

}

