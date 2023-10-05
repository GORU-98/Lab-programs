import java.util.*;

class Switch_5 {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {

            System.out.print("Enter a number to check for odd or even : ");
            int number = input.nextInt();

            switch (number % 2) {
                case 0:
                    System.out.println("number is even");
                    break;
                case 1:
                    System.out.println("number is odd");
                    break;
            }
        }
    }
}