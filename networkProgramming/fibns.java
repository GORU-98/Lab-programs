import java.net.*;
import java.io.*;

public class fibns {
    public static void main(String[] args) throws IOException {
        ServerSocket ss = new ServerSocket(6666);
        Socket s = ss.accept();
        DataInputStream dis = new DataInputStream(s.getInputStream());
        String str = (String) dis.readUTF();
        System.out.println("Message from Client: " + str);
        int a = Integer.parseInt(str);
        ss.close();
    }
}
