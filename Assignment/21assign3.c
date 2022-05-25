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
void DisplayProduct(PNODE Head)
{
    int iDigit=0,iSum=1;
    while(Head!=NULL)
    {
        int no=Head->data;
        while(no>0)
        {
            iDigit=no%10;
            iSum=iSum*iDigit;
            no=no/10;
        }
        printf("%d\n",iSum);
        iSum=1;
        Head=Head->next;
    }
}

int main()
{
    int iRet=0;
    PNODE first=NULL;
    InsertFirst(&first,90);
    InsertFirst(&first,22);
    InsertFirst(&first,121);
    InsertFirst(&first,32);
    InsertFirst(&first,11);
    
    DisplayProduct(first);
    
    return 0;
}