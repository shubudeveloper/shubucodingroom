public class max_and_min
{
    public static void main(String[] args)
    {
        int a = 10;
        int b = 20;
        float num = -25.67f;

        System.out.println("Maximumm Value: " + Math.max(a,b));
        System.out.println("Minimumm Value: " + Math.max(a,b));

        System.out.println(a+"^4: " + Math.pow(a,4));
        System.out.println(b+"^4: " + Math.pow(b,4));

        System.out.println("Square Root of " + a + " = " + Math.sqrt(a));
        System.out.println("Square Root of " + b + " = " + Math.sqrt(b));

        System.out.println("Absolute value of " + num + " = " + Math.abs(num));
    }
}





/* 
--------------------output--------------------
Maximumm Value: 20
Minimumm Value: 10
10^4: 10000.0
20^4: 160000.0
Square Root of 10 = 3.1622776601683795
Square Root of 20 = 4.47213595499958
Absolute value of -25.67 = 25.67
*/