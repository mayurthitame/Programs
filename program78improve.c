#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
    register int iCnt = 0;
    bool bFlag=false;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
          if(Arr[iCnt] == iNo)
          {
                   break;
          }
    }
    if(iCnt==iLength)
    {
        return false;
     }
     else
     {
        return true;
     }
}

int main()
{
    register int iCnt = 0;
    int iSize = 0,iNo=0;;
    bool bRet = 0;
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

    bRet = Search(ptr,iSize,iNo);
    if(bRet==true)
    {
        printf("In array %d number present\n",iNo);
    }
    else
    {
        printf("In Array %d number is not present\n",iNo);
    }
    free(ptr);
    return 0;
}