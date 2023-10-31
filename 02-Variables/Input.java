import java.util.*;

public class Input {
    public static void main(String[] args) {
        System.out.println("enter your name:");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        //nextFloat() --> Used to take decimal values as input.
        //nextInt() --> Used to take integer value as input.
        System.out.println("entered name is:");
        System.out.println(name);
    }
}
