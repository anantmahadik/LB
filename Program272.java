import java.util.*;

class Program272
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();
        
        MarvellousX obj = new MarvellousX();

        int iRet = obj.UpperCount(str);        
        System.out.println("Upper case latter is :"+iRet);    
    }
}

class MarvellousX
{
    public int UpperCount(String s)
    {
        int iCnt = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}