#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
    int iSum=0,iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iLength=0;
    int *ptr=NULL;
    int iCnt=0,iRet=0;
    printf("Enter number of elements\n");
    scanf("%d",&iLength);

    ptr=(int *)malloc(sizeof(int)*iLength);

    printf("Enter values in array\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    iRet=Addition(ptr,iLength);
    printf("Addition of numbers is%d\n",iRet);
    return 0;

}