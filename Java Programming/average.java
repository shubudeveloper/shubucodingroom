import java.util.Scanner;
public class average
{
    public static void main(String[] args)
    {
        int sum = 0;

        Scanner obj = new Scanner(System.in);

        System.out.print("Enter the value of n: ");
        int n = obj.nextInt();

        int[] numbers = new int[n]; 

        System.out.println("Enter " + n + " numbers for which average to be find: ");
        for(int i=0; i<n; i++)
        {
            System.out.print("Enter value " + (i+1) + " : " );
            numbers[i] = obj.nextInt();
            sum += numbers[i];
        }

        System.out.println("Average" + " = " + (double)sum/n);

        obj.close();
    }
}





/* 
--------------------output--------------------
Enter the value of n: 5
Enter 5 numbers for which average to be find: 
Enter value 1 : 12
Enter value 2 : 23
Enter value 3 : 53
Enter value 4 : 24
Enter value 5 : 13
Average = 25.0
*/