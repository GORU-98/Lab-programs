import java.util.*;

class ArrayInsertion {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int i, position;
            int m = 5;
            int arr[] = new int[m + 1];
            System.out.println("Enter the element : ");
            for (i = 0; i < m; i++) {
                arr[i] = input.nextInt();
            }

            System.out.println("Enter a element to insert : ");
            int insertelem = input.nextInt();

            System.out.println("Enter the position of element to be inserted : ");
            position = input.nextInt();

            for (i = m - 1; i > (position - 1); i--) {

                arr[i + 1] = arr[i];

            }
            arr[position - 1] = insertelem;
            // System.out.println("New array is : ");

            System.out.println("New Array is : ");
            for (i = 0; i < (m + 1); i++) {
                System.out.println(arr[i]);
            }
        }

    }
}
