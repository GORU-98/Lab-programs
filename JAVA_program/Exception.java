public class Exception {
    public static void main(String[] args) {
        int a = 50;
        int b = 0;
        String abc = null;
        try {
            System.out.println(a / b);
        } catch (ArithmeticException e) {
            // System.out.println(e.getClass());
            // System.out.println(e.fillInStackTrace());
            // System.out.println(e.hashCode());
            // System.out.println(e.getLocalizedMessage());
            System.out.println(e.toString());
            // System.out.println(e.getMessage());
        }
        try {
            System.out.println(abc.length());

        } catch (NullPointerException e) {
            System.out.println(e.getClass());
        }

    }
}
