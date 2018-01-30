/*
【概要】
学生の情報を管理するクラスから、
5名分のインスタンスを生成する。
5名分の情報を一覧表で標準出力に出力する。
 */

// 【プログラム】
package jkadai03;

public class Kadai0303 {
	public static void main(String[] args) {
		String[] data = { // ①(String 配列の定義)
				"10,東京太郎,80",
				"20,東京次郎,50",
				"30,東京三郎,90",
				"40,東京四郎,60",
				"50,東京五郎,70",
		};

		Student[] studentAry = new Student[data.length]; // ②(インスタンス配列の宣言)
		String[] strAry = new String[3];

		for (int i = 0; i < data.length; i++) {
			strAry = data[i].split(","); // ②(String 配列をカンマ区切り)

			studentAry[i] = new Student( // ②(インスタンス配列に代入して管理
					Integer.parseInt(strAry[0]),
					strAry[1],
					Integer.parseInt(strAry[2]));
		}

		for (Student i : studentAry) { // ③(②で定義した配列から一覧表を出力)
			i.dispData();
		}
	}
}

/*
【実行結果】
データをフィールドに設定し、インスタンスを生成しました。
データをフィールドに設定し、インスタンスを生成しました。
データをフィールドに設定し、インスタンスを生成しました。
データをフィールドに設定し、インスタンスを生成しました。
データをフィールドに設定し、インスタンスを生成しました。
番号:10, 氏名:東京太郎, 点数:80
番号:20, 氏名:東京次郎, 点数:50
番号:30, 氏名:東京三郎, 点数:90
番号:40, 氏名:東京四郎, 点数:60
番号:50, 氏名:東京五郎, 点数:70
*/
