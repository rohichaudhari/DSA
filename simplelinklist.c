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
 void insertfirst( int val)
 {
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
    }
    else
    {
        ptr=head;
        temp->next=ptr;
        head=temp;
    }
 }
    void deletefirst()
    {
        struct node *ptr=head;
        head=ptr->next;
        free(ptr);
    }
/*int main()
{
    insertEnd(11);
    insertEnd(22);
    insertEnd(33);
    display();
    deleteEnd();
    display();
    insertfirst(99);
    insertfirst(88);
    display();
    deletefirst();
    deletefirst();
    display();
   
}*/

void insertmid(int val,int p)
 {
   struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));
    temp->data=val;
   while(ptr->data!=p)
    {
      
       ptr=ptr->next; 
        temp->next=ptr->next;
        ptr->next=temp;
    } 

 }
 /*void middelete(int c)
 {
      struct node *ptr=head;
      struct node *p;
      while(ptr->data!=p)
      {
        p=ptr;
        ptr=ptr->next;
      }
      p->next=ptr->next;
      free(ptr);
}*/
int main()
{
    int ch,m,n,c;
    printf("\n 1.insertEnd");
    printf("\n 2.deleteEnd");
    printf("\n 3.insertfirst");
    printf("\n 4.deletefirst");
    printf("\n 5.insertmid");
   // printf("\n 6.middelete");
    printf("\n 7.display");
    printf("\n 0.exit");
    do
    {
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n enter value:");
            scanf("%d",&m);
            insertEnd(m);
            break;

            case 2:
            deleteEnd();
            break;

            case 3:
            printf("\n enter value:");
            scanf("%d",&m);
            insertfirst(m);
            break;

            case 4:
            deletefirst();
            break;
             
             case 5:
             printf("\n enter value:");
             scanf("%d",&m);
             printf("\n enter position:");
             scanf("%d",&n);
             insertmid(m,n);
             break;
              
             /*case 6:
              printf("\n enter position:");
              scanf("%d",&n);
              deletemid(c);
              break;*/

              case 7:
              display();
              break;

              case 0:
              printf("\n exit");
              break;
              default:
              printf("\n wrong choice");
              break;
        }
    } while (ch!=0);
}
   
    
