#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[],int iLength)
{
    register int iCnt = 0;
    int iSum=0;
    int iDigit=0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
         while(Arr[iCnt]!=0)
         {
                iDigit=Arr[iCnt]%10;
                iSum=iSum+iDigit;
                Arr[iCnt]=Arr[iCnt]/10;

         }
            printf("%d\t",iSum);
         iSum=0;
    }
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
    DigitSum(ptr,iSize);

    free(ptr);
    return 0;
}