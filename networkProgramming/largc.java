import java.net.*;
import java.util.Scanner;
import java.io.*;

public class largc {
    public static void main(String[] args) throws IOException {
        Socket s = new Socket("localhost", 6666);
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        DataOutputStream dout = new DataOutputStream(s.getOutputStream());
        dout.writeUTF(a + "");
        int b = sc.nextInt();
        DataOutputStream dout1 = new DataOutputStream(s.getOutputStream());
        dout1.writeUTF(b + "");
        int c = sc.nextInt();
        DataOutputStream dout2 = new DataOutputStream(s.getOutputStream());
        dout2.writeUTF(c + "");
        DataInputStream dis = new DataInputStream(s.getInputStream());
        String str = (String) dis.readUTF();
        System.out.println("Message from Server: " + str);
        s.close();
        sc.close();
    }
}