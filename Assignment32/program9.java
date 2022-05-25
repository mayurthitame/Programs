import java.lang.*;
import java.util.*;

class program9
{
    public static void main(String arg[])
    {
           int i=0,j=0,m=0;
           Scanner sobj=new Scanner(System.in);
           System.out.println("Enter size of array rows");

            int size=sobj.nextInt();

            int arr[][]=new int[size][];
            System.out.println("Enter size of colums");
            for(i=0;i<size;i++)
           {
                arr[i]=new int[sobj.nextInt()];
           }
        System.out.println("Enter numbers for each column");
             for(i=0;i<arr.length;i++)
             {
                   for(j=0;j<arr[i].length;j++)
                   {
                        System.out.println("enter ");
                         arr[i][j]=sobj.nextInt();
                   }
              }
                  System.out.println("Elements of 2D Jagged Array");
        for (i = 0; i < arr.length; i++)     //For Rows
        {
            for (j = 0; j < arr[i].length; j++)    //For Columns
            {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}