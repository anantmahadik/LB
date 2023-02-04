#include<stdio.h>

int SumFactorialR(int No)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        SumFactorialR(No);
    }
    return iSum;
}

int main()
{
    int Value = 0;
    int Ret = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);
    
    Ret = SumFactorialR(Value);
    printf("Factorial sum is : %d",Ret);

    return 0;
}