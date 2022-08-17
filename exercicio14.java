/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercício14
 */

import java.util.Scanner;

public class exercicio14 {

	public static void main(String[] args) {
		 Scanner sc = new Scanner(System.in);
	        int[] N = new int[10];
	        for (int i=0; i < N.length; i++) {
	            N[i] = sc.nextInt();
	        }
	        for (int i=0; i < N.length; i++) {
	            if (N[i] <= 0) N[i] = 1;
	        }
	        for (int i=0; i < N.length; i++) {
	            System.out.println("X["+ i +"] = " + N[i]);
	        }
	}

}




