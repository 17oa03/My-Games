package jtest01;

public class Program5 {

	public static void main(String[] args) {

		Staff taro = new Staff(10, "東京太郎", 30);
		Staff jiro = new Staff(20, "東京次郎", 40);
		Staff sabro = new Staff();
		sabro.setNo(30);
		sabro.setName("東京三郎");
		sabro.setAge(20);

		System.out.println("値 1 = " + taro.getAge());
		System.out.println("値 2 = " + jiro.getNo());
		sabro.setAge(sabro.getAge() + 5);
		System.out.println("値 3 = " + sabro.getAge());
		int seisu = taro.getNo() + jiro.getAge();
		System.out.println("値 4 = " + seisu);
	}
}

/*
【実行結果】
値 1 = 30
値 2 = 20
値 3 = 25
値 4 = 50
*/

/*
【解説】
「値 1 = 30」は、
ゲッターから「taro」の「age」を取得しています。

「値 2 = 20」は、
 ゲッターから「jiro」の「no」を取得しています。

「値 3 = 25」は、
セッターで「sabro」の「age」に「5」を加算して、
ゲッターから「sabro」の「age」を取得しています。

「値 4 = 50」は、
ゲッターから「taro」の「no」と、
ゲッターから「jiro」の「age」を取得して、
合計した値になります。
*/