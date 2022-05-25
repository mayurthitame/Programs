#include<stdio.h>
#include<stdlib.h>

int EvenFreq(int Arr[],int iLength)
{
    int iCnt=0;
    int FrqCount=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
           FrqCount++;
         }
    }
    return FrqCount;
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

    iRet=EvenFreq(ptr,iSize);
        printf("Frequency of even number is %d\n",iRet);
    free(ptr);
    return 0;
}