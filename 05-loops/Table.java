//  Table of a number input by the user.
import java.util.*;

public class Table {
    public static void main(String[] args) {
        System.out.println("Enter the number whose table you want to print:");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int mul = 0;
        System.out.println("Table of the given number is:");
        for (int i = 1; i < 11; i++) {
            mul = n * i;
            System.out.println(mul);
        }
    }

}
