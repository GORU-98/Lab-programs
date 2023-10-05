import java.util.*;

class Armstrong {

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {

            int count = 0;
            System.out.print("Enter a number to check for a armstrong number : ");
            int number = input.nextInt();
            int var = number;
            int var1 = number;
            while (var > 0) {
                var = var / 10;
                count++;
                // break;
            }
            int sum = 0;
            int sum1 = 1;
            // while(var>0){
            // sum = sum + power(a,count);
            // }
            for (int i = 1; i <= count; i++) {
                int a = number % 10;
                sum = (int) (sum + sum1 * Math.pow(a, count));
                number = number / 10;
            }

            if (sum == var1) {
                System.out.println(var1 + " is a armstrong number");
            } else {
                System.out.println(var1 + " is not a armstrong number");

            }

            // System.out.println(sum);
        }
    }

}
