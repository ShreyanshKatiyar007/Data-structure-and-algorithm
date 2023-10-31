import java.util.*;

public class Max {
    public static void main(String[] args) {
        System.out.println("Enter the value A:");
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        System.out.println("Enter the value B:");
        int B = sc.nextInt();
        if (A == B) {
            System.out.println("Both A and B are Equal");
        } else if (A > B) {
            System.out.println("A is maximum");
        } else {
            System.out.println("B is maximum");
        }

    }

}
