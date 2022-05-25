#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    register int iCnt=0;
    int iMax=Arr[iCnt];

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(iMax<Arr[iCnt])
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int iSize=0;
    int iRet=0;
    register int iCnt=0;
    int *ptr=NULL;
    printf("Enter Number of elements\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize*sizeof(int));
    printf("Enter values\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=Maximum(ptr,iSize);
    printf("maximum number from array is%d\n",iRet);
    free(ptr);

return 0;
}

