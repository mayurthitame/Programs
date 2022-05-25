#include<stdio.h>

void DisplayOdd(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit %2!=0)
        {
            printf("odd digits are %d\n",iDigit);
        }
        iNo=iNo/10;
     }
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    DisplayOdd(iValue);
    return 0;
}