import java.util.Scanner;

public class Exercicio_12 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt(); 
		int N;
		do {
			N = sc.nextInt();
			for (int i = 0 ;  i < N; i ++)
				A += A + i;
			
			System.out.println(A);
			
		}while(N <= 0);
		
			
		
		sc.close();
	}
}
