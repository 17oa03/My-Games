<%@ page contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP課題5</title>
	</head>
	<body>
		<h1>JSP課題5</h1>
		<p>目標 : JSPから別のJSPへの画面転送と、データベースのテーブルへデータの追加をする。
		</p>
		<form action="member4.jsp">
			<p>
				番号 : <input name="bango"><br>
				名前 : <input name="name"><br>
				<input type="submit" value="追加">
			</p>
		</form>
	</body>
</html>