import java.util.*;
/*
    Input : Hello

    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o

*/
class Program297
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter string :");
        String s = sobj.nextInt();

        pobj.Display(s);
    }
}

class Pattern
{
    public void Display(String str)
    {
        char Arr[] = str.toCharArray();
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                System.out.print(str.charAt()+"\t");
            }
            System.out.println();
        }
    }
}
