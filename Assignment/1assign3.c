#include<stdio.h>

void Display()
{
    int iCnt=0;
    for(int iCnt=5;iCnt>0;iCnt--)
    {
        printf("%d\n",iCnt);
        //iCnt++;
    }
}
int main()
{
    Display();
    return 0;
}