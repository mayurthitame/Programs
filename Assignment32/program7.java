import java.lang.*;
import java.util.*;

class program7
{
    public static void main(String arg[])
    {
           int iCnt=0;
           int iMax=0;
           Scanner sobj=new Scanner(System.in);
           System.out.println("Enter how many numbers");
            int size=sobj.nextInt();
            int arr[]=new int[size];
            System.out.println("Enter numbers");

           for(iCnt=0;iCnt<arr.length;iCnt++)
           {
                arr[iCnt]=sobj.nextInt();
           }
           iMax=arr[0];
           for(iCnt=0;iCnt<arr.length;iCnt++)
           {

                if(iMax<arr[iCnt])
               {
                    iMax=arr[iCnt];
               }
           }
           System.out.println("maximum number"+iMax);
    }
}