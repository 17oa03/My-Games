package jkadai06;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Kadai0601_2 {
	public static void main(String[] args) {
		String str = "C 言語,データベース,Fortran,JSP,COBOL,サーブレット";
		System.out.println("変更前文字列 = " + str);

		List<String> list = new ArrayList<>(Arrays.asList(str.split(",")));
		list.add(1, "Java");
		list.set(3, "HTML");
		list.remove(5);

		System.out.println("変更後文字列 = " + String.join(",", list));
	}
}

/*
【実行結果】
変更前文字列 = C 言語,データベース,Fortran,JSP,COBOL,サーブレット
変更後文字列 = C 言語,Java,データベース,HTML,JSP,サーブレット
*/

/*
【Memo】
asList() により「固定長のリスト」になる為、
add() 実行時に例外が投げられる。

インスタンスを ArrayList<>() のコンストラクタに渡し、
「可変長のリスト」にすることで解決する。
*/