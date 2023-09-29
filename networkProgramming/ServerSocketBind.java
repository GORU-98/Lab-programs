import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.ServerSocket;
import java.net.SocketAddress;

public class ServerSocketBind {
    public static void main(String[] args) throws IOException {
        InetAddress inetAddress = InetAddress.getByName("localhost");
        int port = 1085;
        ServerSocket serverSocket = new ServerSocket();
        SocketAddress endPoint = new InetSocketAddress(inetAddress, port);
        serverSocket.bind(endPoint);
        System.out.println("Local Socket Address: " + serverSocket.getLocalSocketAddress());
        serverSocket.close();
    }
}
