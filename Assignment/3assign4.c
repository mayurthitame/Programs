#include<stdio.h>

void DisplayConvert(char acValue)
{
    if(islower(acValue))
    {
        printf("%c",toupper(acValue));
    }
    else
    if(isupper(acValue))
    {
        printf("%c",tolower(acValue));
    }

}
int main()
{
    char cValue='\0';
   printf("Enter charachter\n");
   scanf("%c",&cValue);
   DisplayConvert(cValue);
   return 0;
}