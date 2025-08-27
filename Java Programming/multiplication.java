import java.util.Scanner;
public class multiplication
{
    public static void main(String[] args) 
    {
        Scanner obj = new Scanner(System.in);

        System.out.print("Enter any number of your choice: ");
        int num = obj.nextInt();

        System.out.println("Entered number = " + num);

        for(int i=1; i<=10; i++)
        {
            System.out.println(num + " * " + i + " = " + (num*i));
        }
        obj.close();
    }
}





/*
--------------------output--------------------
Enter any number of your choice: 5
Entered number = 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/