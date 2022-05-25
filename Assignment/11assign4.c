#include<stdio.h>
#include<stdlib.h>

void ThreeDigits(int Arr[],int iLength)
{
    register int iCnt = 0;
    int iDigcnt=0;
    int iDigit=0,iTemp=0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iTemp=Arr[iCnt];
         while(Arr[iCnt]!=0)
         {
                iDigcnt++;
                Arr[iCnt]=Arr[iCnt]/10;
         }
         if(iDigcnt==3)
         {
            printf("Number contains three digits are %d\n",iTemp);
         }
         iDigcnt=0;
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
    ThreeDigits(ptr,iSize);

    free(ptr);
    return 0;
}