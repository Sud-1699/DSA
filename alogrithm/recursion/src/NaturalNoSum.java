public class NaturalNoSum {

    private static void printSumOfNatural(int i, int n, int sum) {
        if(i == n) {
            sum += i;
            System.out.println(sum);
            return;
        }

        sum += i;
        printSumOfNatural(i + 1, n, sum);
    }

    public static void main(String[] args) {
        printSumOfNatural(1, 5, 0);
    }
}
