#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >= 97) && (ch <= 122))
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
    char cValue ='\0';
    bool bRet = false;

    printf("Please enter 1 character \n");
    scanf("%c",&cValue);

    bRet = CheckSmall(cValue);
    if(bRet == true)
    {
        printf("%C is a small case latter \n",cValue);
    }
    else
    {
        printf("%c is not a small case latter \n",cValue);
    }
    return 0;
}