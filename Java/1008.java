import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num = scanner.nextInt();
        double horas = scanner.nextDouble();
        double val = scanner.nextDouble();

        System.out.println("NUMBER = " + num);
        System.out.printf("SALARY = U$ %.2f%n", horas * val);
    }
}
