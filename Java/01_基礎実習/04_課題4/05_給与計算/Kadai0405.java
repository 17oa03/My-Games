package jkadai04;

public class Kadai0405 {
	public static void main(String[] args) {
		Employee[] employeeAry = { // ①(インスタント配列の初期化)
			new Employee(10, "東京太郎", 300000),
			new Manager(20, "東京次郎", 400000, 50000),
			new PartTimer(30, "東京三郎", 1000, 120),
			new Employee(40, "東京四郎", 250000),
			new PartTimer(50, "東京五郎", 900, 60),
		};

		for (Employee i : employeeAry)
			i.printData(); // ②(配列内のインスタンスの内容を出力)

		System.out.println("*** 今月の給与支給額 ***");
		for (Employee i : employeeAry)
			i.printPayments(); // ③(配列内のインスタンスの給与支給額を出力)
	}
}

/*
【実行結果】
番号：10, 氏名：東京太郎, 給与：300000
番号：20, 氏名：東京次郎, 給与：400000, 管理職手当：50000
番号：30, 氏名：東京三郎, 給与：1000, 月間勤務時間：120
番号：40, 氏名：東京四郎, 給与：250000
番号：50, 氏名：東京五郎, 給与：900, 月間勤務時間：60
*** 今月の給与支給額 ***
番号：10, 氏名：東京太郎, 支給額：300000
番号：20, 氏名：東京次郎, 支給額：450000
番号：30, 氏名：東京三郎, 支給額：120000
番号：40, 氏名：東京四郎, 支給額：250000
番号：50, 氏名：東京五郎, 支給額：54000
*/