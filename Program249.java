import java.util.*;

class Program249
{

    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        System.out.println("Enter first number :");
        iNo1 = sobj.nextInt();
        
        System.out.println("Enter second number :");
        iNo2 = sobj.nextInt();

        Arithematic obj = new Arithematic(iNo1,iNo2);
        
        iAns = obj.Addition();

        System.out.println("Addition is :"+iAns);

    }
}

class Arithematic
{
    public int iValue1;
    public int iValue2;
    
    public Arithematic(int i, int j)
    {
        iValue1 = i;
        iValue2 = j;
    }

    public int Addition()
    {
        int iSum = 0;
        iSum = iValue1 + iValue2;
        return iSum;
    }
}