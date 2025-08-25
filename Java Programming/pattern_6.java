public class pattern_6
{
    public static void main(String[] args)
    {
        int range=5;
        for(int i=1; i<=range; i++)
        {
            for(int j=1; j<=(range-i); j++)
            {
                System.out.print(" ");
            }
            for(int k=1; k<=(2*i-1); k++)
            {
                System.out.print(i);
            }  
            System.out.println();
        }
    }
}





/*
--------------------output--------------------
    1
   222
  33333
 4444444
555555555
*/