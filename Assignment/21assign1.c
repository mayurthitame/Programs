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
void ReverseDigit(PNODE Head)
{
    int iDigit=0,iSum=0;
    while(Head!=NULL)
    {
        int no=Head->data;
        while(no>0)
        {
            iDigit=no%10;
            iSum=(iSum*10)+iDigit;
            no=no/10;
        }
        printf("%d\n",iSum);
        Head=Head->next;
        iSum=0;
    }
}

int main()
{
    int iRet=0;
    PNODE first=NULL;
    InsertFirst(&first,90);
    InsertFirst(&first,22);
    InsertFirst(&first,51);
    InsertFirst(&first,32);
    InsertFirst(&first,11);
    
    ReverseDigit(first);
    
    return 0;
}