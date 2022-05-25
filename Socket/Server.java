import java.lang.*;
import java.net.*;
import java.io.*;

class ChatServer
{
    private ServerSocket ss;
    private Socket s;
    private BufferedReader br,brK;
    private PrintStream ps;
    public String s1,s2;

    public ChatServer()
    {
        try
        {
            System.out.println("Server application is Running");
            ss = new ServerSocket(1100);
            s = ss.accept();
            System.out.println("Connection Successful");

            brK = new BufferedReader(new InputStreamReader(System.in));
            br = new BufferedReader(new InputStreamReader(s.getInputStream()));
            ps = new PrintStream(s.getOutputStream());
        }
        catch(Exception obj)
        {}
    }

    public void ChatBox()
    {
        try
        {
            while((s1 = br.readLine()) != null)
            {
                System.out.println("Client Says : "+s1);
                System.out.println("Enter Message for client : ");
                s2 = brK.readLine();
                ps.println(s2);
            }
            s.close();
            br.close();
            brK.close();
            ps.close();
        }
          catch(Exception obj)
          {}
    }
}

class Server
{
    public static void main(String arg[]) throws IOException
    {
        ChatServer cobj = new ChatServer();
        cobj.ChatBox();
    }
}