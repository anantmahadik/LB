#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}

class Stack
{
    public:
        struct node *First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int no);  //insert
        int Pop();          //delete

};

Stack :: Stack()
{


}

bool Stack :: IsStackEmpty()
{

}

void Stack :: Push(int no)
{


}

int Stack :: Pop()
{


}

int main()
{


    return 0;
}