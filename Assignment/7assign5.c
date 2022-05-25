#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit=0;
    int Esum=0;
    int Osum=0
    ;
    int SumDiff=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            Esum=Esum+iDigit;
        }
         if(iDigit%2!=0)
        {
            Osum=Osum+iDigit;
        }
        iNo=iNo/10;
     }
     SumDiff=Esum-Osum;

  return SumDiff;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet=CountDiff(iValue);
    printf("Difference of Summation is%d",iRet);
    return 0;
}