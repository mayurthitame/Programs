#include<stdio.h>
#include<stdlib.h>

int DiffSumEven(int Arr[],int iLength)
{
    int iCnt=0,iEvenCnt=0;
    int evenFrq=0,oddFrq=0,Diff=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt] % 2)==0)
        {
             evenFrq++;
        }
        else
        {
            oddFrq++;
        }
    }
    Diff=evenFrq-oddFrq;
    return Diff;
}

int main()
{
    int iSize=0,iCnt=0,iRet=0;
    int *ptr=NULL;
    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    printf("Enter Values of array:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=DiffSumEven(ptr,iSize);

    printf("Difference between evensum and oddsum :%d",iRet);
    free(ptr);
    return 0;
}