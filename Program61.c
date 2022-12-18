#include<stdio.h>
#include<stdbool.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
   
}

bool CheckPalindrome(int iData)
{
    int iReverse = 0;
    iReverse = Reverse(iData);
    return(iReverse == iData);
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);
    bRet = CheckPalindrome(iValue);
    if(bRet == true)
    {
        printf("%d is palindrom \n",iValue);
    }
    else
    {
        printf("%d is not palindrom \n",iValue);
    }
    
    return 0;
}