<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="java.sql.*" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP課題3</title>
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

			try {
				// JBBCドライバクラスのダウンロード
				Class.forName("oracle.jdbc.OracleDriver");
				// Connection の作成
				conn = DriverManager.getConnection("jdbc:oracle:thin:@" + server + ":1521:" + sid,user,pass);
				// Statement の作成
				st = conn.createStatement();
				// ResultSet でDBMSの検索結果を受け取る
				ResultSet rs = st.executeQuery("select * from meibo order by id");
				// テーブルのデータを出力
				out.print("<table border=\"1\"><tr>");
				while (rs.next())
					out.print("<td>" + rs.getInt("id") + "</td>" + "<td>" + rs.getString("name") + "</td></tr>");
				out.print("</table>");
				// クローズ処理
				st.close();
				conn.close();
			} catch (SQLException e) {
				out.println("エラー : " + e);
			} catch (Exception e) {
				out.println("エラー : " + e);
			}
		%>
	</body>
</html>