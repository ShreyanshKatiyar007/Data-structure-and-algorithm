import java.util.Scanner;

public class StringProperties {
    public static void main(String args[]) {
        // Concatenation - Use to add two strings.
        String firstname = "Shreyansh";
        String lastname = "Katiyar";
        String fullname = firstname + " " + lastname;
        System.out.println(fullname);
        
        // length() - Use to calculate length of the string.
        System.out.println("Length of the string is:" + fullname.length());
        
        // CharAt() - Use to write string character saperately.
        for (int i = 0; i < fullname.length(); i++) {
            System.out.println(fullname.charAt(i));
        }
        
        // CompareTo() - Use to compare two strings.
        if (firstname.compareTo(lastname) == 0) {
            System.out.println("String are equal");
        } else {
            System.out.println("String are not equal");
        }
        
        // Substring() - Use to take small part of a string.
        String name = firstname.substring(5, firstname.length());
        System.out.println(name);
    }
}
