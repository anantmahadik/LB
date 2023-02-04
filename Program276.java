import java.util.*;

class Program276
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
        char Arr[] = s.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}