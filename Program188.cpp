#include<iostream>  

using namespace std;     

class Arithmatic
{
    public:
        
        int Addition(int iValue1,int iValue2)
        {
            int iAdd = 0;

            iAdd = iValue1 + iValue2;
            return iAdd;
        }
};

int main()  
{
    int iNo1 = 0, iNo2 = 0;
    int iAns = 0;

    cout<<"Enter first number :\n";
    cin>>iNo1;

    cout<<"Enter second number :\n";
    cin>>iNo2;

    Arithmatic obj;
    iAns = obj.Addition(iNo1,iNo2);
    
    cout<<"Additio is :"<<iAns<<"\n"; 

    return 0;
}

