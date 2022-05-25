#include<stdio.h>
#define TRUE 1
#define FALSE 0

int OddEven(int iNo)
{
    int iCnt=0;
   if(iNo<0)
   {
       iNo=-iNo;
   }
   if(iNo%2==0)
   {
        return TRUE;
   }
   else
   {
        return FALSE;
   }

}
int main()
{
    int iValue=0;
    int iRet=0;
   printf("Enter number");
   scanf("%d",&iValue);
   iRet=OddEven(iValue);
   if(iRet==TRUE)
   {
        printf("number %d is even",iValue);
   }
   if(iRet==FALSE)
   {
           printf("number %d is odd",iValue);
   }
   return 0;
}