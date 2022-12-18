#include<stdio.h>

int DisplayTables(int iNo)
{
    int iCnt =0 ;
    //int iMult =0 ;
    printf("Tables of %d is : \n ",iNo);
    printf("----------------------------\n");
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {

        printf("%d\n",iNo * iCnt);
       // iMult = iCnt * iNo;      
       // printf("%d \n",iMult);
    }
    
    printf("----------------------------\n");
/*
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
    विम बार चे 2 थेंब टाका ISME 100 निंबू की शक्ती हे
*/
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayTables(iValue);


    return 0;
}