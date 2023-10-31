import java.util.*;

public class Switchcase {
    public static void main(String[] args) {
        System.out.println("Press any button - 1,2,3:");
        Scanner sc = new Scanner(System.in);
        int button = sc.nextInt();
        switch (button) {
            case 1:
                System.out.println("Namaste");
                break;
            case 2:
                System.out.println("Hello");
                break;
            case 3:
                System.out.println("How are you");
                break;
            default:
                System.out.println(" PLease enter the valid number");
        }
    }
}
