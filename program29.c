#include<stdio.h>

void DisplaynonFactor(int iValue)
{
    int iCnt=0;

      if(iValue<0)
      {
            iValue=-iValue;
      }

    for(iCnt=1;iCnt<iValue;iCnt++)
    {
           if((iValue%iCnt)!=0)
           {
                printf("%d\n",iCnt);
           }
    }
}

int main()
{
    int iNo=0;
    printf("Enter number you want to find factors");
    scanf("%d",&iNo);
    DisplaynonFactor(iNo);
    return 0;
}