package jkadai06;

public class Employee {
	private int no;
	private String name;
	private int allowance;
	private String department;
	private String position;

	public Employee(int no, String name, int allowance, String department, String position) {
		this.no = no;
		this.name = name;
		this.allowance = allowance;
		this.department = department;
		this.position = position;
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

	public String getDepartment() {
		return department;
	}

	public String getPosition() {
		return position;
	}
}