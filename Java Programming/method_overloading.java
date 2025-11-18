class OverloadDemo 
{
    // Method 1 – two int parameters
    void sum(int a, int b) 
    {
        System.out.println("Sum of two integers = " + (a + b));
    }

    // Method 2 – three int parameters
    void sum(int a, int b, int c) 
    {
        System.out.println("Sum of three integers = " + (a + b + c));
    }

    // Method 3 – two double parameters
    void sum(double a, double b) 
    {
        System.out.println("Sum of two doubles = " + (a + b));
    }

    public static void main(String args[]) 
    {
        OverloadDemo obj = new OverloadDemo();

        obj.sum(10, 20);          // calls 1st method
        obj.sum(10, 20, 30);      // calls 2nd method
        obj.sum(5.5, 6.5);        // calls 3rd method
    }
}

public class method_overloading 
{
    public static void main(String[] args) 
    {
        OverloadDemo.main(args);
    }
}






/* 
--------------------output--------------------
Sum of two integers = 30
Sum of three integers = 60
Sum of two doubles = 12.0
*/