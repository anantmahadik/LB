//factors of number Sum
#include<stdio.h>
// 0(N/2)
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
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    iRet = SumFactors(iValue);
    printf("Factos of Sum  is :%d \n",iRet);
 

    return 0;
}