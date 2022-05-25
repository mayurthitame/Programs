#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool EvenFreq(int Arr[],int iLength)
{
    int iCnt=0;
    bool bFlag=false;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            bFlag=true;
           break;
         }
    }
    return bFlag;
}

int main()
{
    int iSize=0,iCnt=0;
    bool bRet;
    int *ptr=NULL;
    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int));

    printf("Enter Values of array:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet=EvenFreq(ptr,iSize);
    if(bRet==true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }
    free(ptr);
    return 0;
}