#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit=0;
    int iRev=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDuplicate=iNo;

    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
     }
     if(iDuplicate==iRev)
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
    bool bRet;
    printf("Enter number");
    scanf("%d",&iValue);
    bRet=CheckPalindrome(iValue);
    if(bRet==true)
    {
        printf("Number is palindrome");
     }
     if(bRet==false)
     {
         printf("Number is not palindrome");
     }

    return 0;
}