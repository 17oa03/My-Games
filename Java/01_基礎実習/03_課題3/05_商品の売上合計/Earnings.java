package jkadai03;

public class Earnings {
	private String name; // ①(商品名のフィールド)
	private int unitPrice; // ①(単価のフィールド)
	private int quantity; // ①(数量のフィールド)
	private int price; // ①(金額のフィールド)

	// 静的フィールドの定義、インスタンスを生成せずにアクセスできるフィールド
	private static int totalPrice = 0; // ①(合計金額のフィールド)

	public Earnings(String name, int unitPrice, int quantity) { // ②(コンストラクタの定義)
		this.name = name;
		this.unitPrice = unitPrice;
		this.quantity = quantity;

		price = unitPrice * quantity;

		totalPrice += price; // ②(金額を合計金額に加算する)
	}

	public void dispDetails() { // ③(明細行の出力メソッドの定義)
		System.out.printf("商品名:%s,単価:%d 円,数量:%d,金額:%d 円\n",
							name,
							unitPrice,
							quantity,
							price);
	}

	public static void dispTotal() { // ④(合計金額出力クラスメソッドの定義)
		System.out.printf("売上合計:%d 円\n", totalPrice);
	}

}
