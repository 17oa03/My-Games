<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">

<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP確認課題2</title>
	</head>
	<body>
		<h1>JSP確認課題2</h1>
		<%
			request.setCharacterEncoding("utf-8");
			try {
				int su1 = Integer.parseInt(request.getParameter("su1"));
				int su2 = Integer.parseInt(request.getParameter("su2"));
				out.println(su1 + " + " + su2 + " = " + (su1 + su2) + " です");
			} catch (NumberFormatException e) {
				out.println("整数を入力してください");
			}
		%>
		<p><a href="tasu.html">戻る</a>
		</p>
	</body>
</html>