import java.lang.*;
import java.util.*;

class program8
{
    public static void main(String arg[])
    {
           int iCnt=0;
           int iSum=0;
           int iAvg=0;
           Scanner sobj=new Scanner(System.in);
           System.out.println("Enter how many numbers");
            int size=sobj.nextInt();
            int arr[]=new int[size];
            System.out.println("Enter numbers");

           for(iCnt=0;iCnt<arr.length;iCnt++)
           {
                arr[iCnt]=sobj.nextInt();
           }
           for(iCnt=0;iCnt<arr.length;iCnt++)
           {
                iSum=iSum+arr[iCnt];
           }
           iAvg=iSum/size;
           System.out.println("Sum of number is"+iSum);
           System.out.println("Average of number is"+iAvg);
    }
}