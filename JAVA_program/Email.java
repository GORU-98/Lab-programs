import java.util.*;

class Email {
    public static void main(String args[]) {

        System.out.println("Enter Your Gmail Id");
        try (Scanner email = new Scanner(System.in)) {
            String gmail = email.nextLine();
            // char a = gmail.charAt(0);
            if (gmail.substring(0, 1).matches("[0-9]")) {
                System.out.println(" not valid");
            } else {
                System.out.println(" valid");
                System.out.println("Entered Gmail Id is : ");
                System.out.println(gmail);
            }
            // System.out.println(a == 1);
        }

    }
}
