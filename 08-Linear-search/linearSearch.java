import java.util.Scanner;

public class linearSearch {
    public static void main(String args[]) {
        System.out.println("Enter the size of the array:");
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Your array is:");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println("\nEnter the element you want to search:");
        Scanner s = new Scanner(System.in);
        int search = s.nextInt();
        for (int i = 0; i < size; i++) {
            if (arr[i] == search) {
                System.out.println("Element found at position " + i);
            }
        }
    }
}
