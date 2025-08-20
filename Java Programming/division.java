public class division{
    public static void main(String[] args)
    {
        int num = 480;
        if(num%3==0 && num%4==0)
        {
            System.out.println("Number is" + " " + num + " which is divisible by both 3 and 4.");
        }
        else
        {
            System.out.println("Number is" + " " + num + " which is either divisible by 3 or 4" + " or" + " neither.");
        }  
    }
}





/*
--------------------output--------------------
Number is 480 which is divisible by both 3 and 4.
*/
