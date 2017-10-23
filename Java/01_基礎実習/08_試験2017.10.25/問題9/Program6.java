package jtest02;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class Program6 {
	public static void main(String[] args) {

		try (PrintWriter pw = new PrintWriter(
				new BufferedWriter(new FileWriter("moji.txt")))) {
			pw.println("漢字");
			pw.println("abcde");
			pw.println("123456");
		} catch (IOException e) {
			System.out.println("ファイル入出力エラー");
		}

		String data;
		int cnt = 0;
		try (BufferedReader br = new BufferedReader(
				new FileReader("moji.txt"))) {
			while ((data = br.readLine()) != null) {
				cnt++;
				if (cnt == 2) {
					System.out.println(data);
				}
			}
		} catch (FileNotFoundException e) {
			System.out.println("ファイルがありません。");
		} catch (IOException e) {
			System.out.println("ファイル出力エラー");
		}
	}
}

/*
【実行結果】
abcde
*/

/*
【解説】
"moji.txt"の1行目に"漢字"を書き込む。
"moji.txt"の2行目に"abcde"を書き込む。
"moji.txt"の3行目に"123456"を書き込む。
cnt が 1 になって、"moji.txt"の1行目"漢字"を読み込む。
cnt が 2 になって、"moji.txt"の2行目"abcde"を読み込む、さらに出力される。
cnt が 3 になって、"moji.txt"の2行目"123456"を読み込む。
よって、実行結果には「abcde」が出力される。
データの流れだけ見れば難しい問題ではない。

下記にクラスの解説を記載する。

・FileWriter をインスタンス化することで、
ファイルを開くことができる。
もし指定したファイルが存在しない場合は、
自動的にそのファイル名でファイルが作成され書き込みに備える。

・BufferedWriter と BufferedReader はバッファリングフィルタです、
バッファリングフィルタは、
流れるデータを溜め込み、
纏まった量になったところで一気に流す仕事をします。

・PrintWriter は、
print()メソッドとprintln()メソッドを実装しているクラスです。
これらのメソッドはint型,float型,double型などを自動的にString型に変換を行い出力してくれます、
つまり、この2つのメソッドを利用する為にインスタンス化しています。

・FileReader をインスタンス化することで、
ファイルの読み込みができる。
*/