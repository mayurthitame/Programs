#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fname[30];
    int fd=0;
    char Data[11];

    printf("Enter the file name that you want to open\n");
    scanf("%s",fname);

    fd=open(fname,O_RDWR);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened%d\n",fd);
    }
    lseek(fd,3,1);

    read(fd,Data,6);

   write(1,Data,6);
    close(fd);
    return 0;
}