import java.util.*;

class Sum {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            int sum = 0;
            System.out.println("Enter a number : ");
            int number = input.nextInt();
            while (number > 0) {
                int reminder = number % 10;
                sum = sum + reminder;
                number = number / 10;
            }
            System.out.println(sum);
        }

    }
}