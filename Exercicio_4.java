import java.util.Scanner;

/**
 * @author Rodrigo Printes
 *
 */
public class Consumo {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int X = sc.nextInt();
		double Y = sc.nextDouble();
		
		sc.close();
		
		System.out.printf("%.2f km/l",X/Y);
	}

}
