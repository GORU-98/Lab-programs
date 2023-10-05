import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.print("Enter First Number : ");
            int first = input.nextInt();
            System.out.print("Enter Second Number : ");
            int Second = input.nextInt();

            System.out.println("Choose the operator from +,-,*,% and / ");
            String operator = input.next();
            System.out.print("Output : ");
            switch (operator) {

                case "+":
                    System.out.println(first + Second);
                    break;
                case "-":
                    System.out.println(first - Second);
                    break;
                case "*":
                    System.out.println(first * Second);
                    break;
                case "/":
                    System.out.println(first / Second);
                    break;
                case "%":
                    System.out.println(first % Second);
                    break;
            }
        }
    }
}
