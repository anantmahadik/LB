import java.util.*;

class Program248
{

    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        System.out.println("Enter first number :");
        iNo1 = sobj.nextInt();
        
        System.out.println("Enter second number :");
        iNo2 = sobj.nextInt();

        Arithematic obj = new Arithematic();
        
        iAns = obj.Addition(iNo1,iNo2);

        System.out.println("Addition is :"+iAns);

    }
}

class Arithematic
{
    public int Addition(int i, int j)
    {
        int iSum = 0;
        iSum = i + j;
        return iSum;
    }
}