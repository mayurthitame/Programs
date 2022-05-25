#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Search(int Arr[],int iLength,int iNo)
{
    register int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
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

    iRet = Search(ptr,iSize,iNo);
    if(iRet!=iSize)
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