import java.util.Scanner;

public class UpdateBit {
    public static void main(String rgs[]) {
        // Update Bit Operation
        System.out.println("Enter the operation you want to perform 0 or 1:");
        Scanner sc = new Scanner(System.in);
        int operation = sc.nextInt();
        int n = 5;
        int pos = 1;
        int bitmask = 1 << pos;
        if (operation == 1) {
            int newNumber = bitmask | n;
            System.out.println(newNumber);
        } else {
            int newBitmask = ~(bitmask);
            int newNumber = newBitmask & n;
            System.out.println(newNumber);
        }
    }
}
