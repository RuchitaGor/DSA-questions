import java.util.*;

class MoveZeroes {

    public static void moveZeroes(int[] arr) {

        int index = 0;

        for (int i = 0; i < arr.length; i++) {

            if (arr[i] != 0) {

                int temp = arr[i];
                arr[i] = arr[index];
                arr[index] = temp;

                index++;
            }
        }
    }

    public static void main(String[] args) {

        int[] arr = {0, 1, 0, 3, 12};

        moveZeroes(arr);

        System.out.println("Array after moving zeroes:");

        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
