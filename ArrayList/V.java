import java.lang.*;
import java.util.*;

class V
{
	public static void main(String arg[])
	{
		Vector <Integer> obj=new Vector<Integer>(12);

		obj.add(12);
		obj.add(21);
		obj.add(52);
		obj.add(101);
		obj.add(101);
		obj.add(99);
		
			System.out.println("Capacity "+obj.capacity());
				System.out.println("Size "+obj.size());

		int i=0;
		for(i=0;i<obj.size();i++)
		{
			System.out.println(obj.get(i));
		}
		System.out.println("");


		int no=0,cnt=0;
		for(i=0;i<obj.size();i++)
		{
			no=obj.get(i);
			if(no%2==0)
			{
				cnt++;
			}
		}
		System.out.println("Even elements are:"+cnt);
		Iterator iobj=obj.iterator();
		while(iobj.hasNext())
		{
			System.out.println(iobj.next());
		}
		obj.clear();

	}
}