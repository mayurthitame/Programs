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
void DisplayLarge(PNODE Head)
{
    int iDigit=0,iMax=0,iTemp=0;
    while(Head!=NULL)
    {
        int no=Head->data;
        iTemp=no%10;
        iMax=iTemp;
        while(no>0)
        {
            iDigit=no%10;
            if(iDigit>iMax)
            {
                iMax=iDigit;                
            }
            no=no/10;
        }
        printf("%d\n",iMax);
        Head=Head->next;
    }
}

int main()
{
    int iRet=0;
    PNODE first=NULL;
    InsertFirst(&first,90);
    InsertFirst(&first,62);
    InsertFirst(&first,171);
    InsertFirst(&first,32);
    InsertFirst(&first,11);
    
    DisplayLarge(first);
    
    return 0;
}