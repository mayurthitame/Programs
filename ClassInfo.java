import java.lang.*;

class Demo
{

}
class ClassInfo
{
     public static void main(String Arg[])
     {
        Demo obj=new Demo();

        Class cref=obj.getClass();
        System.out.println("Class name of obj:"+cref.getName());

        String str="Marvellous";
        Class cref1=str.getClass();
        System.out.println("Class name of string:"+cref1.getName());

     }
}