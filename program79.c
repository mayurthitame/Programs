#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchFirstOccur(int Arr[],int iLength,int iNo)
{
    register int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
          if(Arr[iCnt] == iNo)
          {
                   break;
          }
    }
    if(iCnt==iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    iRet =SearchFirstOccur(ptr,iSize,iNo);
    if(iRet==-1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("the number we searched is at index no:%d",iRet);
    }
    free(ptr);
    return 0;
}