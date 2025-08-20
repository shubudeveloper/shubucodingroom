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





/*
--------------------0utput--------------------
0 1 2
0 1 3
0 2 1
0 2 3
0 3 1
0 3 2
1 0 2
1 0 3
1 2 0
1 2 3
1 3 0
1 3 2
2 0 1
2 0 3
2 1 0
2 1 3
2 3 0
2 3 1
3 0 1
3 0 2
3 1 0
3 1 2
3 2 0
3 2 1
*/
