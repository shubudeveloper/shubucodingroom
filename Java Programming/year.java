public class year
{
    public static void main(String[] args)
    {
        int year = 2024;
        boolean isleapyear = false;
        if(year%4==0)
        {
            isleapyear=true;
            if(isleapyear)
            {
                System.out.println(year + " is a leap year.");
            }
        }
        else
        {
            System.out.println(year + " is not a leap year.");
        }
    }
}





/* 
--------------------output--------------------
2024 is a leap year.
*/