import java.util.Scanner;

public class matrix_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input matrix size
        System.out.print("Enter number of rows: ");
        int rows = sc.nextInt();
        System.out.print("Enter number of columns: ");
        int cols = sc.nextInt();

        int[][] a = new int[rows][cols];
        int[][] b = new int[rows][cols];
        int[][] sum = new int[rows][cols];

        // Input first matrix
        System.out.println("Enter elements of first matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("a[" + i + "][" + j + "] = ");
                a[i][j] = sc.nextInt();
            }
        }

        // Input second matrix
        System.out.println("Enter elements of second matrix:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("b[" + i + "][" + j + "] = ");
                b[i][j] = sc.nextInt();
            }
        }

        // Matrix addition
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }

        // Print result
        System.out.println("Sum of the two matrices:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(sum[i][j] + "\t");
            }
            System.out.println();
        }

        // Matrix subtraction
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum[i][j] = a[i][j] - b[i][j];
            }
        }
        
        // Print result
        System.out.println("Difference of the two matrices:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(sum[i][j] + "\t");
            }
            System.out.println();
        }
        sc.close();
    }
}





/* 
--------------------output--------------------
Enter number of rows: 2
Enter number of columns: 2
Enter elements of first matrix:
a[0][0] = 1
a[0][1] = 2
a[1][0] = 3
a[1][1] = 
4
Enter elements of second matrix:
b[0][0] = 5
b[0][1] = 6
b[1][0] = 7
b[1][1] = 8
Sum of the two matrices:
6       8
10      12
Difference of the two matrices:
-4      -4
-4      -4
*/