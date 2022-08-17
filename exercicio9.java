/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercício9
 */

import java.util.Scanner;

public class exercicio9 {
	public static void main(String[] args) {
		
	Scanner sc = new Scanner(System.in);
	double A = sc.nextDouble();
	sc.close();
	
	if( A >= 0 && A <= 25) {
		System.out.println("(0,25]");
	}else if( A > 25 && A <= 50) {
			System.out.println("(25,50]");
	}else if ( A > 50 && A <= 75)
			System.out.println("(50,75]");
	else  if( A > 75 && A <= 100) {
			System.out.println("(75,100]");
	}else
		System.out.println("Fora do Intervalo");
	
	}
}


