import java.util.*;

public class Even {
    public static void main(String[] args) {
        System.out.println("Enter the number:");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        if (num % 2 == 0) {
            System.out.println("This is Even number");
        } else {
            System.out.println("This is Odd number");
        }
    }

}
