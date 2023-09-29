import java.net.*;
import java.io.*;

public class Primes {
    public static void main(String[] args) throws IOException {
        ServerSocket  ss = new ServerSocket(6776);
        Socket s=ss.accept();
        DataInputStream dis = new DataInputStream(s.getInputStream());
    String str= (String)dis.readUTF();
    System.out.println("Message from client: "+str);
    int a= Integer.parseInt(str);
    int i,m=0,flag=0;
    m=a/2;
    if(a==0| a==1){
      DataOutputStream dout  = new DataOutputStream(s.getOutputStream());
        dout.writeUTF(a+"is not a prime number");  
    }
    else { 
        for(i=2;i<m;i++)
        {
if(a%i==0)
{
     DataOutputStream dout  = new DataOutputStream(s.getOutputStream());
        dout.writeUTF(a+"is not a prime number");  
        flag=1;
        break;
}

        }
    if (flag==0){
 DataOutputStream dout  = new DataOutputStream(s.getOutputStream());
        dout.writeUTF(a+"is  a prime number");  
    }
    ss.close();
    }
}
}