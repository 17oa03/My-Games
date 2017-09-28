package jkadai05;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;

public class Kadai0505 {
	public static void main(String[] args) {
		FileManagement fileManagement = null; // (6)①

		Scanner scanner = new Scanner(System.in);

		System.out.print("ファイル名 ==> ");
		try {
			fileManagement = new FileManagement(scanner.nextLine()); // (1), (3)
			fileManagement.fileOpen(); // (6)②
			fileManagement.fileClose(); // (6)③
			System.out.println("ファイル：" +
				fileManagement.getFileName() + " は、存在します。");
		} catch (FileNotFoundException e) {
			System.out.println("ファイル：" +
				fileManagement.getFileName() + " は、存在しません。"); // (2)①
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