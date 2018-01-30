package jkadai04;

public class PartTimer extends Employee {
	private int monthlyWorkingHours;

	public PartTimer(int no, String name, int allowance, int monthlyWorkingHours) {
		super(no, name, allowance);
		this.monthlyWorkingHours = monthlyWorkingHours;
	}

	@Override
	public void printData() {
		System.out.println("番号：" + getNo() + ", " +
							"氏名：" + getName() + ", " +
							"給与：" + getAllowance() + ", " +
							"月間勤務時間：" + monthlyWorkingHours);
	}

	@Override
	public void printPayments() {
		System.out.println("番号：" + getNo() + ", " +
							"氏名：" + getName() + ", " +
							"支給額：" + (getAllowance() * monthlyWorkingHours));
	}
}
