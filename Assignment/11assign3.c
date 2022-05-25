#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
    register int iCnt = 0;
    int iMin=Arr[iCnt];
    int iMax=Arr[iCnt];
    int iDiff=0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
          if(Arr[iCnt] <iMin)
          {
               iMin=Arr[iCnt];
          }
          if(Arr[iCnt] >iMax)
          {
               iMax=Arr[iCnt];
          }
    }
    iDiff=iMax-iMin;
   return iDiff;
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
    iRet = Minimum(ptr,iSize);
    printf("Difference between min and max is %d\n",iRet);

    free(ptr);
    return 0;
}