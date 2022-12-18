//factors of number 
#include<stdio.h>

void DisplayFactors(int iNo)
{
/*
    (8 % 1) == 0
    (8 % 2) == 0
    (8 % 3) == 0
    (8 % 4) == 0
    (8 % 5) == 0
    (8 % 6) == 0
    (8 % 7) == 0
    (8 % 8) == 0
*/
int iCnt = 1;

for(iCnt = 1; iCnt < iNo; iCnt++)
{
    if((iNo % iCnt) == 0)
    {
        printf("%d \n",iCnt);
    }

}

}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    printf("Factos are : \n");
    DisplayFactors(iValue);
    return 0;
}