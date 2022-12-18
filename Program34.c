//factors of number Sum
#include<stdio.h>
#include<stdbool.h>
int SumFactors(int iNo)
{

int iCnt = 1;
int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
   
    }
 return iSum;
}
// 6 28 497 8128
bool CheckPerfect(int iData)
{
    int iAns = 0;

    iAns = SumFactors(iData);
    if(iAns == iData)
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