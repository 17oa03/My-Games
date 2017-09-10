/*
【概要】
学生の情報を管理するクラスから、
3名分のインスタンスを生成する。
インスタンスをデータに設定し、
設定した内容を標準出力に出力する。
 */

// 【プログラム】
package jkadai03;

public class Kadai0301 {
	public static void main(String[] args) {
		Student s1 = new Student(); // ①

		s1.setData(10, "東京太郎", 80); // ②

		Student s2 = new Student(20, "東京次郎", 70); // ③

		Student s3 = new Student(); // ④

		s3.setNo(30); // ⑤
		s3.setName("東京三郎"); // ⑤
		s3.setScore(90); // ⑤

		s1.dispData(); // ⑥

		System.out.printf("番号:%d, 氏名:%s, 点数:%d\n", // ⑦
							s2.getNo(),
							s2.getName(),
							s2.getScore());

		System.out.println(s3); // ⑧
	}
}

/*
【実行結果】
インスタンスを生成しました。
データをフィールドに設定しました。
データをフィールドに設定し、インスタンスを生成しました。
インスタンスを生成しました。
番号をフィールドに設定しました。
氏名をフィールドに設定しました。
点数をフィールドに設定しました。
番号:10, 氏名:東京太郎, 点数:80
番号:20, 氏名:東京次郎, 点数:70
番号:30, 氏名:東京三郎, 点数:90
*/