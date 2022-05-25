//Sigly Linear Linked List
/*
InsertFirst
InsertLast
InsertAtPos
DeleteFirst
DeleteLast
DeleteAtPosition
Display
Count
*/
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

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}

void InsertLast(PPNODE Head,int no)
{
    //allocate memory for node(dynamically)
    //initialise that node

    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        temp=*Head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements from linked list are:\n");
    while(Head!=NULL)
    {
        printf("| %d |->",Head->data);
        Head=Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int Count=0;
   
    while(Head!=NULL)
    {
        Count++;
        Head=Head->next;
    }
   return Count;
}

void DeleteFirst(PPNODE Head)
{
    //if LL is empty then return
    //if LL contains at least one node then 
    //store the address of second node in the first pointer through head
    //and delete the first node
    PNODE temp=NULL;

    if(*Head==NULL)
    {
        return;
    }
    else
    {
       temp=*Head;
       *Head=temp->next;
       free(temp); 
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp=NULL;
    //if LL is empty return
    //if LL contains one node then delete that node and return
    //if LL contains more then one node then travel till second last node and delete last node
    if(*Head==NULL)
    {
        return;
    }
    else if((*Head)->next==NULL)
    {
        free(*Head);
        *Head=NULL;
    }
    else
    {
        temp=*Head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }

}

void InsertAtPos(PPNODE Head,int no,int pos)
{
    //consider nodes are 4
    //if position is invalid return directly(<1 or >5)
    //if position is 1 then call insertfirst
    //if position is N+1 then call InsertLast(position is 5)
    //
    int size=0,iCnt=0;
    PNODE newn=NULL;
    PNODE temp=NULL;
    size=Count(*Head);

    if((pos<1) ||(pos>(size+1)))
    {
        printf("Position is invalid\n");
        return;
    }
    if((pos==1))
    {
        InsertFirst(Head,no);
    }
    else if(pos==(size+1))
    {
        InsertLast(Head,no);
    }
    else
    {

        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=no;
        newn->next=NULL;

        temp=*Head;
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
    
}

void DeleteAtPos(PPNODE Head,int pos)
{
    //consider nodes are 4
    //if position is invalid return directly(<1 or >4)
    //if position is 1 then call deletefirst
    //if position is N then call deletelast(position is 4)
    //
    int size=0,iCnt=0;
    PNODE temp=NULL;
    PNODE tempdelete=NULL;

    size=Count(*Head);

    if((pos<1) ||(pos>(size)))
    {
        printf("Position is invalid\n");
        return;
    }
    if((pos==1))
    {
        DeleteFirst(Head);
    }
    else if(pos==(size))
    {
        DeleteLast(Head);
    }
    else
    {
        temp=*Head;
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        tempdelete=temp->next;
        temp->next=temp->next->next;
        free(tempdelete);
    }
}

int main()
{
    int iRet=0;
    PNODE first=NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtPos(&first,75,3);

    DeleteAtPos(&first,3);

    Display(first);

    iRet=Count(first);
    printf("Count of nodes from linked list is%d\n",iRet);
  
    InsertFirst(&first,1);

    Display(first);

    iRet=Count(first);
    printf("Count of nodes from linked list is%d\n",iRet);
  
    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);

    iRet=Count(first);
    printf("Count of nodes from linked list is%d\n",iRet);
  
    DeleteFirst(&first);

  
    Display(first);

    iRet=Count(first);
    printf("Count of nodes from linked list is%d\n",iRet);
  
    DeleteFirst(&first);

    Display(first);

    iRet=Count(first);
    printf("Count of nodes from linked list is%d\n",iRet);
  
    DeleteLast(&first);

    Display(first);

    iRet=Count(first);
    printf("Count of nodes from linked list is%d\n",iRet);
  
    return 0;
}