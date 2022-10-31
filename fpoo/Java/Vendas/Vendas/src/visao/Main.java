package visao;

import java.util.ArrayList;
import java.util.Scanner;

import modelo.Venda;

public class Main {
	static Scanner scan=new Scanner(System.in);
	static ArrayList<Venda> vendas = new ArrayList<>();
	static int menu = 0;
	public static void main(String[] args) {
		while(menu!=5) {
			System.out.println("1.Cadastrar venda");
			System.out.println("2.Consultar venda");
			System.out.println("3.Alterar venda");
			System.out.println("4.excluir venda");
			System.out.println("5.Terminar programa");
			menu = scan.nextInt();
			
			switch(menu) {
			case 1:
				System.out.println("Produto\tQuantidade\tPreco");
				create();	
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				System.out.println("Opcao invalida");
				break;
			}
		}
		System.out.println("Programa encerrado.");
	}

	public static void create() {
		Venda v = new Venda();
		v.setProduto(scan.next());
		v.setQuantidade(scan.nextInt());
		v.setPreco(scan.nextFloat());
		vendas.add(v);
}
	public static void read() {
		for(Venda v: vendas) {
			System.out.printf(v.toString());
		}
		
	}
}
