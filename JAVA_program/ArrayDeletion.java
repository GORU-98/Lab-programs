import java.util.*;

class ArrayDeletion {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int i, position;
            int m = 5;
            int arr[] = new int[m];
            // int arr1[] = new int[m];
            int arr2[] = new int[m + 1];

            System.out.println("Enter the element : ");

            for (i = 0; i < m; i++) {
                arr[i] = input.nextInt();
            }

            System.out.println("Enter the position of element to be deleted : ");
            position = input.nextInt();

            // arr[position - 1]=
            for (i = 0; i < position; i++) {
                arr2[i] = arr[i];

            }

            // copying the elements inh arr2
            for (i = position + 1; i < m; i++) {
                arr2[position + i] = arr[i];

                // System.out.println(arr2[i]);
            }

            // int a1 = arr1.length;
            // int b1 = arr2.length;
            // int c1 = a1 + b1;

            // int arr3[] = new int[m + 2];

            // for (i = 0; i < position; i++) {
            // arr3[i] = arr1[i];

            // }
            // for (i = position; i < m; i++) {
            // arr3[position] = arr2[i];

            // }

            System.out.println("New Array is : ");
            for (i = 0; i < m + 1; i++) {
                System.out.println(arr2[i]);
            }

        }

    }
}
