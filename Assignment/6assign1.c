#include<stdio.h>
#include<stdbool.h>

void DisplayDigit(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
     }
}
int main()
{
    int iValue=0;
   // bool bRet;
    printf("Enter number");
    scanf("%d",&iValue);
    DisplayDigit(iValue);


    return 0;
}