public class Factorial {
    private static void printFactorial(int i, int n, int fact) {
        if((n - i) == 0) {
            System.out.println(fact);
            return;
        }

        fact *= (n - i);
        printFactorial(i + 1, n, fact);
    }

    //Second Approach
    private static int calculateFactorial(int n) {
        if(n == 1 || n == 0) {
            return 1;
        }

        int updated_n = calculateFactorial(n - 1);
        return n * updated_n;
    }

    public static void main(String[] args) {
        printFactorial(0, 5, 1);

        //Second Approach
        int ans = calculateFactorial(5);
        System.out.println(ans);
    }
}
