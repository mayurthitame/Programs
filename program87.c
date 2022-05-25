//Input:5
//output: 1 * 3 * 5 *


#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

for(iCnt=1;iCnt<=iNo;iCnt++)
{
    if(iCnt%2==0)
    {
        printf("*\t");
    }
    else
    {
        printf("%d\t",iCnt);
    }
}

}

int main()
{
    int iValue=0;
    printf("Plaease enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}