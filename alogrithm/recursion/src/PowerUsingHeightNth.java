public class PowerUsingHeightNth {

    private static int calculatePower(int x, int n) {
        if(n == 0) {
            return 1;
        }

        if(x == 0) {
            return 0;
        }

        int xPow1 = calculatePower(x, n - 1);
        return x * xPow1;
    }

    public static void main(String[] args) {
        int x = 2, n = 5;
        int res = calculatePower(2, 5);
        System.out.println(res);
    }
}
