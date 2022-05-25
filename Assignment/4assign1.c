#include<stdio.h>

int FactorMult(int iNo)
{
    int iCnt=0;
    int iMult=1;
   if(iNo<0)
   {
       iNo=-iNo;
   }
   for(iCnt=2;iCnt<=iNo/2;iCnt++)
   {
        if(iNo%iCnt==0)
        {
           // printf("%d\n",iCnt);
            iMult=iMult*iCnt;
        }
   }
   return iMult;

}
int main()
{
    int iValue=0;
    int iRet=0;
   printf("Enter number");
   scanf("%d",&iValue);
   iRet=FactorMult(iValue);
   printf("multiplication of factors is %d",iRet);
   return 0;
}