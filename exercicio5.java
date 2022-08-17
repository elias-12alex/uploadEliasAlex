/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercício5
 */

import java.util.Scanner;

public class exercicio5 {
	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);
		int vet[] = {0,0,0};
		
		for(int i = 0 ; i < 3 ; i++)
			vet[i] = entrada.nextInt();
		
		int maior = vet[0]; 
		
		for(int x : vet)
			if( x > maior)
				maior = x;
		
		System.out.println(maior+" eh o maior");
		entrada.close();
		
		
		
	}
}



