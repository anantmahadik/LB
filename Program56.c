#include<stdio.h>

void CountEvenDigits(int iNo)
{
    int iEvenCnt = 0;
    int iOddCnt = 0;
    int iDigit = 0;

    if(iNo == 0)
    { 
        printf("Even counter is : 1 \n");
        printf("Odd counter is : 0 \n");
        return;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iNo = iNo / 10;
        
    }
    printf("Even counter is %d \n",iEvenCnt);
    printf("Odd counter is %d \n",iOddCnt);
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);
    CountEvenDigits(iValue);

    return 0;
}