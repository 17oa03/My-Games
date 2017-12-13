<%@ page contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP課題6</title>
	</head>
	<body>
		<h1>JSP課題6</h1>
		<p>目標 : JSPから別のJSPへのデータ送信と、データベースのテーブルでのデータの変更をする。
		</p>
		<form action="member5.jsp">
			<p>
				番号 : <input name="bango"><br>
				名前 : <input name="namae"><br>
				<input type="submit" value="変更">
			</p>
		</form>
	</body>
</html>