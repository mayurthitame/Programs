#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int data)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=data;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }
}
void InsertLast(PPNODE head,int no)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}

void DeleteFirst(PPNODE head)
{
    PNODE temp=NULL;
    if(*head==NULL)
    {
        return;
    }
    else
    {
        temp=*head;
        *head=temp->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
   PNODE temp=NULL;
    if(*head==NULL)
    {
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
    }
    else
    {
        temp=*head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;

    }
}
void InsertAtPos(PPNODE head,int pos,int no)
{
    PNODE temp=NULL;
    PNODE newn=NULL;
    int ret=0;
    ret=Count(*head);
    int iCnt=0;
    
     if(pos==1)
    {
        InsertFirst(head,no);
    }
    else if(pos<1||pos>ret+1)
    {
        printf("Invalid Postion");
    }
    else if(pos==ret+1)
    {
        InsertLast(head,no);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));
        newn->data=no;
        newn->next=NULL;
        temp=*head;
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}

void DeleteAtPos(PPNODE head,int pos)
{
    PNODE temp=NULL;
    PNODE tempdelete=NULL;

    int ret=0;
    ret=Count(*head);
    int iCnt=0;

    if(pos<1||pos>ret)
    {
        printf("Invalid Postion");
    }
    else if(pos==1)
    {
        DeleteFirst(head);
    }
    else if(pos==ret)
    {
        DeleteLast(head);
    }
    else
    {
        temp=*head;
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        tempdelete=temp->next;
        temp->next=temp->next->next;
        free(tempdelete);
    }

}

void Display(PNODE head)
{
    printf("Elements of linked list are:");
    while(head!=NULL)
    {
        printf("|%d|->",head->data);
         head=head->next;
    }
    printf("NULL\n");
   
}
int Count(PNODE head)
{
    int iCnt=0;
    while(head!=NULL)
    {
        iCnt++;
        head=head->next;
    }
    return iCnt;
}
int main()
{
    PNODE first=NULL;
    int ret=0;
    InsertFirst(&first,101);
    InsertFirst(&first,111);
    InsertFirst(&first,59);
    InsertFirst(&first,41);

   

    Display(first);
    ret=Count(first);
    printf("count of elements from LL is:%d\n",ret);
     DeleteFirst(&first);
   InsertLast(&first,121);

     Display(first);
    ret=Count(first);
    printf("count of elements from LL is:%d\n",ret);

   DeleteLast(&first);
     Display(first);
    ret=Count(first);
    printf("count of elements from LL is:%d\n",ret);
     
     InsertAtPos(&first,4,67);
     Display(first);
    ret=Count(first);
    printf("count of elements from LL is:%d\n",ret);

     DeleteAtPos(&first,2);
     Display(first);
    ret=Count(first);
    printf("count of elements from LL is:%d\n",ret);
    return 0;
}