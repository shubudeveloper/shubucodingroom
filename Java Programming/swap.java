public class swap
{
    public static void main(String[] args)
    {
        int a = 10, b = 40;
        System.out.println("Before swapping: a = " + a + ", b = " + b);

        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("After swapping: a = " + a + ", b = " + b);
    }
}





/* 
--------------------output--------------------
Before swapping: a = 10, b = 40
After swapping: a = 40, b = 10

*/
