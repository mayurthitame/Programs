import java.util.*;

class Exception1
{
	public static void main(String arr[])
	{
		int ans=0,no1=0,no2=0;
		Scanner sobj=new Scanner(System.in);

		System.out.println("Please Enter first number:");
		no1=sobj.nextInt();
	
		System.out.println("Please Enter second number:");
		no2=sobj.nextInt();
	
		try{
			ans=no1/no2;
			}
		catch(ArithmeticException obj)
		{
			System.out.println("Exception occured as:"+obj);
		}
		finally
			{
				sobj.close();
			}
		
		System.out.println("Division is:"+ans);

		
	}
}