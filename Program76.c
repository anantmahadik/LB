#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
void DisplayEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0, iEvenCnt = 0,iOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOdd++;
        }
    }
    printf("Even numbers is :%d\n",iEvenCnt);
    printf("Even numbers is :%d\n",iOdd);   // iSize - iEvenCnt      
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // Step 4 : Call the function
    DisplayEvenOdd(ptr, iLength);

    

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}