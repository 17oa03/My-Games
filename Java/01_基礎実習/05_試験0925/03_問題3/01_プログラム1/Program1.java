public class Program1 {
	public static void main(String[] args) {

		int x,y;

		x = 5;
		y = 10;
		if (x++ == 5 || y++ == 8) {
			System.out.println("true");
		} else {
			System.out.println("false");
		}
		System.out.println("x = " + x);
		System.out.println("y = " + y);
	}
}

/*
【実行結果】
true
x = 6
y = 10
*/

/*
【解説】
if文の条件式は、
「x == 5」の評価後に「x++」という順番で処理しています。
もし、「x++」が「++x」だった場合は、
「++x」の後に「x == 5」の評価を処理します。

また、条件式の短絡評価により、
「y++」の処理は行われていません。
「x == 5」で「true」が確定した場合、
もう片方の評価と処理は行わないという動きをします。
*/