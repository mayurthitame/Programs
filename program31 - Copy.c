#include<stdio.h>
#include<stdbool.h>
int DisplayAddition(int iNo)
{
    int iCnt=0;
    int iSum=0;
      if(iNo<0)
      {
            iNo=-iNo;
      }

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
           if((iNo%iCnt)==0)
           {
                iSum=iSum+iCnt;
           }

    }
    return iSum;
}
bool CheckPerfect(int iNum)
{
    int iAns=0;
    iAns=DisplayAddition(iNum);
    if(iAns==iNum)
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
    printf("Enter number you want to find factors");
    scanf("%d",&iValue);
    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {
        printf("%d is perfect number",iValue);
    }
  else
    {
        printf("%d is not perfect number",iValue);
    }
    return 0;
}