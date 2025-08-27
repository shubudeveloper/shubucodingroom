import java.util.Scanner;
public class sum_using_while_loop 
{
    public static void main(String[] args) 
    {
        Scanner obj = new Scanner(System.in);

        System.out.print("Enter the upper limit value: ");
        int upperlimit = obj.nextInt();

        int num = 1;
        int sum = 0;

        while(num<=upperlimit)
        {
            sum = sum + num;
            num++;
        }
        System.out.println("Sum of numbers from 1 to " + upperlimit + " is " + sum);
        obj.close();
    }
}





/* 
--------------------output--------------------
Enter the upper limit value: 12
Sum of numbers from 1 to 12 is 78
*/