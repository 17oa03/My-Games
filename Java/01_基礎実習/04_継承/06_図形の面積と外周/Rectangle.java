package jkadai04;

public class Rectangle extends Figure {
	private double height;
	private double width;

	public Rectangle(double height, double width) {
		this.height = height;
		this.width = width;
	}

	@Override
	public void printData() {
		System.out.println("長方形の各辺 : " + height + ", " + width);
	}

	@Override
	public void areaCalculate() {
		System.out.println("長方形の面積 : " + (height * width));
	}

	@Override
	public void peripheryCalculate() {
		System.out.println("長方形の外周 : " + ((height + width) * 2) + "\n");
	}
}
