import java.util.HashSet;
import java.util.Set;

public class PrintAllUniqueSubSequences {

    // Time Complexity O(2power(n))

    private static void subsequences(String str, int idx, String newString, HashSet<String> set) {
        if(idx == str.length()) {
            if(!set.contains(newString)) {
                set.add(newString);
                System.out.println(newString);
            }

            return;
        }

        char c = str.charAt(idx);

        //Choose
        subsequences(str, idx + 1, newString + c, set);
        // Not to choose
        subsequences(str, idx + 1, newString, set);
    }

    public static void main(String[] args) {
        String str = "abc";
        HashSet<String> set = new HashSet<>();
        subsequences(str, 0, "", set);
    }
}
