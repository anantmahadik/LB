#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
{

int iCnt = 1,iSum = 0;


    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
   
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// 6 28 497 8128

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect no : %d \n",iValue);
    }
    else
    {
         printf("%d is not perfect no : %d \n",iValue);
    }

    return 0;
}