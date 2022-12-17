/////////////////////////////////////////////////////////////////////////////////
//step to fallow while programming
/////////////////////////////////////////////////////////////////////////////////

//step 1 : understand the problem statement
//step 2 : write the algoritham
//step 3 : deside the programming language
//step 4 : write the program
//step 5 : test the program

/////////////////////////////////////////////////////////////////////////////////
//Problem statement : accept number from user and check is devisible by 5 or not
//input : 23
//output : 23 is not divisible by 5
//
//input : 25
//output : 25 is divisible by 5
//input : -20
//output : -20 is divisible by 5
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//Algoritham
/////////////////////////////////////////////////////////////////////////////////

/*
    START:
          Accept number from user as NO
          Divide that NO by 5 and check the value of remender
          if the value is o
            then display as NO is divisible by 5
        otherwise
            display as NO is not divisible by 5
        END
*/

/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     DivisibleByFive
//  Description :       To check whether input is divisible by 5 or not
//  Input :             Integer
//  Output :            Integer
// Author   :           Anant Krushna Mahadik(MI003)
//  Date  :             12/10/2022
//
/////////////////////////////////////////////////////////////////////////////////

bool DivisibleByFive(int iNo)
{
    int iAns=0;
    iAns=iNo % 5;

    if(iAns==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/////////////////////////////////////////////////////////////////////////////////
//Entry point of the application
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0;
    bool bRet=0;
    printf("Enter number : \n");
    scanf("%d",&iValue1);

    bRet=DivisibleByFive(iValue1);
    if(bRet==false)
    {
        printf("%d is not divisible by 5 :",iValue1);
    }
    else
    {
        printf("%d is divisible by 5 :",iValue1);   
    } 

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
//
//
//
/////////////////////////////////////////////////////////////////////////////////















