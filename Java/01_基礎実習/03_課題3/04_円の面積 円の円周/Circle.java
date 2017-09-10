package jkadai03;

public class Circle {

	// static 付けることで、インスタンスを生成せずにクラスから呼び出せる「クラスメソッド」になる
	public static double area(int radius) { // ②(引数 : 半径(int 型))
		return radius * radius * Math.PI; // ①(半径を元に円の面積を計算),②(戻り値 : 円の面積(double 型))
	}

	public static double circumference(int radius) { // ②(引数 : 半径(int 型))
		return (radius + radius) * Math.PI; // ①(半径を元に円の円周を計算),②(戻り値 : 円の円周(double 型))
	}

}
