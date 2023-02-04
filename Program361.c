#include<stdio.h>
#include<stdbool.h>

int CountDigitsI(int No)
{
    
    static int iSum = 0;
    static int  iDigit = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        iSum = iSum + iDigit;
        No = No / 10;
        CountDigitsI(No);
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);

    iRet = CountDigitsI(Value);

    printf("Number of digits are : %d \n",iRet);
    
    return 0;
}