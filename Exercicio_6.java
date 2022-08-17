import java.util.Scanner;

/**
 * 
 */

/**
 * @author Rodrigo Printes -RD
 *
 */
public class Exercicio_6 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		int x1,x2,y1,y2;
		
		Scanner sc = new Scanner(System.in);
		x1 = sc.nextInt();
		x2 = sc.nextInt();
		y1 = sc.nextInt();
		y2 = sc.nextInt();
		
		double d = Math.sqrt(Math.pow((x2-x1),2)+Math.pow((y2-y1),2));
		
		System.out.println(d);
		sc.close();
	}

}
