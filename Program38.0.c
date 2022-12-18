#include<stdio.h>

int DisplayTables(int iNo)
{
    int iCnt = 0,iMult = 0;

    iCnt = iNo * 1;
    printf("Enter Number :%d\n ",iCnt);
    iCnt = iNo * 2;
    printf("Enter Number :%d\n ",iCnt);
    iCnt = iNo * 3;
    printf("Enter Number :%d\n ",iCnt);
    iCnt = iNo * 4;
    printf("Enter Number :%d\n ",iCnt);
    iCnt = iNo * 5;
    printf("Enter Number :%d\n ",iCnt);
    iCnt = iNo * 6;
    printf("Enter Number :%d\n ",iCnt);
    iCnt = iNo * 7;
    printf("Enter Number :%d\n ",iCnt);
    iCnt = iNo * 8;
    printf("Enter Number :%d\n ",iCnt);
    iCnt = iNo * 9;
    printf("Enter Number :%d\n ",iCnt);
    iCnt = iNo * 10;
    printf("Enter Number :%d\n ",iCnt);


}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = DisplayTables(iValue);


    return 0;
}