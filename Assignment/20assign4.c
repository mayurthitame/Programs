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
int SecondLarge(PNODE Head)
{
    int iMax=0,iMax2=0;

    while(Head!=NULL)
    {
        if((Head->data)>iMax)
        {
            iMax2=iMax;
            iMax=Head->data;
        }
        else if((Head->data)>iMax2&&(Head->data)!=iMax)
        {
            iMax2=Head->data;
        }

        Head=Head->next;
    }
    return iMax2;
}

int main()
{
    int iRet=0;
    PNODE first=NULL;
    InsertFirst(&first,111);
    InsertFirst(&first,22);
    InsertFirst(&first,51);
    InsertFirst(&first,222);
    InsertFirst(&first,11);

    iRet=SecondLarge(first);
    printf("Second large elements is %d ",iRet);
    
    return 0;
}