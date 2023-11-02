import java.util.Scanner;

public class StringBuilderProperties {
    public static void main(String args[]) {
        StringBuilder sb = new StringBuilder("Tony");
        // charAt() - Use to write string characters saperately.
        System.out.println(sb.charAt(0));

        // setCharAt() - Use to replace the character with new character at desired
        // index.
        sb.setCharAt(0, 'P');
        System.out.println(sb);

        // Insert() - Use to insert new character in string at desired index.
        sb.insert(0, 'S');
        System.out.println(sb);

        // delete() - Use to delete character or Substring from a string.
        sb.delete(0, 1);
        System.out.println(sb);

        // append() - Use to add characters at the end of string.
        sb.append("y"); // str = str + "y"
        System.out.println(sb);

        // length() - Use to find length of the string.
        System.out.println("Length is:"+sb.length());
    }
}
