import java.util.Scanner;

public class Exercicio_10 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		sc.close();
		
		for (int i = 1; i <= a; i++) {
			System.out.println(i + " " + (i*i) + " " + (i*i*i));
			System.out.println(i + " " + ((i*i)+1) + " " + ((i*i*i)+1));
		}
	}
}
