package jkadai06;

import java.util.ArrayList;
import java.util.Scanner;

public class Kadai0602 {
	public static void main(String[] args) {
		ArrayList<Product> aryList = new ArrayList<>();

		Product p1 = new Product(21, "鉛筆",      30); // (1)
		Product p2 = new Product(68, "ノート",   100);
		Product p3 = new Product(37, "定規",     150);
		Product p4 = new Product(40, "消しゴム",  50);
		Product p5 = new Product(85, "コンパス", 230);

		aryList.add(p1); // (2)
		aryList.add(p2);
		aryList.add(p3);
		aryList.add(p4);
		aryList.add(p5);

		Scanner sc = new Scanner(System.in);
		while (true) {
			System.out.print("商品コード ==> ");
			String str = sc.nextLine();

			if (str.isEmpty()) // (5)
				break;

			try {
				int code = Integer.parseInt(str);
				int count = 0;

				for (Product a : aryList) {
					count++;

					if (code == a.getCode()) {
						System.out.println(
							"商品名 : " + a.getName() + "\n" +
							"単  価 : " + a.getUnitPrice());
						break;
					} else if (count == aryList.size()) {
						System.out.println("該当する商品はありません。"); // (3)
					}
				}
			} catch (NumberFormatException e) {
				System.out.println("商品コードは整数で入力してください。"); // (4)
			}
		}
	}
}

/*
【実行結果】
商品コード ==> 85
商品名 : コンパス
単  価 : 230
商品コード ==> abc
商品コードは整数で入力してください。
商品コード ==> 37
商品名 : 定規
単  価 : 150
商品コード ==> 55
該当する商品はありません。
商品コード ==> 21
商品名 : 鉛筆
単  価 : 30
商品コード ==>
*/