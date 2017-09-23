public class Program7 {
	public static void main(String[] args) {

		Keisan keisan1 = new Keisan();
		keisan1.setData(20, 30);

		Keisan keisan2 = new Keisan();
		keisan2.setData(20, 30, 40);

		Keisan keisan3 = new Keisan();
		keisan3.setData(20, 30, 40, 50);

		Keisan keisan4 = new Keisan();
		keisan4.setData();

		System.out.println("答 1 = " + keisan1.getAnswer());
		System.out.println("答 2 = " + keisan2.getAnswer());
		System.out.println("答 3 = " + keisan3.getAnswer());
		System.out.println("答 4 = " + keisan4.getAnswer());
	}
}

/*
【実行結果】
答 1 = 50
答 2 = 10
答 3 = -1950
答 4 = 0
*/

/*
【解説】
オーバーロードされたセッターを呼び出した後、
「getAnswer()」を呼び出して計算結果を出力している。
*/