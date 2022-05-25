

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t#\t",iCnt);
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