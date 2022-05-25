#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iNo1,int iNo2)
{
    register int iCnt = 0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
          if(Arr[iCnt] >iNo1 && Arr[iCnt]<iNo2)
          {
                   printf("Number are%d\t",Arr[iCnt]);
          }
    }
}

int main()
{
    register int iCnt = 0;
    int iSize = 0,iNo1=0,iNo2=0;
    int iRet = 0;
    auto int *ptr = NULL;


    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter number from : ");
    scanf("%d",&iNo1);
    printf("Enter number upto : ");
    scanf("%d",&iNo2);

    Range(ptr,iSize,iNo1,iNo2);

    free(ptr);
    return 0;
}