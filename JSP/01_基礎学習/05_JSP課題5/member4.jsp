<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.util.*" %>
<%@ page import="java.sql.*" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP課題5</title>
	</head>
	<body>
		<%
			// 日本語文字化け対策
			request.setCharacterEncoding("utf-8");
			// Connection
			Connection conn = null;
			// Statement
			Statement st = null;
			// ユーザー名
			String user = "test";
			// パスワード
			String pass = "test";
			// サーバ名
			String server = "localhost";
			// SID(Security Identifier(セキュリティ識別子))
			String sid = "xe";
			// 番号
			int id = 0;
			/* 名前 */
			String name = "";

			try {
				// JBBCドライバクラスのダウンロード
				Class.forName("oracle.jdbc.OracleDriver");
				// Connection の作成
				conn = DriverManager.getConnection("jdbc:oracle:thin:@" + server + ":1521:" + sid,user,pass);
				// Statement の作成
				st = conn.createStatement();
				// 番号の取得と整数変換
				id = Integer.parseInt(request.getParameter("bango"));
				// 名前の取得
				name = request.getParameter("name");
				// executeUpdate の戻り値は、insert文、update文、delete文の実行時の更新行数を返し、これら以外のSQL文の実行時は「0」を返す
				int ret = 0;
				if ((ret = st.executeUpdate("insert into meibo values(" + id + ",'" + name + "')")) > 0) {
					// ResultSet でDBMSの検索結果を受け取る
					ResultSet rs = st.executeQuery("select * from meibo order by id");
					// テーブルのデータを出力
					out.print("<table border=\"1\"><tr>");
					while (rs.next())
						out.print("<td>" + rs.getInt("id") + "</td>" + "<td>" + rs.getString("name") + "</td></tr>");
					out.print("</table>");
				}
				// クローズ処理
				st.close();
				conn.close();
			} catch (SQLException e) {
				out.println("エラー : " + e);
			} catch (Exception e) {
				out.println("エラー : " + e);
			}
		%>
		<form action="memberinsert.jsp">
			<p>
				<button type="submit">戻る</button>
			</p>
		</form>
	</body>
</html>