#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

// O_RDONLY     Open for reading
// O_WRONLY     Open for writing
// O_RDWR       Open for reading and writing
int OpenFile(char Name[])
{
    int fd = 0;
    fd = open(Name,O_RDWR);
    return fd;
}

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name that you want to open :");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to openfile \n");
    }
    else
    {
        printf("File is successfully open with FD %d \n",fd);
    }

    return 0;
}