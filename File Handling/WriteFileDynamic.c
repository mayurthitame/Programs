#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[30];
    int fd=0,Size;
    int iCnt=0;

    printf("Enter the file name that you want to open\n");
    scanf("%s",fname);

   printf("Enter how many charachter you want to store");
   char Data[];

    fd=open(fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened%d\n",fd);
    }
    return 0;
}