import java.io.IOException;
import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args) throws IOException {
   Scanner s = new Scanner (System.in);
    double x = s.nextDouble();
    double y = s.nextDouble();
    double z = s.nextDouble();
    s.close();
    double media =  (x*0.2 + y*0.3 + z*0.5) ;
    System.out.printf("MEDIA = %.1f%n" , media);
       
 
    }
 
}