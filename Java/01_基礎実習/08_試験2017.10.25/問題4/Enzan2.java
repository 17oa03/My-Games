package jtest02;

public class Enzan2 extends Enzan1 {

	private int answer;

	public Enzan2(int seisu1, int seisu2) {
		super(seisu1, seisu2);
	}

	public void wa() {
		answer = getSeisu1() + getSeisu2();
	}

	public void sa() {
		answer += (getSeisu1() - getSeisu2());
	}

	public void seki() {
		answer += (getSeisu1() * getSeisu2());
	}

	public int getAnswer() {
		return answer;
	}
}
