import java.lang.*;
import java.util.*;

class Number
{

	private int iNo;

	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter Number");
		this.iNo=sobj.nextInt();
	}
	public void Display()
	{
		System.out.println("Number is"+this.iNo);

	}
	public int Factorial()
	{
           int iCnt = 0;
           int iFact = 1;
           for(iCnt = 1;iCnt <= iNo;iCnt++)
            {
                iFact = iFact * iCnt;
            }
        return iFact;
	}

}
class FactOOP
{
	public static void main(String arg[])
	{
		int iRet=0;
		Number nobj=new Number();

		nobj.Accept();
		nobj.Display();
		
		iRet=nobj.Factorial();
		System.out.println("Factorial is:"+iRet);	
	}
}