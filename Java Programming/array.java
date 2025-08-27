public class array
{
    public static void main(String[] args) 
    {
        int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        int sum = 0;

        System.out.println("The elements of array are: ");
        
        for(int i=0; i<10; i++)
        {
            System.out.println(a[i]);
        }

        for(int i=0; i<10; i++)
        {
            System.out.println("Element present at locaton " + i + " is " + a[i]);
        }
        
        for(int i=0; i<10; i++)
        {
            sum = sum + a[i];
        }
        System.out.println("The sum of all elements of array = " + sum);
    }
}





/*
--------------------output--------------------
The elements of array are: 
10
20
30
40
50
60
70
80
90
100
Element present at locaton 0 is 10
Element present at locaton 1 is 20
Element present at locaton 2 is 30
Element present at locaton 3 is 40
Element present at locaton 4 is 50
Element present at locaton 5 is 60
Element present at locaton 6 is 70
Element present at locaton 7 is 80
Element present at locaton 8 is 90
Element present at locaton 9 is 100
The sum of all elements of array = 550
*/