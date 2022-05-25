#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    register int iCnt = 0;
    int iMult=1;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
          if(Arr[iCnt] %2!=0)
          {
                iMult=iMult*Arr[iCnt];
          }
    }
   return iMult;
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
    iRet = Product(ptr,iSize);
    printf("Frequency is%d\n",iRet);

    free(ptr);
    return 0;
}