// import java.util.*;

class Prime {
    public static void main(String[] args) {
        int i, j, n;
        for (i = 1; i < 100; i++) {
            n = 1;
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    n = 0;
                    break;

                }
            }
            if (n == 1) {

                System.out.print(i + " ");
            }
        }
    }
}