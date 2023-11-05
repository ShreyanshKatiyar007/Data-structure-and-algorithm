public class ClearBit {
    public static void main(String[] args) {
        // Get Bit Operation
        int n = 5; // 0101
        int pos = 2;
        int bitmask = 1 << pos;

        int notBitmask = ~(bitmask);
        int number = notBitmask & n;
        System.out.println(number);
    }
}
