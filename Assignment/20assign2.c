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
void Prime(PNODE Head)
{
    int iCnt=0,iSum=0,iCount=0;
   
    while(Head!=NULL)
    {
        for(iCnt=2;iCnt<=((Head->data)/2);iCnt++)
        {
            if(((Head->data)%iCnt)==0)
            {
               iCount++;
            }
            
        }
        if(iCount==0)
        {
            printf("%d is prime\n",Head->data);
        }
        iCount=0;
        Head=Head->next;
    }
}

int main()
{
    int iRet=0;
    PNODE first=NULL;
    InsertFirst(&first,22);
    InsertFirst(&first,17);
    InsertFirst(&first,6);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

    Prime(first);
    return 0;
}