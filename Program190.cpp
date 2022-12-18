#include<iostream>  
using namespace std;     
//template
//Problems on numbers

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        void Function()
        {
            // Here is the function for bussiness logic
        }
};
int main()  
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;
    
    Numbers obj(iValue);

    obj.Function();

    return 0;
}

