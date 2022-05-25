#include<stdio.h>

int SumNon(int iNo)
{
    int iCnt=0;
    int iSum=1;
   if(iNo<0)
   {
       iNo=-iNo;
   }
   for(iCnt=2;iCnt<=iNo/2;iCnt++)
   {
        if(iNo%iCnt==0)
        {
           iSum=iSum*iCnt;
        }
   }
   return iSum;
}
int main()
{
   int iValue=0;
   int iRet=0;
   printf("Enter number");
   scanf("%d",&iValue);
   iRet=SumNon(iValue);
   printf("multiplication of factors of number is%d",iRet);
   return 0;
}