#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    register int iCnt = 0;
    int iCount=0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
          if(Arr[iCnt] == iNo)
          {
                iCount++;
          }
    }
   return iCount;
}

int main()
{
    register int iCnt = 0;
    int iSize = 0,iRet = 0,iNo=0;
    auto int *ptr = NULL;


    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    printf("Enter number of whose frequency you want to calculate : ");
    scanf("%d",&iNo);


    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet = Frequency(ptr,iSize,iNo);
    printf("Frequency is%d\n",iRet);
    
    free(ptr);
    return 0;
}