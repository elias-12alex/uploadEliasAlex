import java.util.Scanner;

public class Media {
	
	public Media() {}
	
	/*
	 * média do aluno, sabendo que a nota A tem
	peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que
	cada nota pode ir de 0 até 10.0
	 * */
	public double calcMedia(double A, double B) {
		
		
		return (A*3.5 + B*7.5)/11;
	}
	public static void main(String[] args) {
		/*
		 * BuildFactor
		 * */
		Scanner sc = new Scanner(System.in);
		Media media = new Media();
		
		/*
		 * Captura de Valores
		 * */
		double A = sc.nextDouble();
		double B = sc.nextDouble();
		/*
		 * Saida
		 * */
		
		System.out.printf("MEDIA=%.2f", media.calcMedia(A, B));
		
		sc.close();
	}
}
