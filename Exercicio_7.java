import java.util.Scanner;

public interface Exercicio_7 {
	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int N = sc.nextInt();
		sc.close();
		
		int hora    = N/3600,
			minutos = (N-(3600*hora))/60,
			segundos= (N-(3600*hora) -(minutos * 60));
		
		System.out.println(hora+":"+minutos+":"+segundos);
		
	}
}
