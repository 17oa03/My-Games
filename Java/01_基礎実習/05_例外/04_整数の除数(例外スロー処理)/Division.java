package jkadai05;

public class Division {
	String[] args; // (4)①

	public Division(String[] args) { // (4)②
		this.args = args;
	}

	public void calculate() {
		int seisu1 = Integer.parseInt(args[0]);
		int seisu2 = Integer.parseInt(args[1]);
			System.out.println(
					seisu1 + " / " + seisu2 + " = " + (seisu1 / seisu2)); // (4)③, (6)
	}
}
