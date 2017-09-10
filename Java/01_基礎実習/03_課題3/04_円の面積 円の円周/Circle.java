package jkadai03;

public class Circle {

	// static 付けることで、インスタンスを生成せずにクラスから呼び出せる「クラスメソッド」になる
	public static double area(int radius) { // 面積計算メソッド
		return radius * radius * Math.PI; // 面積の計算結果を返す
	}

	public static double circumference(int radius) { // 円周計算メソッド
		return (radius + radius) * Math.PI; // 円周の計算結果を返す
	}

}
