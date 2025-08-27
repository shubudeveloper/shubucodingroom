import java.util.Scanner;
public class digit
{
    public static void main(String[] args) 
    {
        Scanner obj = new Scanner(System.in);
        int i,a,b,n,sum;

        System.out.print("Enter the value of n for which multiple to be printed: ");
        n = obj.nextInt();  

        System.out.println("The digits whose sum is multiple of " + n + " is as follows: ");

        for(i=1; i<100; i++)
        {
            a = i % 10;
            b = i / 10;
            sum = a + b;

            if(sum % n == 0)
            {
                System.out.println(i);
            }
            obj.close();
        }
    }
}





/*
--------------------output--------------------
The digits whose sum is multiple of 8 is as follows: 
8
17
26
35
44
53
62
71
79
80
88
97
*/