import java.util.*;
/*
    Row = 4
    Col = 4

    1   2   3   4
    5   6   7   8
    9   1   2   3
    4   5   6   7

*/
class Program288
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter number of rows :");
        int i = sobj.nextInt();
        
        System.out.println("Enter number of columns :");
        int j = sobj.nextInt();
        
        pobj.Display(i,j);
    }
}

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int iCnt = 1;
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                System.out.print(iCnt+"\t");
                
                if(iCnt == 9)
                {
                    iCnt = 0;
                }
                iCnt++;
            }
            System.out.println();
        }
    }
}
