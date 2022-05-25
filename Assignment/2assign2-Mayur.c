 #include<stdio.h>
void Accept(int iNo)
{

    while(iNo>0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue=0;
   printf("Enter how many stars");
   scanf("%d",&iValue);
   Accept(iValue);
   return 0;
}