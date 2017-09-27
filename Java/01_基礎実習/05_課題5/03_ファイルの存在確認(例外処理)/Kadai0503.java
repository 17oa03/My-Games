package jkadai05;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class Kadai0503 {
	public static void main(String[] args) { // (3)
		Scanner scanner = new Scanner(System.in);

		System.out.print("ファイル名 ==> ");
		String fileName = scanner.nextLine(); // (1)

		try {
			FileReader fileReader = new FileReader(fileName);
			System.out.println("ファイル：" + fileName + " は、存在します。");
			fileReader.close();
		} catch (FileNotFoundException e) {
			System.out.println("ファイル：" + fileName + " は、存在しません。"); // (2)①
		} catch (IOException e) {
			System.out.println("ファイル入出力エラー"); // (2)②
		}
	}
}

/*
【実行結果1】
ファイル名 ==> TestFile.txt
ファイル：TestFile.txtは、存在します。

【実行結果2】
ファイル名 ==> abcdef.txt
ファイル：abcdef.txt は、存在しません。
*/