#include<stdio.h>

int DisplayNonFactors(int iNo)
{
    int  iCnt = 0;
    printf("Non factors number is :");
    for(iCnt = 1; iCnt < iNo; iCnt ++)
    {
        if((iNo % iCnt)!= 0)
        {
            printf("%d\n",iCnt);
        }

    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);

    return 0;
}