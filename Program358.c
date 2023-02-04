#include<stdio.h>
#include<stdbool.h>
bool PerfectNo(int No)
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
        
        PerfectNo(No);
    }
    if(iSum == No)
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
    int Value = 0;
    bool Ret = 0;

    printf("Enter the number \n");
    scanf("%d",&Value);
    
    Ret = PerfectNo(Value);
    if(Ret == true)
    {
        printf("%d Number is perfect \n",Value);
    }
    else
    {
        printf("%dNumber is not perfect \n",Value);
    }

    return 0;
}