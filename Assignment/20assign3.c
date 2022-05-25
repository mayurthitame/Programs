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
int EvenAdd(PNODE Head)
{
    int iSum=0;
   
    while(Head!=NULL)
    {
         if((Head->data)%2==0)
        {
            iSum=iSum+(Head->data);
        }
        Head=Head->next;

    }
    return iSum;
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

    iRet=EvenAdd(first);
    printf("Addition of even elements is %d ",iRet);
    
    return 0;
}