#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;  // NOT *str pudhe data ne jato only use(str++)
    }

}

int main()
{
    char Arr[20];

    printf("Please enter sthing \n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("String after conversion is : %s \n " ,Arr);

    return 0;
}