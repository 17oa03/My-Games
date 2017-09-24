package jkadai04;

public class Circle extends Figure {
	private double radius;


	public Circle(double radius) {
		this.radius = radius;
	}

	@Override
	public void printData() {
		System.out.println("円の半径 : " + radius);
	}

	@Override
	public void areaCalculate() {
		System.out.println("円の面積 : " + (radius * radius * Math.PI));
	}

	@Override
	public void peripheryCalculate() {
		System.out.println("円の外周 : " + (2 * radius * Math.PI) + "\n");
	}
}
