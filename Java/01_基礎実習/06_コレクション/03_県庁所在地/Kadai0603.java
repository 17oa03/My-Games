package jkadai06;

import java.util.HashMap;
import java.util.Scanner;

public class Kadai0603 {
	public static void main(String[] args) {
		HashMap<String, String> hashMap = new HashMap<>();

		hashMap.put("茨城", "水戸市"); // (1),(2)
		hashMap.put("栃木", "宇都宮市");
		hashMap.put("群馬", "前橋市");
		hashMap.put("埼玉", "さいたま市");
		hashMap.put("千葉", "千葉市");
		hashMap.put("神奈川", "横浜市");

		Scanner sc = new Scanner(System.in);
		System.out.print("関東の県名 ==> ");
		String city = hashMap.get(sc.nextLine());

		if (city == null)
			System.out.println("関東の県名ではありません。"); // (3)
		else
			System.out.println(city);
	}
}

/*
【実行結果1】
関東の県名 ==> 栃木
宇都宮市
【実行結果2】
関東の県名 ==> 群馬
前橋市
【実行結果3】
関東の県名 ==> 茨城
水戸市
【実行結果4】
関東の県名 ==> 埼玉
さいたま市
【実行結果5】
関東の県名 ==> 千葉
千葉市
【実行結果6】
関東の県名 ==> 神奈川
横浜市
【実行結果7】
関東の県名 ==> 青森
関東の県名ではありません。
*/