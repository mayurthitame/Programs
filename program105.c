

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='\0';
    if(iRow!=iCol)
    {
        printf("Invalid Input\n");
        return;
    }

     for(i=1,ch='a';i<=iRow;i++,ch++)
     {
        for(j=1;j<=iCol;j++)
        {
            printf("%c\t",ch);
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