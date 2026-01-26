public class TowerOfHanoi {
    //Time Complexity O(2power(n))

    private static void towerOfHanoi(int n, String src, String helper, String dest) {
        if(n == 1) {
            System.out.println("Transferring disk " + n + " from " + src + " to " + dest); // Transferring 1 disk from src to dest
            return;
        }

        towerOfHanoi(n-1, src, dest, helper); // Transferring n - 1 disk from src to helper (dest)
        System.out.println("Transferring disk " + n + " from " + src + " to " + dest);
        towerOfHanoi(n-1, helper, src, dest); // Transferring n - 1 disk from helper (src) to dest
    }

    public static void main(String[] args) {
        int n = 2;

        towerOfHanoi(n, "S", "H", "D");
    }
}
