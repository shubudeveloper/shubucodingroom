public class num{
    public static void main(String[] args)
    {
        int num = 10;
        for(int i=0; i<num; i++)
        {
            if(i == 6)
            {
                continue;
            }
            System.out.println(i);
        }
    }
}





/*
--------------------output--------------------
0 
1
2
3 
4 
5 
7 
8 
9
*/