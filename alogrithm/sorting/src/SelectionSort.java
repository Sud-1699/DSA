import java.util.Arrays;

public class SelectionSort {
    public static void prinArray(int arr[]) {
        System.out.print("Selection sort: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println("");
    }

    public static void main(String[] args) {
        int[] nums = {7, 8, 3, 1, 2};

/*
        [7, 8, 3, 1, 2];
        0 iteration
        smallest = 7;
        compare 8 is smallest to 7 -> move next
        compare 3 is smallest to 7 -> smallest = 3;
        compare 1 is smallest to 3 -> smallest = 1;
        compare 2 is smallest to 1 -> no changes -> swap nums[0] with nums[3];
        1, 8, 3, 7, 2

*/

        for(int i = 0; i < nums.length; i++) {
            int smallest = i;
            for(int j = i + 1; j < nums.length; j++) {
                if(nums[j] < nums[smallest]) {
                    smallest = j;
                }
            }

            int temp = nums[i];
            nums[i] = nums[smallest];
            nums[smallest] = temp;
        }

        prinArray(nums);
    }
}
