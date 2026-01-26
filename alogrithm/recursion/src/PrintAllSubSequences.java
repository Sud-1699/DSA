public class PrintAllSubSequences {

    // Time Complexity O(2power(n))

    private static void subsequences(String str, int idx, String newString) {
        if(idx == str.length()) {
            System.out.println(newString);
            return;
        }

        char c = str.charAt(idx);

        //Choose
        subsequences(str, idx + 1, newString + c);
        // Not to choose
        subsequences(str, idx + 1, newString);
    }

    public static void main(String[] args) {
        String str = "abc";

        subsequences(str, 0, "");
    }
}
