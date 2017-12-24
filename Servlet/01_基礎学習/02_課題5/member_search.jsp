<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="utf-8" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html lang="ja">
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
		<title>Servlet課題5</title>
	</head>
	<body>
		<form action="<%= request.getContextPath() %>/s5" method="get" accept-charset="utf-8">
			<p>番号 : <input name="id">
			</p>
			<p><input type="submit" value="送信">
			</p>
		</form>
	</body>
</html>