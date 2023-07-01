import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) {
    Scanner s = new Scanner (System.in);
    double x = s.nextDouble();
    s.close();
    double y = 3.14159;
    System.out.printf("A=%.4f%n" , (Math.pow(x,2)*y));
      
 
    }
 
}