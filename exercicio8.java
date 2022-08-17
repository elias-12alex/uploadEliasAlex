/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercício8
 * 
 */

import java.util.Scanner;

public class exercicio8 {
	public static void main(String[] args) {
		int vet [ ] = new int[4];
		Scanner entrada = new Scanner(System.in);
		
		for(int i = 0 ; i < 4 ; i++)
			vet[i] = entrada.nextInt();
		
		if( ( vet[1] > vet[2]  && vet[3]  > vet[0] ) && 
			((vet[2]+vet[3]) > (vet[0]+vet[1]) ) &&
			( vet[2] > 0 && vet[3] > 0 ) && ( vet[0]%2== 0 ))	
			
			System.out.println("Valores aceitos");
		else
			System.out.println("Valores nao aceitos");
		entrada.close();
	}
}


