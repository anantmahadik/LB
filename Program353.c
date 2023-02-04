#include<stdio.h>
//  4   +   3   +   2   +   1   =   10

int AdditionI(int No)
{
    static int Sum = 0;
    static int iCnt = 0;

    if(iCnt <= No)
    {
        Sum = Sum + iCnt;
        iCnt++;
        AdditionI(No);
    }
    return Sum;
}

int main()
{
    int Value = 0;
    int Ret = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);
    
    Ret = AdditionI(Value);
    printf("Addition is : %d\n",Ret);
    
    return 0;
}