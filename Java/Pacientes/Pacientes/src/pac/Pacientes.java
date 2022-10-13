package pac;

public class Pacientes {
	String nome;
	float peso;
	float altura;
	
	float imc() {
		return peso / (altura * altura );		
	}
	
	public String toString () {
		return String.format("%s",nome,peso,altura,imc());
	}
	
}
