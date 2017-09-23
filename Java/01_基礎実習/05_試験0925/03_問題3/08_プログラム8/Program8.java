public class Program8 {
	public static void main(String[] args) {

		Employee taro = new Employee(10, "東京太郎", 300000);
		Manager jiro = new Manager(20, "東京次郎", 400000, 50000);
		Employee sabro = new Manager(30, "東京三郎", 500000, 30000);
		Employee siro = new Employee(40, "東京四郎", 200000);
		Manager goro = new Manager(50, "東京五郎", 300000, 40000);

		taro.dispData();
		taro.dispKyuyo();
		jiro.dispData();
		jiro.dispKyuyo();
		sabro.dispData();
		sabro.dispKyuyo();
		siro.setZangyo(70000);
		siro.dispData();
		siro.dispKyuyo();
		goro.setZangyo(60000);
		goro.dispData();
		goro.dispKyuyo();
	}
}

/*
【実行結果】
社員番号:10 社員名:東京太郎 給与額:300000円
給与額:300000円
社員番号:20 社員名:東京次郎 給与額:450000円
給与額:450000円
社員番号:30 社員名:東京三郎 給与額:530000円
給与額:530000円
社員番号:40 社員名:東京四郎 給与額:270000円
給与額:270000円
社員番号:50 社員名:東京五郎 給与額:400000円
給与額:400000円
*/

/*
【解説】
継承の基礎的な問題となっている。

「Employee」クラスの「給与額」は、
「基本給 + 残業代」、
「Manager」クラスの「給与額」は、
「基本給 + 残業代 + 管理職手当」になる。
*/
