

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
   int iTemp=iNo*2;
    for(iCnt=2;iCnt<=iTemp;iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Plaease enter number of rows");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}