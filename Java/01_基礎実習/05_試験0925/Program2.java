public class Program2 {
	public static void main(String[] args) {

		String str1 = "Java";
		String str2 = str1;

		if (str1 == str2)
			System.out.println("ア");
		else
			System.out.println("イ");

		if (str1.equals(str2))
			System.out.println("ウ");
		else
			System.out.println("エ");

		str1 = "Servlet";

		if (str1 == str2)
			System.out.println("オ");
		else
			System.out.println("カ");

		if (str1.equals(str2))
			System.out.println("キ");
		else
			System.out.println("ク");
	}
}

/*
【実行結果】
ア
ウ
カ
ク
*/

/*
【解説】
「str1 == str2」は「等値判定」、
同じアドレスかどうかを評価している、
「str1.equals(str2)」は「等価判定」、
同じ内容かどうかを評価している(同じアドレスを指していなくてもよい)

上記より、
ア : 同じアドレスなので「true」
ウ : 同じ内容なので「true」
カ : 違うアドレスなので「false」
ク : 違う内容なので「false」
となる。
*/
