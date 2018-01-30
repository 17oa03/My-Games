package jkadai04;

public class Employee {
	private int no;
	private String name;
	private int allowance;

	public Employee(int no, String name, int allowance) {
		this.no = no;
		this.name = name;
		this.allowance = allowance;
	}

	public Employee() {
	}

	public void setNo(int no) {
		this.no = no;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setAllowance(int allowance) {
		this.allowance = allowance;
	}

	public int getNo() {
		return no;
	}

	public String getName() {
		return name;
	}

	public int getAllowance() {
		return allowance;
	}

	public void printData() {
		System.out.println("番号：" + no + ", " +
							"氏名：" + name + ", " +
							"給与：" + allowance);
	}
}
