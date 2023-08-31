#include<stdio.h>
struct node
{
    int data;
    struct node *ptr;
};
int main()
{
    struct node a,b,c;
    a.data=10;
    a.ptr=NULL;

    b.data=20;
    b.ptr=NULL;
    c.data=30;
    c.ptr=NULL;
    //printf("A:data:%d\n",a.data);
    //printf("b:data:%d\n",b.data);
    b.ptr=&a;
    a.ptr=&b;
    c.ptr=&a;
    printf("A:data:%d\n",b.ptr->data);
    printf("b:data:%d\n",a.ptr->data);
    printf("c:data:%d\n",c.ptr->data);
    
}