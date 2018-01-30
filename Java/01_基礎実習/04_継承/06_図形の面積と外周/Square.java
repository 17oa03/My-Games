package jkadai04;

public class Square extends Figure {
	private double side;

	public Square(double side) {
		this.side = side;
	}

	@Override
	public void printData() {
		System.out.println("正方形の一辺 : " + side);
	}

	@Override
	public void areaCalculate() {
		System.out.println("正方形の面積 : " + (side * side));
	}

	@Override
	public void peripheryCalculate() {
		System.out.println("正方形の外周 : " + (side * 4) + "\n");
	}
}
