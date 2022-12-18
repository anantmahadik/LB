#include<stdio.h>
// 1 * 2 * 3 * 4 * 

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);    //Variable Data
        printf("*\t");      //Fixed Data
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}