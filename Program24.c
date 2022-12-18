#include<stdio.h>

void Display(int iValue)
{
    int i=1;;
    while(i<=iValue)
    {
    printf("Marvellous: %d\n",i);
    i++;
    }
}

int main()
{
    int iNo=0;
    printf("Enter number :\n");
    scanf("%d",&iNo);


    Display(iNo);

    return 0;
}