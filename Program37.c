#include<stdio.h>

int DisplayNonFactors(int iNo)
{
    int  iCnt = 0,iSum =0;
    printf("Non factors sum is :");
    for(iCnt = 1; iCnt < iNo; iCnt ++)
    {
        if((iNo % iCnt)!= 0)
        {
            iSum = iSum +iCnt;
        }

    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = DisplayNonFactors(iValue);

    printf("sum is %d",iRet);
    return 0;
}