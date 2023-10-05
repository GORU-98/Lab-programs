import java.util.*;

class _Array_Reading_6 {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int arr[] = new int[50];
            System.out.print("Enter size of array : ");
            int m = input.nextInt();
            System.out.println("Enter elements of array : ");

            for (int i = 0; i < m; i++) {
                arr[i] = input.nextInt();
            }
            System.out.println("Entered elements of array are : ");

            for (int i = 0; i < m; i++) {
                System.out.println(arr[i]);
            }
        }
    }
}