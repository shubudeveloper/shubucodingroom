import java.util.Scanner;
public class even_or_odd
{ 
    public static void main(String[] arg)
    {
        Scanner num = new Scanner(System.in);

        System.out.print("Enter any integer value: ");
        int value = num.nextInt();
        System.out.println("Entered value" + " = " + value);

        if(value%2==0)
        {
            System.out.print("Number is " + value + " and" + " is even.");
        }
        else
        {
            System.out.print("Number is " + value + " and" + " is odd.");
        }
        num.close();
    }   
}





/* 
--------------------output--------------------
Enter any integer value: 344
Entered value = 344
Number is 344 and is even.
*/