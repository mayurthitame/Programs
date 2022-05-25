import java.lang.*;
import java.util.*;

class ArrayX
{

	public int Arr[];

	public ArrayX(int iNo)
	{
		Arr=new int[iNo];
	}

	public void Accept()
	{
		int iCnt=0;
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter the values");

		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt]=sobj.nextInt();
		}

	}
	public void Display()
	{
		int iCnt=0;
		System.out.println("Elements from array are");

		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
		public int Addition()
		{
  			int iSum=0,iCnt=0;
			for(iCnt=0;iCnt<Arr.length;iCnt++)
			{
				iSum=iSum+Arr[iCnt];
			}
			return iSum;

		}
}
class AdditionOOP142
{
	public static void main(String arg[])
	{
		int iLenght=0,iRet=0;
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter value for constructor");
		iLenght=sobj.nextInt();

		ArrayX obj1=new ArrayX(iLenght);

		obj1.Accept();
		obj1.Display();

		iRet=obj1.Addition();
		System.out.println("Addition of elements is:"+iRet);
		obj1=null;
	}
}