#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0;
    int iSum=0;
    int iNonSum=0;
    int iDiff=0;
   if(iNo<0)
   {
       iNo=-iNo;
   }
   for(iCnt=1;iCnt<=iNo/2;iCnt++)
   {
        if(iNo%iCnt==0)
        {
           iSum=iSum+iCnt;
        }
     }
     for(iCnt=2;iCnt<=iNo;iCnt++)
     {
        if(iNo%iCnt!=0)
        {
            iNonSum=iNonSum+iCnt;
        }
      }
   iDiff=iSum-iNonSum;
   return iDiff;
}
int main()
{
   int iValue=0;
   int iRet=0;
   printf("Enter number");
   scanf("%d",&iValue);
   iRet=FactDiff(iValue);
   printf("difference between summation of factors and non factors number is%d",iRet);
   return 0;
}