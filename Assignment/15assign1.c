

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    int iSum=iRow+iCol;
    int k=1;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
             printf("%d\t",k);
                if(k==iSum+1)
                {
                    k=0;
                }
                  
                k++;
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