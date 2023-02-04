import java.util.*;

class Program262
{
    public static void main(String a[])
    {
        Scanner sobj =new Scanner(System.in);
        System.out.println("Enter the size of array you want to create");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);

        obj.Accept();
        obj.Display();
        int iRet = obj.Addition();
        System.out.println("Addition of all elements is :"+iRet);
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

    public int Addition()
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}