import java.util.Scanner;

public class Searchin2DArray {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows in 2-D array:");
        int rows = sc.nextInt();
        System.out.println("Enter the number of column in 2-D array:");
        int cols = sc.nextInt();
        int arr[][] = new int[rows][cols];
        System.out.println("Enter the elements of the 2-D array:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        System.out.println("Your 2-D array is:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("Enter the element you want to search in 2-D array:");
        Scanner Sc = new Scanner(System.in);
        int search = sc.nextInt();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (arr[i][j] == search) {
                    System.out.println("Element found at location (" + i + "," + j + ")");
                }
            }
        }
    }
}
