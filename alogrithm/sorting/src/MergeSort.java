public class MergeSort {
    //O(nlogn)
    private static void conquer(int arr[], int si, int mi, int ei) {

        int merged[] = new int[ei - si + 1];

        int idx1 = si;
        int idx2 = mi + 1;
        int x = 0;

        while(idx1 <= mi && idx2 <= ei) {
            if(arr[idx1] < arr[idx2]) {
                merged[x++] = arr[idx1++];
            } else {
                merged[x++] = arr[idx2++];
            }
        }

        while(idx1 <= mi) {
            merged[x++] = arr[idx1++];
        }

        while(idx2 <= ei) {
            merged[x++] = arr[idx2++];
        }

        for(int i = 0, j = si; i < merged.length; i++, j++) {
            arr[j] = merged[i];
        }
    }

    private static void divide(int arr[], int si, int ei) {
        if(si >= ei) {
            return;
        }

        int mi = si + (ei - si)/2;

        divide(arr, si, mi);
        divide(arr, mi + 1, ei);
        conquer(arr, si, mi, ei);
    }

    public static void main(String[] args) {
        int arr[] = {6, 3, 9, 5, 2, 8};

        divide(arr, 0, arr.length - 1);

        for(int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
