import java.lang.*;
import java.util.*;

class Arrya5
{
	public static void main(String a[])
	{
		int Arr[]={10,20,30,40,50};
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the index");
		int index=sobj.nextInt();
		try
		{
		System.out.println("Element at index"+index+"is"+Arr[index]);
		}
	catch(Exception obj)
		{}
		catch(ArrayIndexOutOfBoundsException obj)
		{
			System.out.println("EXCEPTION IS"+obj);
		}
	
	}
}