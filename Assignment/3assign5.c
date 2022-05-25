#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char acValue)
{
    if(acValue=="a" || acValue=="e" || acValue=="i" || acValue=="o" || acValue=="u")
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
    char cValue='\0';
    bool bRet=false;
   printf("Enter charachter\n");
   scanf("%c",&cValue);
   bRet=ChkVowel(cValue);
   if(bRet==true)
   {
        printf("%c is vowel\n",cValue);
   }
   if(bRet==false)
   {
        printf("%c is not vowel\n",cValue);
   }
   return 0;
}