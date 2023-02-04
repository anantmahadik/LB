#include<iostream>
using namespace std;

template <class T>

T Display(T Arr[], int iSize)
{
    int iCnt = 0;
    T iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int Data[] = {10,20,30,40};

    int iRet = Display(Data,4);
    cout<<"Sum is "<<iRet<<"\n";
    

    
    return 0;
}
