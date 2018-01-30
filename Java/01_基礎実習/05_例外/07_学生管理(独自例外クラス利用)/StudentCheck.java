package jkadai05;

public class StudentCheck {
// (4)①

	public int checkNo(String input) throws StudentException { // (4)②
		int no = Integer.parseInt(input);

		try {
			if (no < 1 || no > 50)
				throw new StudentException("番号は 1 から 50 までです。"); // (4)③
		} catch (NumberFormatException e) {
			throw new StudentException("番号は整数のみです。"); // (4)③
		}
		return no;
	}

	public String checkName(String input) throws StudentException { // (4)④
		int n = input.length();

		if (n < 1 || n > 10)
			throw new StudentException("氏名は 1 文字から 10 文字までです。"); // (4)⑤
		return input;
	}

	public int checkScore(String input) throws StudentException { // (4)⑥
		int score = Integer.parseInt(input);

		try {
			if (score < 0 || score > 100)
				throw new StudentException("点数は 0 から 100 までです。"); // (4)⑦
		} catch (NumberFormatException e) {
			throw new StudentException("点数は整数のみです。"); // (4)⑦
		}
		return score;
	}
}
