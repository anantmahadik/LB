#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0, Length = 0;
    char Data[100];
    
    printf("Enter the file name that you want to open :");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        return -1;
    }

    //  read(kuthun,kashat,kiti);
    Length = read(fd,Data,18);

    printf("Data from file is\n");
    write(1,Data,Length);

    return 0;
}

//  0   standard input device   keyboard
//  1   standard output device  console
//  2   standard error device   console