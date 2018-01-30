package jkadai05;

import java.util.Scanner;

public class Kadai0507 {
	public static void main(String[] args) {
		StudentCheck studentCheck = new StudentCheck(); // (6)①
		Scanner scanner = new Scanner(System.in);

		try {
			System.out.print("番号 ==> ");
			String input = scanner.nextLine(); // (6)②
			int no = studentCheck.checkNo(input); // (6)③

			System.out.print("氏名 ==> ");
			input = scanner.nextLine(); // (6)②
			String name = studentCheck.checkName(input); // (6)③

			System.out.print("点数 ==> ");
			input = scanner.nextLine(); // (6)②
			int score = studentCheck.checkScore(input); // (6)③

			Student student = new Student(no, name, score); // (6)④
			student.dispData(); // (6)⑤
		} catch (StudentException e) {
			System.out.println(e.getMessage());
		}
	}
}

/*
【実行結果1】
番号 ==> 30
氏名 ==> 東京三郎
点数 ==> 90
データをフィールドに設定し、インスタンスを生成しました。
番号:30, 氏名:東京三郎, 点数:90

【実行結果2】
番号 ==> 51
番号は 1 から 50 までです。

【実行結果3】
番号 ==> 0
番号は 1 から 50 までです。

【実行結果4】
番号 ==> 50
氏名 ==>
氏名は 1 文字から 10 文字までです。

【実行結果5】
番号 ==> 50
氏名 ==> あいうえおかきくけこさ
氏名は 1 文字から 10 文字までです。

【実行結果6】
番号 ==> 50
氏名 ==> 東京五郎
点数 ==> 101
点数は 0 から 100 までです。

【実行結果7】
番号 ==> 50
氏名 ==> 東京五郎
点数 ==> -1
点数は 0 から 100 までです。
*/
