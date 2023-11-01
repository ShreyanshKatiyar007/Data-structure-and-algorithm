import java.util.*;

public class Arrays {
    public static void main(String args[]) {
        // int[] marks = new int[5]
        // int marks[]={89,92,87,90,85}
        // int marks[] = new int[5];
        System.out.println("Enter the size of array:");
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int marks[] = new int[size];
        System.out.println("Enter the elements of array:");
        for (int i = 0; i < size; i++) {
            marks[i] = sc.nextInt();
        }  
        System.out.println("Your array is:");
        for (int i = 0; i < size; i++) {
            System.out.print(marks[i]+" ");
        }

    }
}
