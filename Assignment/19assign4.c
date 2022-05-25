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
int Large(PNODE Head)
{
    int iMax=Head->data;
   
    while(Head!=NULL)
    {
        if(iMax<(Head->data))
        {
            iMax=Head->data;
        }
        Head=Head->next;
    }
    return iMax;
}

int main()
{
    int iRet=0;
    PNODE first=NULL;
    InsertFirst(&first,111);
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,999);
    InsertFirst(&first,51);

    iRet=Large(first);
    printf("Largest elemnts from list is %d\n",iRet);
    
    return 0;
}