#include<stdio.h>

int DisplayFactor(int iNo)
{
    int iCnt=0;
   if(iNo<=0)
   {
       iNo=-iNo;
   }
   for(iCnt=1;iCnt<=iNo/2;iCnt++)
   {
        if(iNo%iCnt==0 && iCnt%2==0)
        {
                printf("%d\t",iCnt);

        }
    }
}
int main()
{
    int iValue=0;
    int iRet=0;
   printf("Enter number");
   scanf("%d",&iValue);
   DisplayFactor(iValue);
   return 0;
}