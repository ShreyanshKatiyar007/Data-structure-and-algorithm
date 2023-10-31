import java.util.*;

public class Vote {
    public static void main(String[] args) {
        System.out.println("Enter your age:");
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        if (age >= 18) {
            System.out.println("congats! You can vote");
        } else {
            System.out.println("sorry! You can't vote");
        }

    }

}
