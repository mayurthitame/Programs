import java.lang.*;
import java.util.*;
import java.io.*;

class program8
{
    public static void main(String arg[]) throws IOException
    {
        InputStreamReader iobj=new InputStreamReader(System.in);
        BufferedReader bobj=new BufferedReader(iobj);

        System.out.println("Enter the string ");
        String str=bobj.readLine();
        System.out.println("Length of string is"+str.length());
    }
}