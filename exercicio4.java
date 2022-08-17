/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercício4
 */

import java.util.Scanner;

public class exercicio4 {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int X = sc.nextInt();
		double Y = sc.nextDouble();
		double Consumo = X/Y;
		sc.close();
		
		System.out.printf("%.2f km/l",Consumo);
	}

}



