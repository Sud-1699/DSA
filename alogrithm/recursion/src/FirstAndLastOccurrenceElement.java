public class FirstAndLastOccurrenceElement {
    // Time Complexity O(n)

    private static int first = -1;
    private static int last = -1;

    private static void findFirstAndLastOccurrenceElement(String str, int idx, char firstChar) {
        if(idx == str.length()) {
            System.out.println(first);
            System.out.println(last);
            return;
        }

        if(firstChar == str.charAt(idx)) {
            if(first == -1) {
                first = idx;
            } else {
                last = idx;
            }
        }

        findFirstAndLastOccurrenceElement(str, idx + 1, firstChar);
    }

    public static void main(String[] args) {
        String str = "abdafaah";

        findFirstAndLastOccurrenceElement(str, 0, str.charAt(0));
    }
}
