import java.util.Scanner;

public class Area {
	// função calculo de área
	
	public Area() {
		
	}
	
	public double calcArea(double raio) {
		// pi*raio^2;
		return Math.pow(raio, raio)*Math.PI;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		Area area = new Area();
		
		double raio = sc.nextDouble();
		System.out.printf("A=%.2f",area.calcArea(raio));
		
		sc.close();
		
	}

}
