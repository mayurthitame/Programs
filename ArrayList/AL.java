import java.lang.*;
import java.util.*;

class AL
{
	public static void main(String arg[])
	{
		ArrayList<String> obj= new ArrayList<String>();

		obj.add("January");
		obj.add("February");
		obj.add("March");
		obj.add("April");
		obj.add(2,"New");
		obj.add("April");
		obj.add("April");
		System.out.println("Elements in array are:"+obj);
		System.out.println("Size is:"+obj.size());
		System.out.println("Empty check:"+obj.isEmpty());

	for(int i=0;i<obj.size();i++)
	{
		System.out.println(obj.get(i));

	}	
	String str;
	int Cnt=0;
	for(int i=0;i<obj.size();i++)
	{
		str=obj.get(i);

		if(str.equals("April"))
		{
			Cnt++;
		}
	}
	System.out.println("April occurs at "+Cnt+" times in arrayList");


		if(obj.contains("April"))
		{
			System.out.println("Element is there");
		}

		int ret=obj.indexOf("April");
		System.out.println("Element is at :"+ret);

		System.out.println("Element at index 3 is:"+obj.get(3));
		//System.out.println("Element is at :"+hasNext(obj));
	
		obj.remove("April");
		System.out.println("Updated list is:"+obj);


		obj.clear();
		System.out.println("Updated list is :"+obj);
	}
}