import java.util.*;
import java.io.*;

class Program412
{
    public static void main(String Ar[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter folder name :");
            String FolderName = sobj.nextLine();

            File fobj = new File(FolderName);

            if(fobj.exists())
            {
                File allfiles[] = fobj.listFiles();

                System.out.println("Number of files are :"+allfiles.length);
            }   
            else
            {
                System.out.println("There is no such folder...");
            }         
        }//End of try
        catch(Exception obj)
        {
            System.out.println("Exception occured : "+obj);
        }
    }//end of main
}//end of class