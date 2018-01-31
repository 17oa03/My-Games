/*
1.(1)プログラム概要
フルーツショップの管理システムです。
商品には、生フルーツ、ドライフルーツ、フルーツ缶詰があり、
商品区分により管理方法が異なります。
商品台帳を登録し、登録後の商品一覧表を作成します。
 */
import java.util.ArrayList;

// 2.(2)FShop クラス
public class FShop {
	ArrayList<Item> items = new ArrayList<>();

	// 2.(2).①main メソッド
	public static void main(String[] args) {
		// 1.(2)登録データ
		String[] lines = {
				"Fresh,伊予みかん5ｷﾛｾｯﾄ,2500,100",
				"Fresh, 伊予かん 10ｷﾛｾｯﾄ,あいう,13",
				"Fresh, 柑橘系１年ﾌﾟﾚｾﾞﾝﾄｾｯﾄ,50000,B",
				"Fresh,清実,580,1",
				"Dry,ドライマンゴ,0,4800,20",
				"Dry,ドライ桃,-15,4800,20",
				"Dry,ドライオレンジ,-10,4800,20",
				"Dry,ドライレモン,あ,4800,20",
				"Dry,ドライキウイ,10,4000,50",
				"Cans,みかん,100,10",
				"Cans,マンゴスティン,3000,1000",
				"nama,バナナ,98,10"
		};

		// 1.(3).①プログラム開始メッセージの出力
		System.out.println("**  番号  Java プログラム開始  **");
		System.out.println("");

		// 1.(3).②登録処理メッセージの出力
		System.out.println("<  商品台帳  登録開始  >");
		FShop fs = new FShop();
		fs.touroku(lines);
		System.out.println("");

		// 1.(3).④商品一覧表表示処理メッセージの出力
		System.out.println("<  商品一覧表  >");
		fs.hyouji();

		// 1.(3).⑥プログラム終了メッセージの出力
		System.out.println("**  番号  Java プログラム終了  **");
	}

	// 2.(2).②touroku メソッド (登録)
	public void touroku(String[] lines) {
		for (String line : lines) {
			try {
				String[] str = line.split(",");

				int price = 0;
				int zaiko_su = 0;
				int waribiki = 0;
				if (str.length == 4) {
					price = Integer.parseInt(str[2]);
					zaiko_su = Integer.parseInt(str[3]);
				} else if (str.length == 5) {
					waribiki = Integer.parseInt(str[2]);
					price = Integer.parseInt(str[3]);
					zaiko_su = Integer.parseInt(str[4]);
				}

				switch (str[0]) {
					case "Fresh":
						items.add(new Fresh(str[1], price, zaiko_su));
						// 1.(3).③登録処理メッセージの出力
						System.out.println(str[0] + " を登録しました=" + str[1]);
						break;
					case "Dry":
						items.add(new Dry(str[1], waribiki, price, zaiko_su));
						// 1.(3).③登録処理メッセージの出力
						System.out.println(str[0] + " を登録しました=" + str[1]);
						break;
					case "Cans":
						items.add(new Cans(str[1], price, zaiko_su));
						// 1.(3).③登録処理メッセージの出力
						System.out.println(str[0] + " を登録しました=" + str[1]);
						break;
					default :
						// 2.(4)(5)(6).(注)登録エラー処理
						System.out.println("商品登録エラー:商品分類がありません " + line);
				}
			} catch (NumberFormatException e) {
				// 2.(4)(5)(6).(注)登録エラー処理
				System.out.println("商品登録エラー:商品分類がありません " + line);
			} catch (ArrayIndexOutOfBoundsException e) {
				// 2.(4)(5)(6).(注)登録エラー処理
				System.out.println("商品登録エラー:商品分類がありません " + line);
			} catch (MinusException e) {
				// 2.(4)(5)(6).(注)登録エラー処理
				System.out.println("商品登録エラー:商品分類がありません " + line);
			}
		}
	}

	// 1.(3).⑤商品一覧表の出力
	// 2.(2).③hyouji メソッド (表示)
	public void hyouji() {
		System.out.println("商品名                  値段          在庫数");
		for (Item item : items)
			System.out.printf("%-8s\t%12d%16d\n",
				item.getShohin_mei(), item.getPrice(), item.getZaiko_su());
		System.out.println("");
	}

}