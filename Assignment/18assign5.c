

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
 for(i=iRow;i>=1;i--)
 {
    for(j=1;j<=iCol;j++)
    {
        if(i==j||i==iRow||j==iCol||i==1||j==1)
        {
            printf("%d\t",j);
        }
         else
        {
            printf("\t");
        }
    }
    printf("\n");
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Plaease enter number of rows");
    scanf("%d",&iValue1);

    printf("Plaease enter number of columns");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}