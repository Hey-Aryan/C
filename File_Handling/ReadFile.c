//How to read file programatically 
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> //used for linux programmers 


int main()
{
    char Fname[20];
    int fd = 0;
    char Data[20];

    printf("Please enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR); // . O_RDONLY   0_WRONLY ORDWR
    //this functions are macro #defined in header file
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }

    read(fd,Data,10);   //10 is the reading limit
    printf("Data from file : %s\n",Data);

    close(fd);

    return 0;
}