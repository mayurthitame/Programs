import java.lang.*;

class Demo
{
    public int arr[];
    
    public Demo(int size)
    {
        System.out.println("Allocating the resources in constructor");
        this.arr=new int [size];
    }
    protected void finalize()
    {
        System.out.println("Deallocating the resources in finalize");
        this.arr=null;
    }
    
}

class GC
{
    public static void main(String arg[])
    {
        Demo dobj=new Demo(11);
        dobj=null;
        System.gc();
        System.out.println("End of main");
    }
    
}