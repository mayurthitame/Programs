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
void Perfect(PNODE Head)
{
    int iCnt=0,iSum=0;
   
    while(Head!=NULL)
    {
        for(iCnt=1;iCnt<(Head->data);iCnt++)
        {
            if(((Head->data)%iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
        
        }
        if(iSum==(Head->data))
        {
            printf("%d\n",Head->data);
        }
        iSum=0;
        Head=Head->next;
    }
}

int main()
{
    int iRet=0;
    PNODE first=NULL;
    InsertFirst(&first,111);
    InsertFirst(&first,101);
    InsertFirst(&first,6);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

    Perfect(first);
    return 0;
}