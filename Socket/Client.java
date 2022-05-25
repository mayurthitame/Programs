import java.net.*;
import java.io.*;

class ChatClient
{
        private Socket s;
        private BufferedReader br,brK;
        private PrintStream ps;
        public String s1,s2;

        public ChatClient()
        {
           try
           {
                s = new Socket("localhost",1100);

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
                while(!(s1 = brK.readLine()).equals("gn"))
                {
                    ps.println(s1);
                    s2 = br.readLine();
                    System.out.println("Server Says : "+s2);
                    System.out.println("Enter Message for client : ");
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

class Client
{
    public static void main(String arg[])
    {

        ChatClient cobj = new ChatClient();
        cobj.ChatBox();
    }
}