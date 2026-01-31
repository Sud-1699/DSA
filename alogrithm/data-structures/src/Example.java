public class Example {
    public static void main(String[] args) {
        char target = 'z';
        char[] letters = {'x','x','y','y'};

        char letter = letters[0];
        for(int i = 0; i < letters.length; i++) {
            if(target < letters[i]) {
                letter = letters[i];
                break;
            }
        }

        System.out.println(letter);
    }
}
