/**
 * 
 */

/**
 * @author Rodrigo Printes -RD
 *
 */

import java.util.Scanner;

public class Exercicio_5 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int vet[] = {0,0,0};
		
		for(int i = 0 ; i < 3 ; i++)
			vet[i] = sc.nextInt();
		
		int maior = vet[0]; 
		
		for(int x : vet)
			if( x > maior)
				maior = x;
		
		System.out.println(maior+" eh o maior");
		sc.close();
		
		
		
	}
}
