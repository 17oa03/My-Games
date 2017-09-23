package jkadai04;

public class Arithmetic extends AddSub { // (1)四則演算クラスの作成
	private int multi;
	private int div;

	public Arithmetic(int input1, int input2) {
		super(input1, input2);
	}

	public void multiplication() {
		multi = getInput1() * getInput2();
	}

	public void division() {
		div = getInput1() / getInput2();
	}

	public void printMulti() {
		System.out.println(getInput1() + " * " +
							getInput2() + " = " + multi);
	}

	public void printDiv() {
		System.out.println(getInput1() + " / " +
							getInput2() + " = " + div);
	}
}
