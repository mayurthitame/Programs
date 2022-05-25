import java.lang.*;

class Employee
{
    public String name;
    public int Salary;

    public Employee(String str,int no)
    {
        this.name=str;
        this.Salary=no;
    }
    public String toString()
    {
        return name+"->"+Salary;
    }

}
class Object1
{
    public static void main(String arg[])throws Exception
    {
            Employee eobj=new Employee("Piyush",11000);
           System.out.println(eobj.toString());
    }

    
}