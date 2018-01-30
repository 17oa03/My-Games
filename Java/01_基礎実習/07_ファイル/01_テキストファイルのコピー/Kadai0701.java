package jkadai07;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;

public class Kadai0701 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("入力ファイル名 ==> ");
		String fileInName = sc.nextLine();
		System.out.print("出力ファイル名 ==> ");
		String fileOutName = sc.nextLine();

		int count = 0;
		try (BufferedReader br = new BufferedReader(
				new FileReader(fileInName));
			 PrintWriter pw = new PrintWriter(
				new BufferedWriter(
					 new FileWriter(fileOutName)))) {
			String str;
			while ((str = br.readLine()) != null) {
				pw.println(str);
				count++;
			}
			System.out.println(count + "行コピーしました。");
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
入力ファイル名 ==> syohin.mst
出力ファイル名 ==> syohin.bak
7行コピーしました。

【実行結果2】
入力ファイル名 ==> tokuisaki.mst
出力ファイル名 ==> tokuisaki.bak
入力ファイル(tokuisaki.mst)が、みつかりません。
*/