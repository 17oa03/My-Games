package jtest02;

import java.util.HashMap;

public class Program5 {
	public static void main(String[] args) {

		HashMap<String, String> books = new HashMap<>();

		books.put("坊っちゃん", "夏目漱石");
		books.put("武蔵野", "国木田独歩");
		books.put("たけくらべ", "樋口一葉");
		books.put("一握りの砂", "石川啄木");

		String auther;
		auther = books.get("たけくらべ");
		System.out.println(auther);
	}
}

/*
【実行結果】
樋口一葉
*/

/*
【解説】
get() メソッドは指定されたキーがマップされている値を返します。
つまり、「たけくらべ」キーにマップされている「樋口一葉」が返されるので、
変数 auther を出力すると「樋口一葉」が表示されます。
*/