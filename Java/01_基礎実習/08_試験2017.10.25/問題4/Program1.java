package jtest02;

public class Program1 {
	public static void main(String[] args) {

		Enzan2 enzan = new Enzan2(30, 40);

		enzan.keisan();

		System.out.println("答 = " + enzan.getAnswer());
	}
}

/*
【実行結果】
答 = 1260
*/

/*
【解説】
Enzan2 のインスタンスを生成する際に、
Enzan2 のコンストラクタに引数「30」と「40」の整数が渡されています。
Enzan2 のコンストラクタが Enzan1のコンストラクタを呼び出し、
Enzan1 のフィールド(seisu1, seisu2)に引数がセットされています。
次に、Enzan1 の keisan() メソッドを呼び出し、
wa(),sa(),seki() メソッドが呼び出されます。
wa() メソッドでは、
Enzan2 のフィールド(answer)にseisu1(30)とseisu2(40)の和(70)が加算されます。
sa() メソッドでは、
Enzan2 のフィールド(answer)にseisu1(30)とseisu2(40)の差(-10)が加算されます。
seki() メソッドでは、
Enzan2 のフィールド(answer)にseisu1(30)とseisu2(40)の積(1200)が加算されます。
つまり、answer には 1260(70 + -10 + 1200) が格納されています。
最後に answer を出力しているので、
答えは実行結果の通りになります。
*/