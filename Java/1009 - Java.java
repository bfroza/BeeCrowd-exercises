import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String nome = scanner.nextLine();
        double salarioFixo = scanner.nextDouble();
        double totalVendas = scanner.nextDouble();
        scanner.close();

        double comissao = totalVendas * 0.15;
        double salarioTotal = salarioFixo + comissao;

        DecimalFormat decimalFormat = new DecimalFormat("#0.00");
        System.out.println("TOTAL = R$ " + decimalFormat.format(salarioTotal));
    }
}
