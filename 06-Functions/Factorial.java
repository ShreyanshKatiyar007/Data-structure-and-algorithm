import java.util.*;

public class Factorial {
    public static void fact(int n) {
        if (n < 0) {
            System.out.println("Invalid Number");
            return;
        }
        int f = 1;
        for (int i = n; i >= 1; i--) {
            f = f * i;
        }
        System.out.println("Factorial is: " + f);
    }

    public static void main(String args[]) {
        System.out.println("Enter the number whose factorial you want to know:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        fact(n);

    }
}
