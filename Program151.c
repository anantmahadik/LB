#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;  // NOT *str pudhe data ne jato only use(str++)
    }

}

int main()
{
    char Arr[20];

    printf("Please enter sthing \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("String after conversion is : %s \n " ,Arr);

    return 0;
}