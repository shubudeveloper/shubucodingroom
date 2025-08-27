import java.util.Scanner;
public class grade
{
    public static void main(String[] args)
    {
        Scanner num = new Scanner(System.in);

        System.out.print("Enter your marks: ");
        int marks = num.nextInt();

        System.out.println("Entered marks = " + marks);

        if(marks>=90)
        {
            System.out.println("Grade A+");
        }
        else if(marks>=80)
        {
            System.out.println("Grade A");
        }
        else if(marks>=70)
        {
            System.out.println("Grade B");
        }
        else if(marks>=60)
        {
            System.out.println("Grade C");
        }
        else if(marks>=50)
        {
            System.out.println("Grade D");
        }
        else if(marks>=40)
        {
            System.out.println("Grade P");
        }
        else
        {
            System.out.println("FAIL");
        }
        num.close();
    }
}





/* 
--------------------output--------------------
Enter your marks: 89
Entered marks = 89
Grade A
*/