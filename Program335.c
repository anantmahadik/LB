#include<stdio.h>
#include<stdbool.h>
// 12th bit
typedef unsigned int UINT;

// 
// 0000 0000 0000 0000 0000 1000 0000 0000
// 0    0       0   0   0     8      0   0
// 00000200
// 0X00000800

bool CheckBit(UINT No)
{
    UINT iMask = 0X00000800;
    UINT Result = 0;

    Result = No & iMask;

    if(Result == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }   
}

int main()
{
    UINT Value = 11;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("12th bit is on \n");
    }
    else
    {
        printf("12th bit is off");
    }

    return 0;
}