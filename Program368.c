#include<stdio.h>

int Display(char * str)
{
    if(*str != '\0')
    {
        //str++;
        //Display(str++);
        printf("%s\n",str);
        Display(++str);
        printf("%s\n",str);
        
        
    }

}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}