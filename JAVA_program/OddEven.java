import java.util.*;

class OddEven {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("Enter a number : ");
            int number = input.nextInt();
            if (number % 2 == 0) {
                System.out.println("Entered number is even");
            } else {

                System.out.println("Entered number is odd");
            }
        }
    }
}