#include<stdio.h>

int FactorialR(int No)
{
    static int iCnt = 1;

    if(iCnt <= (No/2))
    {
        if((No % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorialR(No);
    }
}

int main()
{
    int Value = 0;
    int Ret = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);
    
    FactorialR(Value);
        
    return 0;
}