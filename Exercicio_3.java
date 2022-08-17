import java.util.Scanner;

public class SalarioFixo {

	/*Metodos*/
	/*
	 * 
	 * */
	public SalarioFixo() {}
	
	public void salarioAdicional(String nome , double salarioFIxo, double vendasEfetuadas) {
		// 
		
		double s = vendasEfetuadas*0.15+ salarioFIxo;
		
		System.out.println("o total que o funcionário "+nome+"\n"
				+ "deverá receber= "+s);
	}
	
	/*
	 * 15% de comição sobre as vendas
	 * */
	public static void main(String[] args) {
		/*
		 * BuildFactor
		 * */
		Scanner sc = new Scanner(System.in);
		SalarioFixo salarioFixo = new SalarioFixo();
		
		/*
		 * Captura de Valores
		 * */
		String nome = sc.next();
		double salario = sc.nextDouble();
		double vendas = sc.nextDouble();
		/*
		 * Saida
		 * */
		
		salarioFixo.salarioAdicional(nome, salario, vendas);
		
		sc.close();
	}
}
