//  Demonstration of iteration using for loop
#include<stdio.h>

void Display(int iValue)
{
    int i=0;
    i = 1;  //1
    while(i <=iValue)  //2
    {
        printf("Jay Ganesh .....\n");   //4
        i++; // 3
    }
}

int main()
{
    int iNo=0;
    printf("Enter Number :");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}