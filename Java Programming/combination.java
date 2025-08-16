public class combination
{
    public static void main(String[] args)
    {
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                for(int k=0; k<4; k++)
                {
                    if(i !=j && j != k && i !=k)
                    {
                        System.out.println(i + " " + j + " " + k);
                    }
                }
            }
        }
    }
}
