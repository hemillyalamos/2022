package pac;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		Paciente pacientes[] = new Paciente[10];
		
		//Entrada
		System.out.println("Digite 10 nomes, pesos e alturas:");
		for(int i = 0; i < 10; i++)
			pacientes[i] = new Paciente(scan.next(), scan.nextFloat(), scan.nextFloat());
		
		//Saída
	System.out.println("Nome\tPeso\tAltura\tIMC\tDiagnóstico:");
	for(int i = 0; i < 10; i++)
		System.out.println(pacientes[i].toString());
	totImc += pacientes[i].imc();
	totPeso += pacientes[i].peso;
	totAltura += pacientes[i].altura;
}
float mediaImc = totImc / 10f;
float mediaPeso = totPeso / 10f;
float mediaAltura = totAltura / 10f;
System.out.println("Estatísticas:");
System.out.printf("Média IMC = %.2f\n",mediaImc);
System.out.printf("Média Peso = %.2f\n",mediaPeso);
System.out.printf("Média Altura = %.2f\n",mediaAltura);
	
}
