package jkadai04;

public abstract class Figure {
	public abstract void printData();
	public abstract void areaCalculate();
	public abstract void peripheryCalculate();

	public void calculate() {
		printData();
		areaCalculate();
		peripheryCalculate();
	}
}
