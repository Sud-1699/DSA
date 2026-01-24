public class InsertionSort {

    public static void printArray(int arr[]) {
        System.out.print("Insertion sort: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println("");
    }

    public static void main(String[] args) {
        int nums[] = {7, 8, 3, 1, 2};

        for(int i = 1; i < nums.length; i++) {
            int unsorted = nums[i];
            int j = i - 1;
            while(j >= 0 && unsorted < nums[j]) {
                    nums[j + 1] = nums[j];
                    j--;
            }

            nums[j + 1] = unsorted;
        }

        printArray(nums);
    }
}
