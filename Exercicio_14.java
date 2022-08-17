import java.util.Scanner;
public class Exercicio_14 {

	public static void main(String[] args) {
		 Scanner sc = new Scanner(System.in);
	        int N = sc.nextInt();
	        int X, soma;
	        for (int i = 0; i < N; i++) {
	        	soma = 0;
	        	X = sc.nextInt();
	        	for (int j = 1; j < X; j++) {
	        		if (X % j == 0) soma += j;
	        	}
	        	if (soma == X) System.out.println(X + " eh perfeito");
	        	else System.out.println(X + " nao eh perfeito");
	        }

	}

}
