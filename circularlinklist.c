#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertEnd(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    return;
}
void deleteEnd()
{
    struct node *ptr = head;
    struct node *p;
    if(ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next!= NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}
void insertfirst(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    if(head==NULL)
    {
        head=temp;
        temp->next=head;
        return;
    }
    while(ptr->next!=head)
    ptr=ptr->next;
    temp->next=head;
    head=temp;
    return;
}
void display()
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("list is empty..");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("\t %d",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
int main()
{
    insertEnd(11);
    insertEnd(22);
    insertEnd(33);
    display();
    deleteEnd();
    display();
    insertfirst(44);
    insertfirst(55);
    display();
}