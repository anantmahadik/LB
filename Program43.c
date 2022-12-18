#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;
   for(iCnt = 1; iCnt <= (iNo /2); iCnt+=1)// iCnt
   {
        
            if((iNo % iCnt) == 0)
            {
                printf("%d\n",iCnt);
            }
  }

    printf("\n------------------------------------\n");
}
int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}