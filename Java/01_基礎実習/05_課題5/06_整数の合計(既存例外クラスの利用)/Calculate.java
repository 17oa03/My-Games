package jkadai05;

public class Calculate { // (4)①

	public int total(int n) { // (4)②
		if (n < 1)
			throw new IllegalArgumentException(
				"1 以上の整数を入力してください。"); // (2)①, (4)③
		else if (n > 1000)
			throw new IllegalArgumentException(
				"1000 以下の整数を入力してください。"); // (2)②, (4)③
		else
			return n * (n + 1) / 2;
	}
}
