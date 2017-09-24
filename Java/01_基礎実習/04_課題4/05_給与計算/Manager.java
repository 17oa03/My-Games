package jkadai04;

public class Manager extends Employee {
	private int managementAllowance;

	public Manager(int no, String name, int allowance, int managementAllowance) {
		super(no, name, allowance);
		this.managementAllowance = managementAllowance;
	}

	@Override
	public void printData() {
		System.out.println("番号：" + getNo() + ", " +
							"氏名：" + getName() + ", " +
							"給与：" + getAllowance() + ", " +
							"管理職手当：" + managementAllowance);
	}

	@Override
	public void printPayments() {
		System.out.println("番号：" + getNo() + ", " +
							"氏名：" + getName() + ", " +
							"支給額：" + (getAllowance() + managementAllowance));
	}
}
