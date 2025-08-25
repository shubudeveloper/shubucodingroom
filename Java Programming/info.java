import java.util.Scanner;
public class info
{
    public static void main(String[] args)
    {
        Scanner my_info = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = my_info.nextLine();

        System.out.print("Enter your roll number: ");
        int roll = my_info.nextInt();
        my_info.nextLine();

        System.out.print("Enter any sentence: ");
        String sentence = my_info.nextLine();

        System.out.print("My name is " + name + "." + " My roll number is " + roll + "." + " The entered sentence is " + sentence + ".");
        my_info.close();
    }    
}





/*
--------------------output--------------------
Enter your name: Shubham Kumar
Enter your roll number: 22447
Enter any sentence: I am an engineering student
My name is Shubham Kumar. My roll number is 22447. The entered sentence is I am an engineering student.
*/