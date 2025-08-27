import java.util.Scanner;
public class shubham
{
    public static void main(String[] args)
    {
        Scanner student = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = student.nextLine();
        
        System.out.println("Hello " + name + ", Welcome to Java Programming!");
        student.close();
    }    
}





/* 
--------------------output--------------------
Enter your name: Shubham
Hello Shubham, Welcome to Java Programming!
*/