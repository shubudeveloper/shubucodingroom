public class pattern_7
{
    public static void main(String[] args)
    {
        int range = 5;
        for(int i = range; i >= 1; i--)
        {
            for(int j = 1; j <= (range - i); j++)
            {
                System.out.print(" ");
            }
            for(int k = 1; k <= (2 * i - 1); k++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

/*
--------------------output--------------------
555555555
 4444444
  33333
   222
    1
*/