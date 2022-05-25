//Input:4
//output:1 2 3 4 4 3 1
//O(2N)

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
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