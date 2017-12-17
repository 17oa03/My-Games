<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="kadai2.Calc" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html lang="ja">
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP課題2</title>
	</head>
	<body>
		<%
			int a = 20, b = 30, c = 40;
			Calc calc = new Calc();
			int answer = calc.add(a, b, c);
			out.print(a + " + " + b + " + " + c + " = " + answer);
		%>
	</body>
</html>