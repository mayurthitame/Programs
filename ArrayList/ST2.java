import java.lang.*;
import java.util.*;

class Student
{
	public int rno;
	public String name;
	public int marks;

	public Student(int a,String str,int b)
	{
		this.rno=a;
		this.name=str;
		this.marks=b;
	}
	public void Display()
	{
		System.out.println("Roll no is: "+this.rno+"name is: "+this.name+"marks"+this.marks);
	}
}

class ST2
{
	public static void main(String arg[])
	{
		Stack <Student> obj=new Stack<Student>();

		Student s1=new Student(11,"Mayur",80);
		Student s2=new Student(12,"Sachin",90);
		Student s3=new Student(13,"Harshal",85);
		
		obj.push(s1);
		obj.push(s2);
		obj.push(s3);

		Student ref=null;
		Iterator itr=obj.iterator();
		while(itr.hasNext())
		{
			ref=(Student)itr.next();
			ref.Display();
		}

		System.out.println("Popped Elements are");
		
		ref=obj.pop();
		ref.Display();

		ref=obj.pop();
		ref.Display();
	}
}