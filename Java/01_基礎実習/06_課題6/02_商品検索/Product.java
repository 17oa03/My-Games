package jkadai06;

public class Product { // (2)
	private int code;
	private String name;
	private int unitPrice;

	public Product(int code, String name, int unitPrice) {
		this.code = code;
		this.name = name;
		this.unitPrice = unitPrice;
	}

	public int getCode() {
		return code;
	}

	public String getName() {
		return name;
	}

	public int getUnitPrice() {
		return unitPrice;
	}
}
