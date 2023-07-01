import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int numPeca1 = scanner.nextInt();
        int qntPeca1 = scanner.nextInt();
        double valor1 = scanner.nextDouble();
        int numPeca2 = scanner.nextInt();
        int qntPeca2 = scanner.nextInt();
        double valor2 = scanner.nextDouble();
        scanner.close();
        
        double valortotal = qntPeca1* valor1 + qntPeca2* valor2 ;

        

        DecimalFormat decimalFormat = new DecimalFormat("#0.00");
        System.out.println("VALOR A PAGAR: R$ " + decimalFormat.format(valortotal));
    }
}
