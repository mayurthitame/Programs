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
int SearchLast(PNODE Head,int no)
{
    int Count=0,countsum=0;
   
    while(Head!=NULL)
    {
        Count++;
         if(Head->data==no)
        {
            countsum=Count;
        }
        Head=Head->next;
    }
    return countsum;
}

int main()
{
    int iRet=0;
    PNODE first=NULL;
    InsertFirst(&first,111);
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,51);

    iRet=SearchLast(first,51);
    printf("element occured at %d rd position",iRet);
    
    return 0;
}