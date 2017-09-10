package jkadai03;

public class BankAccount {
	private int no; // 番号のフィールド
	private String name; // 氏名のフィールド
	private int balance; // 残高のフィールド

	public BankAccount(int no, String name, int balance) { // コンストラクタ
		this.no = no; // no フィールドに、引数 no を代入する
		this.name = name;  // name フィールドに、引数 name を代入する
		this.balance = balance; // balance フィールドに、引数 balance を代入する
		System.out.printf("%sさんが、%d 円で新規口座を開設しました。\n", name, balance);
		dispData(); // 口座情報の出力
	}

	public void deposit(int depositMoney) { // 預け入れメソッド
		System.out.printf("%sさんが、%d 円、預け入れました。\n", name, depositMoney);
		balance += depositMoney; // balance フィールドに、引数 depositMoney を加算する
		dispData(); // 口座情報の出力
	}

	public void drawer(int drawerMoney) { // 引き出しメソッド
		if (balance > drawerMoney) { // 残高が引き出し額より大きい場合
			System.out.printf("%sさんが、%d 円、引き出しました。\n", name, drawerMoney);
			balance -= drawerMoney; // balance フィールドに、引数 drawerMoney を減算する
		} else { // 残高が引き出し額より小さい場合
			System.out.printf(
					"%sさんが、%d 円、引き出そうとしましたが、残高不足です。\n",name, drawerMoney);
		}

		dispData(); // 口座情報の出力
	}

	public void dispData() { // 口座情報の出力するメソッド
		System.out.printf("口座番号:%d, 氏名:%s, 残高:%d\n\n", no, name, balance);
	}
}
