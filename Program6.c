#include<stdio.h>

int main()
{
    int iNo1=0,iNo2=0;
    int iMult=0;
    printf("enter no:\n");
    scanf("%d",&iNo1);

    printf("enter no:\n");
    scanf("%d",&iNo2);

    printf("Entered First Value:%d\n",iNo1);
    printf("Entered Second Value:%d\n",iNo2);

    iMult=iNo1*iNo2;
    printf("Multiplication is %d\n",iMult);

   
   
    return 0;
}