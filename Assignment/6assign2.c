#include<stdio.h>
#include<stdbool.h>

bool CHKZero(int iNo)
{
    int iDigit=0;
    int iCnt=0;
   bool bFlag=false;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            bFlag=true;
        }
        iNo=iNo/10;
     }
     if(bFlag==true)
     {
        return true;
     }
     else{
            return false;
        }
}
int main()
{
    int iValue=0;
    bool bRet;
    printf("Enter number");
    scanf("%d",&iValue);
    bRet=CHKZero(iValue);
    if(bRet==true)
    {
        printf("%d contains 0",iValue);
    }
    if(bRet==false)
    {
        printf("%d does not contains 0",iValue);
    }
    return 0;
}