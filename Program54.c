#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        
        iNo = iNo / 10;
        iSum = iSum + (iNo % 10);
    }

    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);
    iRet = SumDigits(iValue);

    printf("Sum of digits are %d \n",iRet);
 
    return 0;
}