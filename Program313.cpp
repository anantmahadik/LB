#include<iostream>
using namespace std;

template <class T>

T Display(T Arr[], int iSize)
{
    int iCnt = 0;
    T iMax = Arr[0];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int Data[] = {10,20,30,40};

    int iRet = Display(Data,4);
    cout<<"Max num is "<<iRet<<"\n";
    
    float Dataf[] = {10,20,30,40};

    float fRet = Display(Dataf,4);
    cout<<"Max num is "<<fRet<<"\n";
    
    return 0;
}
