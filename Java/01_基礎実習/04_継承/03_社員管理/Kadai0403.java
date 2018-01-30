package jkadai04;

public class Kadai0403 {
	public static void main(String[] args) {
		Employee taro = new Employee(10, "東京太郎", 300000); // ①(一般社員クラスのインスタンスを生成)
		Employee jiro = new Manager(20, "東京次郎", 400000, 50000); // ②(管理職クラスのインスタンスを生成)
		Employee sabro = new PartTimer(30, "東京三郎", 1000, 120); // ③(パートタイマーのインスタンスを生成)

		taro.printData(); // ④(一般社員の内容を出力)
		jiro.printData(); // ⑤(管理職の内容を出力)
		sabro.printData(); // ⑥(パートタイマーの内容を出力)
	}
}

/*
【実行結果】
番号：10, 氏名：東京太郎, 給与：300000
番号：20, 氏名：東京次郎, 給与：400000, 管理職手当：50000
番号：30, 氏名：東京三郎, 給与：1000, 月間勤務時間：120
*/