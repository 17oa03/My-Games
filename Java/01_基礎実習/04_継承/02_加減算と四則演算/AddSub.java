package jkadai04;

public class AddSub { // (1)加減算クラスの作成
	private int input1;
	private int input2;
	private int add;
	private int sub;

	public AddSub(int input1, int input2) {
		this.input1 = input1;
		this.input2 = input2;
	}

	public void addition() {
		add = input1 + input2;
	}

	public void subtraction() {
		sub = input1 - input2;
	}

	public int getInput1() {
		return input1;
	}

	public int getInput2() {
		return input2;
	}

	public void printAdd() {
		System.out.println(input1 + " + " + input2 + " = " + add);
	}

	public void printSub() {
		System.out.println(input1 + " - " + input2 + " = " + sub);
	}
}
