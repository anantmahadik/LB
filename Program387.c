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

    fd = open(Fname,O_RDWR | O_APPEND); // append is ahe tyachya pudhe liha

    if(fd == -1)
    {
        return -1;
    }

    printf("Enter the data that you want to write in file : \n");
    scanf(" %[^'\n']s",Data);

    Length = strlen(Data);

    // write(kashat, kay,kiti)
    write(fd,Data,Length);
    return 0;
}