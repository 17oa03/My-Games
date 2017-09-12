package jkadai03;

public class OperatingRatio {

	public static double serial(double x, double y) { // (1)直列稼働率計算メソッド
		return x * y;
	}

	public static double parallel(double x, double y) { // (1)並列稼働率計算メソッド
		return (1 - (1 - x) * (1 - y));
	}
}
