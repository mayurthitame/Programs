#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchLastOccur(int Arr[],int iLength,int iNo)
{
    register int iCnt = 0;

    for(iCnt=iLength-1; iCnt >= 0; iCnt--)
    {
          if(Arr[iCnt] == iNo)
          {
                   break;
          }
    }
        return iCnt;
}

int main()
{
    register int iCnt = 0;
    int iSize = 0,iNo=0;;
    int iRet = 0;
    auto int *ptr = NULL;


    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter number you want to search : ");
    scanf("%d",&iNo);

    iRet =SearchLastOccur(ptr,iSize,iNo);

    if(iRet==-1)
    {
        printf("There is no such element in Array");
    }
    else
    {
        printf("the number we searched is at last occurence  index no:%d",iRet);

    }
    free(ptr);
    return 0;
}