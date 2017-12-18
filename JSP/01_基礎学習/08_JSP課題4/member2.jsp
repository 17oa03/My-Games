<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="kadai3.Member" %>
<%@ page import="java.sql.*" %>
<%@ page import="java.util.*" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
	<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP課題4</title>
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
				ResultSet rs = st.executeQuery("select * from meibo");
				// データベースのデータを ArrayList に格納する
				ArrayList<Member> al = new ArrayList<Member>();
				while (rs.next()) {
					Member m = new Member();
					m.setId(rs.getInt("id"));
					m.setName(rs.getString("name"));
					al.add(m);
				}
				// ArrayList を session に格納する
				session.setAttribute("mem", al);
				// クローズ処理
				st.close();
				conn.close();
			} catch (SQLException e) {
				out.println("エラー : " + e);
			} catch (Exception e) {
				out.println("エラー : " + e);
			}
			// member_disp.jsp をフォワードする
			request.getRequestDispatcher("/WEB-INF/member_disp.jsp").forward(request, response);
		%>
	</body>
</html>