#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    // Step1 : Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    // Step2 : Initialize the node
    newn->data = No;
    newn->next =NULL;

    //Step3 : Check linked list is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }

}
void InsertLast(PPNODE First, int No)
{
    // Step1 : Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    int temp = PNODE;
    // Step2 : Initialize the node
    newn->data = No;
    newn->next =NULL;

    //Step3 : Check linked list is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp->next;
        }
        PNODE ->
    }

}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\t->",First->data);
        First = First->next;
    }
    printf("NULL\n");

}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;

}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    iRet = Count(Head);
    printf("Number of element is %d",iRet);
    return 0;
}
