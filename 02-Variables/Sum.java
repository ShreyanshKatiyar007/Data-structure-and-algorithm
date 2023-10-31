import java.util.*;

public class Sum {
    public static int CalculateSum(int a,int b){
        int sum = a+b;
        return sum;
    }
    public static void main(String args[]){
        System.out.println("Enter any two numbers:");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("Sum is:"+ CalculateSum(a,b));
    }
    
}
 
