import java.util.*;

class Char_14 {

    static int isSubstring(String first, String second) {
        int flen = first.length();
        int slen = second.length();
        // System.out.println();first
        int i;
        for (i = 0; i <= flen - slen; i++) {
            int j;

            for (j = 0; j < slen; j++)
                if (first.charAt(i + j) != second.charAt(j))
                    break;

            if (j == slen)
                return i;

        }
        return -1;

    }

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("Enter a String : ");
            String first = input.nextLine();
            System.out.println("Enter a SubString to match : ");
            String second = input.nextLine();

            int result = isSubstring(first, second);
            if (result == -1) {
                System.out.println("Not found");
            } else {
                System.out.println("Found at Index " + result);
            }

        }
    }
}