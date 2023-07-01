import java.io.IOException;
import java.util.Scanner;
 

public class Main {
 
    public static void main(String[] args) throws IOException {
   Scanner s = new Scanner (System.in);
    double x = s.nextDouble();
    double y = s.nextDouble();
    s.close();
    double media =  (x*3.5/11 + y*7.5/11);
    System.out.printf("MEDIA = %.5f%n" , media);
       
 
    }
 
}