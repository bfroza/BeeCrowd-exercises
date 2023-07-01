import java.io.IOException;
import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args) throws IOException {
   Scanner s = new Scanner (System.in);
    int w = s.nextInt();
    int x = s.nextInt();
    int y = s.nextInt();
    int z = s.nextInt();
    s.close();
    int dif =  (w * x - y * z) ;
    System.out.println("DIFERENCA = "+ dif);
       
 
    }
 
}