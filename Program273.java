import java.util.*;

class Program273
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        MarvellousX obj = new MarvellousX();

        int iRet = obj.DigitCount(str);        
        System.out.println("Number of digit is :"+iRet);    
    }
}

class MarvellousX
{
    public int DigitCount(String s)
    {
        int iCnt = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if((s.charAt(i) >= '0') && (s.charAt(i) <= '9'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}