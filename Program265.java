import java.util.*;

class Program265
{
    public static void main(String a[])
    {
        Scanner sobj =new Scanner(System.in);
        System.out.println("Enter the size of array you want to create");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);

        obj.Accept();
        obj.Display();
        obj.Reverse();
        System.out.println("Array after reverse operator :");
        obj.Display();
    }
}

class ArrayX
{
    protected int Arr[];

    protected ArrayX(int iSize)
    {
        Arr =  new int[iSize];
    }

    protected void Accept()
    {
        System.out.println("Enter the "+Arr.length+" element :");
        Scanner sobj = new Scanner(System.in);
        
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no: "+(iCnt + 1));
            Arr[iCnt] = sobj.nextInt(); 
        }

    }
    
    protected void Display()
    {
        System.out.println("Elements are:");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public void Reverse()
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        int iTemp = 0;

        while(iStart < iEnd)
        {
            iTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = iTemp;

            iStart++;
            iEnd--;    
        }
    }
}