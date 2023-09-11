//How to write file programatically 
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h> //used for linux programmers 


int main()
{
    char Fname[20];
    int fd = 0;

    printf("Please enter file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR); //stdio.h
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }

    write(fd,"Hello",5);

    close(fd);

    return 0;
}