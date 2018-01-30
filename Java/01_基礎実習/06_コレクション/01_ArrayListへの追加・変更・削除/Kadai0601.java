package jkadai06;

import java.util.ArrayList;

public class Kadai0601 {
	public static void main(String[] args) {
		String str = "C 言語,データベース,Fortran,JSP,COBOL,サーブレット"; // (1)
		System.out.println("変更前文字列 = " + str);

		ArrayList<String> aryList = new ArrayList<>();

		String[] strAry = str.split(",");
		for (String s : strAry)
			aryList.add(s); // (2)①
		aryList.add(1, "Java"); // (2)②
		aryList.set(3, "HTML"); // (2)③
		aryList.remove(5); // (2)④

		str = "";
		for (String s : aryList)
			str += s + ","; // (2)⑤
		System.out.println("変更後文字列 = " + str.substring(0, str.length() - 1));
	}
}

/*
【実行結果】
変更前文字列 = C 言語,データベース,Fortran,JSP,COBOL,サーブレット
変更後文字列 = C 言語,Java,データベース,HTML,JSP,サーブレット
*/