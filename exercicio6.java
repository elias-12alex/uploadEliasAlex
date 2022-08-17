/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercício6
 */

import java.util.Scanner;

public class exercicio6 {

	public static void main(String[] args) {
		int x1,x2,y1,y2;
		
		Scanner sc = new Scanner(System.in);
		x1 = sc.nextInt();
		x2 = sc.nextInt();
		y1 = sc.nextInt();
		y2 = sc.nextInt();
		
		double d = Math.sqrt(Math.pow((x2-x1),2)+Math.pow((y2-y1),2));
		
		System.out.println(d);
		sc.close();
	}
}



