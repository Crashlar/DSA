// class A
class A
{
    int x = 10;
}

// class B
class B extends A
{
    @Override
    int x = 20;
}

// Driver class
public class name
{
    public static void main(String args[])
    {
        A a = new B(); // object of type B

        // Data member of class A will be accessed
        System.out.println(a.x);
    }
}