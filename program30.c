#include<stdio.h>

int DisplayAddition(int iValue)
{
    int iCnt=0;
    int iSum=0;
      if(iValue<0)
      {
            iValue=-iValue;
      }

    for(iCnt=1;iCnt<=(iValue/2);iCnt++)
    {
           if((iValue%iCnt)==0)
           {
                iSum=iSum+iCnt;
           }

    }
    return iSum;
}

int main()
{
    int iNo=0;
    int iRet=0;
    printf("Enter number you want to find factors");
    scanf("%d",&iNo);
    iRet=DisplayAddition(iNo);
    printf("Addition of factors is\t%d",iRet);
    return 0;
}