import java.util.*;

public class loops {
    public static void main(String[] args) {
        System.out.println("All natural numbers from 1 to 10:");
        System.out.println("Using For loop:-");
        for (int i = 1; i <= 10; i++) {
            System.out.println(i);
        }
        System.out.println("Using While loop:-");
        int i=1;
        while(i<11){
            System.out.println(i);
            i++;
        }
        System.out.println("Using Do-While loop:-");
        int n=1;
        do{
            System.out.println(n);
            n++;
        } while(n<11);
    }

}
