package jkadai03;

public class BankAccount {
	private int no; // ①(番号のフィールド)
	private String name; // ①(氏名のフィールド)
	private int balance; // ①(残高のフィールド)

	public BankAccount(int no, String name, int balance) { // ②(データをフィールドに設定するコンストラクタの定義)
		this.no = no;
		this.name = name;
		this.balance = balance;
		System.out.printf("%sさんが、%d 円で新規口座を開設しました。\n", name, balance); // ②(メッセージの出力)
		dispData(); // ②(口座情報の出力)
	}

	public void deposit(int depositMoney) { // ③(預け入れメソッドの定義)
		System.out.printf("%sさんが、%d 円、預け入れました。\n", name, depositMoney); // ③(メッセージの出力)
		balance += depositMoney; // ③(預け入れ額を残高に加算)
		dispData(); // ③(口座情報の出力)
	}

	public void drawer(int drawerMoney) { // ④(引き出しメソッドの定義)
		if (balance > drawerMoney) { // ④(残高が引き出し額より大きい場合の処理)
			System.out.printf("%sさんが、%d 円、引き出しました。\n", name, drawerMoney);
			balance -= drawerMoney; // ④(引き出し額を残高から減算)
		} else { // ④(残高が引き出し額より小さい場合)
			System.out.printf(
					"%sさんが、%d 円、引き出そうとしましたが、残高不足です。\n",name, drawerMoney);
		}

		dispData(); // ④(口座情報の出力)
	}

	public void dispData() { // ⑤(口座情報出力メソッドの定義)
		System.out.printf("口座番号:%d, 氏名:%s, 残高:%d\n\n", no, name, balance);
	}
}
