package jtest02;

public class Program2 {
	public static void main(String[] args) {

		Worker[] workers = new Worker[3];

		workers[0] = new Seizo();
		workers[1] = new Eigyo();
		workers[2] = new Keiri();

		for (Worker worker : workers) {
		worker.operation();
		worker.meeting();
		}
	}
}

/*
【実行結果】
Exception in thread "main" java.lang.Error: Unresolved compilation problem:
	型の不一致: Eigyo から Worker には変換できません

	at jtest02.Program2.main(Program2.java:9)
*/

/*
【解説】
Eigyo は Worker インタフェースを実装したクラスではないのに、
Worker 型の配列に Eigyo を格納しようとしている。
上記の理由より、
「型の不一致: Eigyo から Worker には変換できません」が発生している。
*/