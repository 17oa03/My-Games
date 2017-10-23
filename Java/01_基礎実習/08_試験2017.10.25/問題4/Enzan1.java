package jtest02;

public abstract class Enzan1 {

	private int seisu1;
	private int seisu2;

	public Enzan1(int seisu1, int seisu2) {
		this.seisu1 = seisu1;
		this.seisu2 = seisu2;
	}

	public int getSeisu1() {
		return seisu1;
	}

	public int getSeisu2() {
		return seisu2;
	}

	public abstract void wa();
	public abstract void sa();
	public abstract void seki();

	public void keisan() {
		wa();
		sa();
		seki();
	}
}
