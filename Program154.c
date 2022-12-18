#include<stdio.h>

int  strWhiteX(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }   

        str++;  // NOT *str pudhe data ne jato only use(str++)
    }
    return iCnt;

}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter sthing \n");
    scanf("%[^'\n']s",Arr);

    iRet = strWhiteX(Arr);

    printf("String after conversion is : %d \n " ,iRet);

    return 0;
}