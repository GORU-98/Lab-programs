import java.util.*;

class Oper {

    public static void main(String args[]) {
        int d;
        try (Scanner inp = new Scanner(System.in)) {
            System.out.println("Enter First Number for addition");
            int a = inp.nextInt();
            System.out.println("Enter second Number for addition");
            int b = inp.nextInt();
            System.out.println("Enter third Number for addition");
            int c = inp.nextInt();
            d = a + b + c;
        }
        System.out.println("Our sum is");
        System.out.println(d);
        // String me;
        // try (Scanner inp = new Scanner(System.in)) {
        // System.out.println("Enter First Number for addition");
        // me = inp.nextLine();

        // System.out.println(me);
        // }
    }
}
