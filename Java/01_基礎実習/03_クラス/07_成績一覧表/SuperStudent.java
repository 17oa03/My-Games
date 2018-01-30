package jkadai03;

public class SuperStudent extends Student { // Student クラスを継承

	public static void sort(Student[] studentAry) {
		boolean flag = true;

		for (int i = 0; i < studentAry.length && flag == true; i++) { // 降順バブルソートループ
			for (int j = studentAry.length - 2; j >= i; j--) {
				if (studentAry[i].getScore() < studentAry[j + 1].getScore()) { // getter で点数を比較
					Student work = studentAry[j]; // データ交換
					studentAry[j] = studentAry[j + 1];
					studentAry[j + 1] = work;
				}
			}
		}
	}
}
