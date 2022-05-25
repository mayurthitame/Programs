#include<stdio.h>

int PrintEven(int iNo)
{
    int iCnt=0;
    int counter=0;
   if(iNo<=0)
   {
       return -1;
   }
   for(iCnt=1;iCnt<=(iNo*2);iCnt++)
   {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
            counter=counter+1;
        }
        if(counter==iNo)
        {
            break;
        }
    }
}
int main()
{
    int iValue=0;
    int iRet=0;
   printf("Enter number");
   scanf("%d",&iValue);
   PrintEven(iValue);
   return 0;
}