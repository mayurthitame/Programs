#include<stdio.h>

void DisplayR(int no)
{
    static int i=1;
    if(i<=no)
    {
        printf("*\n");
        i++;
        DisplayR(no);
    }
}

int main()
{
    int value=3;
    DisplayR(value);
    return 0;
}