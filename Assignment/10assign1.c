#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iNo)
{
    register int iCnt = 0;
    int iCount=0;
    bool bFlag=false;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
          if(Arr[iCnt] == iNo)
          {
                bFlag=true;
                break;
          }
    }
   return bFlag;
}

int main()
{
    register int iCnt = 0;
    int iSize = 0,iNo=0;
    bool bRet;
    auto int *ptr = NULL;


    printf("Enter number of Elements : ");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of Array\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter number you want to search");
    scanf("%d",&iNo);

    bRet = Check(ptr,iSize,iNo);
    if(bRet==true)
    {
        printf("%d number is present \n",iNo);
    }
     else
    {
        printf("%d number is not present \n",iNo);
    }
    free(ptr);
    return 0;
}