public class SetBit {
    public static void main(String[] args) {
        //  Set Bit Operation
        int n = 5;
        int pos = 1;
        int bitmask = 1 << pos;

        int newNumber = bitmask | n;
        System.out.println(newNumber);
    }
}
