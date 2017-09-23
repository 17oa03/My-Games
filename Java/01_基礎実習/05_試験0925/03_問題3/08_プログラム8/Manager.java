public class Manager extends Employee{

	public Manager(int no, String name, int kyuyo, int zangyo) { // コンストラクタ
		super(no, name, kyuyo);
		super.setZangyo(zangyo);
	}
}
