import java.io.IOException;
import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args) throws IOException {
   Scanner s = new Scanner (System.in);
    int x = s.nextInt();
    int y = s.nextInt();
    s.close();
    System.out.println("PROD = "+ (x*y));
       
 
    }
 
}