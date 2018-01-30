import java.util.ArrayList;

// (3)①main メソッドを含む Office クラス
public class Office {

	// (4)①社員のインスタンスを管理する Arraylist
	ArrayList<Employee> employees = new ArrayList<>();

	// (4)②main メソッド
	public static void main(String[] args) {

		// (5)①String 配列の初期化
		String[] lines = {
			"Employee,10,東京太郎,300000",
			"Manager,20,東京次郎,320000,80000",
			"Parttimer,30,東京三郎,1000,abc",
			"Employee,40,東京四郎,xyz",
			"Parttimer,50,東京五郎,2000,250",
			"Researcher,60,東京六郎,5000,100"
		};

		// (5)②課題名、出席番号、氏名の出力
		System.out.println("Java 実技対策 課題名 99 氏名");
		System.out.println();

		// (5)③登録処理のタイトルの出力
		System.out.println("<<登録処理>>");

		// (5)④自クラスのインスタンスを生成
		Office office = new Office();

		// (5)⑤ArrayList に登録するメソッドを呼び出す
		office.register(lines);
		System.out.println();
		System.out.println();

		// (5)⑥給与支給額一覧表のタイトルの出力
		System.out.println("<<給与支給額一覧表>>");

		// (5)⑦給与支給額一覧表を出力するメソッドの呼び出し
		office.list();
	}

	// (4)③ArrayList に登録するメソッド
	public void register(String[] lines) {

		// (6)①引数で受け取った String 配列から1行ずつ文字列を取り出す
		for (String line : lines) {

			try {
				// (6)②取り出した文字列をカンマで分割する
				String[] str = line.split(",");

				// (6)④番号、給与の整数変換
				int no = Integer.parseInt(str[1]);
				int salary = Integer.parseInt(str[3]);

				// (6)③分割した文字列の最初の文字列により処理を変える
				switch (str[0]) {
					// (6)③一般社員の処理
					case "Employee":
						employees.add(new Employee(no, str[2], salary));
						// (6)⑤登録の出力と、文字列の出力
						System.out.println("登録:" + line);
						break;
					// (6)③管理職の処理
					case "Manager":
						// (6)④管理職手当の整数変換
						int allowance = Integer.parseInt(str[4]);
						employees.add(new Manager(no, str[2], salary, allowance));
						// (6)⑤登録の出力と、文字列の出力
						System.out.println("登録:" + line);
						break;
					// (6)③パートタイマーの処理
					case "Parttimer":
						// (6)④月間勤務時間の整数変換
						int hour = Integer.parseInt(str[4]);
						employees.add(new PartTimer(no, str[2], salary, hour));
						// (6)⑤登録の出力と、文字列の出力
						System.out.println("登録:" + line);
						break;
					// (6)③その他の処理
					default:
						System.out.println("分類区分エラー:" + line);
						break;
				}
			// (6)④数値変換エラー表示
			} catch(NumberFormatException e) {
				System.out.println("数値変換エラー:" + line);
			}
		}
	}

	// (4)④給与支給額一覧表の出力メソッド
	public void list() {
		for (Employee emp : employees) {
			emp.printData();
		}
	}
}