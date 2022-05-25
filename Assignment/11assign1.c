#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    register int iCnt = 0;
    int iMax=Arr[iCnt];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
          if(Arr[iCnt] >iMax)
          {
               iMax=Arr[iCnt];
          }
    }
   return iMax;
}

int main()
{
    register int iCnt = 0;
    int iSize = 0,iRet = 0;
    auto int *ptr = NULL;

    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Maximum(ptr,iSize);
    printf("Maximum number is %d\n",iRet);

    free(ptr);
    return 0;
}