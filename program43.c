#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
    int iCnt=0;
    int iFactCnt=0;

    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
           if((iNo%iCnt)==0)
           {
                iFactCnt++;
           }

    }
    return iFactCnt;
}
bool CheckPrime(int iNum)
{
    int iRet=0;
    iRet=CountFactor(iNum);
    if(iRet==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter number");
    scanf("%d",&iValue);
    bRet=CheckPrime(iValue);
    if(bRet==true)
    {
        printf("%d is Prime number",iValue);
    }
  else
    {
        printf("%d is not Prime number",iValue);
    }
    return 0;
}