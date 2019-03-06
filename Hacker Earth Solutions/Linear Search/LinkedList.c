#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* insertEnd(struct Node* head,int data)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    if(head==NULL)
    {
      head=temp;
      return head;
    }
    struct Node* curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
struct Node* insertBeg(struct Node* head,int data)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
      temp->data=data;
        temp->next=NULL;
    if(head==NULL)
    {
     head=temp;
     return head;
    }
    temp->next=head;
    head=temp;
    return head;
}
struct Node* insertAtPos(struct Node* head,int data, int pos)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    struct Node* curr=head;
    struct Node* prev=curr;
    for(int i=0;i<pos-1;i++)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=temp;
    temp->next=curr;
    return head;
};
void display(struct Node* head)
{
    if(head==NULL)return;
    struct Node* curr=head;
    while(curr!=NULL)
    {
        printf("%d",curr->data);
        if(curr->next!=NULL)
            printf("->");
        curr=curr->next;
    }
}
struct Node* deleteBeg(struct Node* head)
{
    if(head==NULL)
        printf("underflow condition");
    else
    {
        struct Node* curr=head->next;
        struct Node* temp=head;
        head=curr;
        free(temp);
    }
    return head;
}
struct Node* deleteEnd(struct Node* head)
{
    struct Node* curr=head;
    struct Node* prev=curr;
    while(curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    free(curr);
}
struct Node* deleteAtPos(struct Node* head,int pos)
{
    struct Node* curr=head;
    struct Node* prev=curr;
    for(int i=0;i<pos;i++)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    free(curr);
    return head;
}
struct Node* reverse(struct Node* head)
{
    struct Node* curr=head;
    struct Node* prev=NULL;
    struct Node* second=head;
    while(curr!=NULL)
    {
        second=curr->next;
        curr->next=prev;
        prev=curr;
        curr=second;
    }
    head = prev;
    return head;
}
int main()
{
    int data;
    scanf("%d",&data);
    struct Node* head=NULL;
    for(int i=0;i<data;i++)
    {
        int a;
        scanf("%d",&a);
        head=insertEnd(head,a);
    }
    int pos;
    head=reverse(head);
     display(head);
    /*scanf("%d",&pos);
    deleteAtPos(head,pos);
    display(head);
    scanf("%d",&pos);
    int newdata;
    scanf("%d",&newdata);
    insertAtPos(head,newdata,pos);
    display(head);*/
        return 0;
}
