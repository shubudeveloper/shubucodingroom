import java.util.Scanner;
public class sum
{
    public static void main(String[] args)
    {
        Scanner num = new Scanner(System.in);

        System.out.print("Enter the value of a: ");
        int a = num.nextInt();
        
        System.out.print("Enter the value of b: ");
        int b = num.nextInt();

        int sum = a+b;
        
        System.out.println("Sum of "+ a + " and " + b + " is " + sum);
        num.close();
    }
}





/* 
--------------------output--------------------
Enter the value of a: 77
Enter the value of b: 81
Sum of 77 and 81 is 158
*/