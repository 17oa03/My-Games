package jkadai03;

public class Earnings {
	private String name; // 商品名
	private int unitPrice; // 単価
	private int quantity; // 数量
	private int price; // 金額

	// 静的フィールドの定義、インスタンスを生成せずにアクセスできるフィールド
	static int totalPrice = 0; // 合計金額

	public Earnings(String name, int unitPrice, int quantity) { // コンストラクタ
		this.name = name; // 商品名の代入
		this.unitPrice = unitPrice; // 単価の代入
		this.quantity = quantity; // 数量の代入

		price = unitPrice * quantity; // 金額の計算

		totalPrice += price; // 合計金額に加算
	}

	public void dispDetails() { // 明細出力メソッド
		System.out.printf("商品名:%s,単価:%d 円,数量:%d,金額:%d 円\n",
							name, // 商品名の出力
							unitPrice, // 単価の出力
							quantity, // 数量の出力
							price); // 金額の出力
	}

	public static void dispTotal() { // 売上合計出力メソッド
		System.out.printf("売上合計:%d 円\n", totalPrice); // 出力
	}

}
