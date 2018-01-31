// 2.(5)Item クラスの継承する
public class Dry extends Item {

	// 2.(5)コンストラクタでフィールドに値をセットする
	public Dry(String shohin_mei, int waribiki, int price, int zaiko_su) throws MinusException {
		// 2.(5)為替相場による定価変動処理
		super(shohin_mei, price - (price * waribiki) / 100, zaiko_su);
		// 2.(5)負の割引率エラー処理
		if (waribiki < 0)
			throw new MinusException();
	}

}