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

void InsertFirst(PPNODE Head,int iNo)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

    if(*Head==NULL)
    {
        newn->next=*Head;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
    }
}

void Display(PPNODE)
{
    while(*Head!=NULL)
    {
        printf("%d\t",Head->data);
        Head=
    }
}
int main()
{
    PNODE First=NULL;

    InsertFirst(&First,101);
     InsertFirst(&First,15);
      InsertFirst(&First,9);
       InsertFirst(&First,13);
        Display(First);
    PNODE ptr=(PNODE)malloc(sizeof(NODE));
    return 0;
}