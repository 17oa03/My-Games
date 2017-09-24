package jkadai04;

public class Triangle extends Figure {
	private double side1;
	private double side2;
	private double side3;

	public Triangle(double side1, double side2, double side3) {
		this.side1 = side1;
		this.side2 = side2;
		this.side3 = side3;
	}

	@Override
	public void printData() {
		System.out.println("三角形の各辺 : " + side1 + ", " + side2 + ", " + side3);
	}

	@Override
	public void areaCalculate() {
		System.out.println("三角形の面積 : " +
			(Math.sqrt((side1 + side2 + side3) * // ヘロンの公式
					   (-side1 + side2 + side3) *
					   (side1 - side2 + side3) *
					   (side1 + side2 - side3))) / 4);
	}

	@Override
	public void peripheryCalculate() {
		System.out.println("三角形の外周 : " + (side1 + side2 + side3) + "\n");
	}
}
