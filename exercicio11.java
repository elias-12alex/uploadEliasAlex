/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercício1
 */

import java.util.Scanner;

/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercicio 11
 */

public class exercicio11 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int  menu = 0, a=0, d=0, g=0;
		
		while(menu != 4) {
			menu = sc.nextInt();
			
			if( menu >= 1 && menu < 4 ) {
				if( menu == 1)
					a++;
				else if( menu == 2)
					g++;
				else if( menu == 3)
					d++;
				else if( menu == 4)
					break;
			}else
				 menu = sc.nextInt();
			
			
		}
		System.out.println("MUITO OBRIGADO");
		System.out.println("Alcool: "+a);
		System.out.println("Gasolina: "+g);
		System.out.println("Disel: "+d);
		
		sc.close();
	}

}



