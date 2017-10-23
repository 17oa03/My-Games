package jtest02;

import java.util.ArrayList;

public class Program4 {
	public static void main(String[] args) {

		ArrayList<String> bungou = new ArrayList<>();

		bungou.add("国木田独歩");
		bungou.add("樋口一葉");
		bungou.add("芥川龍之介");
		bungou.add(1, "川端康成");
		bungou.remove(2);
		bungou.set(0, "夏目漱石");

		System.out.println(bungou.get(1));
	}
}

/*
【実行結果】
川端康成
*/

/*
【解説】
0番目"国木田独歩"を追加、
1番目"樋口一葉"を追加、
2番目"芥川龍之介"を追加、
0番目"国木田独歩"と1番目"樋口一葉"の間に"川端康成"を追加、
2番目"樋口一葉"を削除、
0番目"国木田独歩"を"夏目漱石"に置き換える。

上記の結果、

0番目"夏目漱石"
1番目"川端康成"
2番目"芥川龍之介"

が格納されていることになる。

つまり、bungou の1番目は"川端康成"となる。
*/