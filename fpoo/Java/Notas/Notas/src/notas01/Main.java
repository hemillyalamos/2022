package notas01;

public class Main {

	public static void main(String[] args) {
	
		boletim bt[] = new boletim[05];
		
		 bt[0] = new boletim ("Maria", 9 ,10, 8);
		 bt[1] = new boletim ("Joao", 5 ,8, 10);
		 bt[2] = new boletim ("Ana", 9, 7, 6);
		 bt[3] = new boletim ("Antony", 7, 10, 5);
		 bt[4] = new boletim ("Lara", 5, 6, 8);
		
		
		System.out.println("aluno\tportugues\tmatematica\tciencias\tmedia:");
		for(int i = 0; i < 5; i++) {
			System.out.println(bt[i].toString());
		}
			
	}
	
}
