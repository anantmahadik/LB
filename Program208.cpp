#include<iostream>

using namespace std;

// Input : 7985674
// Output :     4 cccurs 1 times
// Output :     5 cccurs 1 times
// Output :     6 cccurs 1 times
// Output :     7 cccurs 2 times
// Output :     8 cccurs 1 times
// Output :     9 cccurs 1 times

class DigitX
{
    public :
        int iNo;

        DigitX()
        {
            iNo = 0;
        }

        DigitX(int i)
        {
            iNo = i;
        }

        void DisplayFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10] = {0};

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                Frequency[iDigit]++;
                iTemp = iTemp / 10;
            }            

            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt] > 0)
                {
                    cout<<iCnt<<"Occers at :"<<Frequency[iCnt]<<"times"<<"\n";
                }
            }
        }

};

int main()
{
    int iValue = 0,iRet = 0;

    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();
    
    
    return 0;
}