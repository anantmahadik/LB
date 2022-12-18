#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMin;
}
int main()
{
    int iValue = 0,iRet = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);

    printf("Smallest digit is :%d\n",iRet);
   
    return 0;
}