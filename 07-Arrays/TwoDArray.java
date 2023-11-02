import java.util.Scanner;

public class TwoDArray {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows in 2-D array:");
        int row = sc.nextInt();
        System.out.println("Enter the number of column in 2-D array:");
        int col = sc.nextInt();
        int arr[][] = new int[row][col];
        System.out.println("Enter the elements of the 2-D array:");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.println("Your 2-D array is :");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
