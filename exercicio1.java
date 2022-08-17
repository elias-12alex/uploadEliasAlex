import java.util.Scanner;

/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercício1
 */

public class exercicio1 {
	
	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);
			
		double raio = entrada.nextDouble();
			
		double area = Math.pow(raio, raio)*Math.PI;
		System.out.printf("A=%.2f",area);
			
		entrada.close();
			
	}


}
