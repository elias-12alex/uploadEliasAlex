/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercício2
 */
import java.util.Scanner;

public class exercicio2 {	
	public exercicio2() {}
	
	public double calcMedia(double A, double B) {	
		return (A*3.5 + B*7.5)/11;
	}
	
	public static void main(String[] args) {
	
		Scanner entrada = new Scanner(System.in);
		exercicio2 media = new exercicio2();
		
		/*
		 * Captura de Valores
		 * */
		double A = entrada.nextDouble();
		double B = entrada.nextDouble();
		/*
		 * Saida
		 * */
		
		System.out.printf("MEDIA=%.2f", media.calcMedia(A, B));
		
		entrada.close();
	}
}




