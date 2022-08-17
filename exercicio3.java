/*
 * Elias Alexander Santos 
 * Curso de Java e Android
 * Exercício3
 */
import java.util.Scanner;

public class exercicio3 {

	public exercicio3() {}
	
	public void salarioAdicional(String nome , double salarioFIxo, double vendasEfetuadas) {
		
		double s = vendasEfetuadas*0.15+ salarioFIxo;
		
		System.out.println("o total que o funcionário "+nome+"\n"
				+ "deverá receber= "+s);
	}
	
	public static void main(String[] args) {
		
		Scanner entrada = new Scanner(System.in);
		exercicio3 salarioFixo = new exercicio3();
		
		String nome = entrada.next();
		double salario = entrada.nextDouble();
		double vendas = entrada.nextDouble();
		
		salarioFixo.salarioAdicional(nome, salario, vendas);
		
		entrada.close();
	}
}




