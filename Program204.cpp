// Template for N number of problems
#include<iostream>

using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int i)
        {
            cout<<"Allocating memory of resources : \n";
            iSize = i;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Dallocating memory of resources : \n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements : \n";

            for(int iCnt = 0; iCnt<iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        
        void Display()
        {
            cout<<"Elements of array are : \n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
      
};

class MarvellousLB : public ArrayX
{   
    public:
        MarvellousLB(int i):ArrayX(i)   //BASE member initilization
        {}

        void Function_Name()
        {
            // Logic   
        }
};

int main()
{
    int iLength = 0,iRet = 0;;

    cout<<"Enter the size of array : "<<"\n";
    cin>>iLength;

    MarvellousLB * obj = new MarvellousLB(iLength);

    obj->Accept();
    obj->Display();

    iRet = obj->Function_Name();

    cout<<"Smallest elements is :"<<iRet<<"\n";

    delete obj;

    return 0;
}