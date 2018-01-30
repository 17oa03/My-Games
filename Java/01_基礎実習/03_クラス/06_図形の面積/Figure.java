package jkadai03;

public class Figure {
	// ①(フィールドは定義しない)
	// ⑤(計算出力メソッドは全て同名にする)

	public void calculate(double num1) { // ②(正方形の面積を計算して出力)
		System.out.printf("正方形 : %.1f * %.1f = %.2f\n",
							num1, num1, num1 * num1);
	}

	public void calculate(double num1, double num2) { // ③(長方形の面積を計算して出力)
		System.out.printf("長方形 : %.1f * %.1f = %.2f\n",
							num1, num2, num1 * num2);
	}

	public void calculate(double num1, double num2, double num3) { // ④(台形の面積を計算して出力)
		System.out.printf("台形 : (%.1f + %.1f) * %.1f / 2.0 = %.2f",
							num1, num2, num3, (num1 + num2) * num3 / 2.0);
	}
}
