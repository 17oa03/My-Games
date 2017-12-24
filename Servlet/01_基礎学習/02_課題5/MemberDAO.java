package kadai5;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class MemberDAO {
	public String search(int id) {

		// Connection の作成
		Connection conn = null;
		// Statement の作成
		PreparedStatement ps = null;
		// Oracle ユーザー名
		String user = "test";
		// Oracle パスワード
		String pass = "test";
		// Oracle サーバ名
		String server = "localhost";
		// Oracle SID(Security Identifier(セキュリティ識別子))
		String sid = "xe";
		// Resultset の作成
		ResultSet rs = null;
		// SQL 文の作成
		String sql = "select * from meibo where id = ?";
		// Member の作成
		Member m = new Member();

		try {
			// JBBCドライバークラスのロード
			Class.forName("oracle.jdbc.OracleDriver");
			// 接続文字列の格納
			conn = DriverManager.getConnection("jdbc:oracle:thin:@" + server + ":1521:" + sid,user,pass);
			// SQL 文の格納
			ps = conn.prepareStatement(sql);
			// 1番目の「?」に変数「id」の値を実装
			ps.setInt(1, id);
			// SQL 文の実行
			rs = ps.executeQuery();
			// カーソルを現在の位置から 1 行順方向に移動
			rs.next();
			// オブジェクトの現在行にある指定された列の値を取得
			m.setId(rs.getInt("id"));
			m.setName(rs.getString("name"));
			// クローズ処理
			rs.close();
			ps.close();
			conn.close();
		} catch (SQLException e) {
			System.out.println(e);
		} catch (Exception e) {
			System.out.println(e);
		}
		return m.getId() + m.getName();
	}
}