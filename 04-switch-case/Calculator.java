import java.util.*;

public class Calculator {
    public static void main(String[] args) {
        System.out.println("Enter two number:");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(
                "Enter the operation number you want to perfrom\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.MOdulos or Remainder");
        int n = sc.nextInt();
        switch (n) {
            case 1:
                System.out.println(a + b);
                break;
            case 2:
                System.out.println(a - b);
                break;
            case 3:
                System.out.println(a * b);
                break;
            case 4: if(b==0){
                System.out.println("Invalid Division");
            } else {
                System.out.println(a / b);
            }
                break;
            case 5: if(b==0){
                System.out.println("Invalid Division");
            } else {
                System.out.println(a%b);
            }
                break;
            default:
                System.out.println("Enter the vaild number");
        }

    }
}
