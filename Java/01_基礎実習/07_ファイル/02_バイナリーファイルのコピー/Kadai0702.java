package jkadai07;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class Kadai0702 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("入力ファイル名 ==> ");
		String fileInName = sc.nextLine();
		System.out.print("出力ファイル名 ==> ");
		String fileOutName = sc.nextLine();

		int count = 0;
		try (FileInputStream fis = new FileInputStream(fileInName);
			 FileOutputStream fos = new FileOutputStream(fileOutName)) {
			int data;
			while ((data = fis.read()) != -1) {
				fos.write(data);
				count++;
			}
			System.out.println(count + "バイトコピーしました。");
		} catch (FileNotFoundException e) {
			System.out.println(
					"入力ファイル(" + fileInName + ")が、みつかりません。");
		} catch (IOException e) {
			System.out.println("ファイル入出力エラー");
		}
	}
}

/*
【実行結果1】
入力ファイル名 ==> gazou1.gif
出力ファイル名 ==> gazou2.gif
102889バイトコピーしました。

【実行結果2】
入力ファイル名 ==> gazou3.gif
出力ファイル名 ==> gazou2.gif
入力ファイル(gazou3.gif)が、みつかりません。
*/