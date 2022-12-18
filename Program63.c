#include<stdio.h>
#include<stdbool.h>


bool CheckPalindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = iNo;

    for(iDigit = 0,iRev = 0;iNo != 0;iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
    }

    if(iRev == iTemp)
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