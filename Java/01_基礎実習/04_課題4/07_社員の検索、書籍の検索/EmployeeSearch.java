package jkadai04;

import java.util.Scanner;

public class EmployeeSearch extends Employee implements Search { // ④
	private Employee[] employee; // ①
	boolean hitFlag;

	public EmployeeSearch() {
		employee = new Employee[] { // ②
			new Employee(10, "東京太郎", 300000),
			new Employee(20, "東京次郎", 400000),
			new Employee(30, "東京三郎", 500000),
			new Employee(40, "東京四郎", 250000),
			new Employee(50, "東京五郎", 320000),
		};
	}

	@Override
	public void inputNo() { // ③
		Scanner scanner = new Scanner(System.in);

		System.out.println("*** 社員検索 ***");
		System.out.print("社員番号 ==> ");
		setNo(scanner.nextInt());
	}

	@Override
	public void searchName() { // ③
		for (Employee i : employee)
			if (getNo() == i.getNo()) {
				setNo(i.getNo());
				setName(i.getName());
				setAllowance(i.getAllowance());
				hitFlag = true;
				break;
			}
	}

	@Override
	public void printData() { // ③
		System.out.println("*** 検索結果 ***");

		if (hitFlag != false)
			System.out.println(
				"番号：" + getNo() + ", " +
				"氏名：" + getName() + ", " +
				"給与：" + getAllowance());
		else
			System.out.println("見つかりません。");
	}
}
