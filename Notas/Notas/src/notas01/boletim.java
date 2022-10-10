package notas01;

public class boletim {
	
	String aluno;
	float portugues;
	float matematica;
	float ciencias;
	
	float media() {
		return (portugues + matematica + ciencias) /3;
	}
	public String toString() {
		return String.format("%s\t%.1f\t%.1f\t%.1f \t%.1f",aluno,portugues,matematica,ciencias,media());
	}
}
