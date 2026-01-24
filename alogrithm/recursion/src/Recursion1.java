public class Recursion1 {
    // Print num from 5 to 1
    private static void printNumber(int n) {
        // Base Case
        if (n == 0) {
            return;
        }

        // What work to do mean operation
        System.out.println(n);
        //Recursion
        printNumber(n - 1);
    }

    public static void main(String[] args) {
        printNumber(5); // What to pass on Main f(x)
    }
}
