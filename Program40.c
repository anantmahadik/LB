#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = iNo;
    printf("-----------------------------------\n");
    while(iCnt > 0)
    {
        printf("%d\t",iCnt);
        iCnt --;
    }

    printf("\n------------------------------------\n");
}
int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}