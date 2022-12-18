#include<stdio.h>
#include<stdbool.h>


int main()
{
    char Arr[50];
        
    printf("Please enter full name \n");
    //scanf("%s",&Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your name is %s",Arr);
    
    return 0;
}